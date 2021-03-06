/*
 * Copyright (C) 2012 BMW Car IT GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CAPU_WINDOWS_ATOMICOPERATION_H
#define CAPU_WINDOWS_ATOMICOPERATION_H

#include <Windows.h>

namespace capu
{
    namespace os
    {
        class AtomicOperation
        {
        public:
            static uint32_t AtomicAdd(volatile uint32_t& mem, uint32_t summand);
            static int32_t  AtomicAdd(volatile int32_t& mem, int32_t summand);
            static uint64_t AtomicAdd(volatile uint64_t& mem, uint64_t summand);
            static int64_t  AtomicAdd(volatile int64_t& mem, int64_t summand);

            static uint32_t AtomicSub(volatile uint32_t& mem, uint32_t subtrahend);
            static int32_t  AtomicSub(volatile int32_t& mem, int32_t subtrahend);
            static uint64_t AtomicSub(volatile uint64_t& mem, uint64_t subtrahend);
            static int64_t  AtomicSub(volatile int64_t& mem, int64_t subtrahend);

            static uint32_t AtomicInc(volatile uint32_t& mem);
            static int32_t  AtomicInc(volatile int32_t& mem);
            static uint64_t AtomicInc(volatile uint64_t& mem);
            static int64_t  AtomicInc(volatile int64_t& mem);

            static uint32_t AtomicDec(volatile uint32_t& mem);
            static int32_t  AtomicDec(volatile int32_t& mem);
            static uint64_t AtomicDec(volatile uint64_t& mem);
            static int64_t  AtomicDec(volatile int64_t& mem);
        };

        inline
        uint32_t
        AtomicOperation::AtomicAdd(volatile uint32_t& mem, uint32_t summand)
        {
            return InterlockedExchangeAdd((long*)&mem, summand);
        }

        inline
        int32_t
        AtomicOperation::AtomicAdd(volatile int32_t& mem, int32_t summand)
        {
          return InterlockedExchangeAdd((long*)&mem, summand);
        }

        inline
        uint64_t
        AtomicOperation::AtomicAdd(volatile uint64_t& mem, uint64_t summand)
        {
          return InterlockedExchangeAdd64((long long*)&mem, summand);
        }

        inline
        int64_t
        AtomicOperation::AtomicAdd(volatile int64_t& mem, int64_t summand)
        {
          return InterlockedExchangeAdd64((long long*)&mem, summand);
        }

        inline
        uint32_t
        AtomicOperation::AtomicSub(volatile uint32_t& mem, uint32_t subtrahend)
        {
            return InterlockedExchangeAdd((long*)&mem, 0 - subtrahend);
        }

        inline
        int32_t
        AtomicOperation::AtomicSub(volatile int32_t& mem, int32_t subtrahend)
        {
          return InterlockedExchangeAdd((long*)&mem, 0 - subtrahend);
        }

        inline
        uint64_t
        AtomicOperation::AtomicSub(volatile uint64_t& mem, uint64_t subtrahend)
        {
          return InterlockedExchangeAdd64((long long*)&mem, 0 - subtrahend);
        }

        inline
        int64_t
        AtomicOperation::AtomicSub(volatile int64_t& mem, int64_t subtrahend)
        {
          return InterlockedExchangeAdd64((long long*)&mem, 0 - subtrahend);
        }

        inline
        uint32_t
        AtomicOperation::AtomicInc(volatile uint32_t& mem)
        {
            return AtomicAdd(mem, 1);
        }

        inline
        int32_t
        AtomicOperation::AtomicInc(volatile int32_t& mem)
        {
          return AtomicAdd(mem, 1);
        }

        inline
        uint64_t
        AtomicOperation::AtomicInc(volatile uint64_t& mem)
        {
          return AtomicAdd(mem, 1);
        }

        inline
        int64_t
        AtomicOperation::AtomicInc(volatile int64_t& mem)
        {
          return AtomicAdd(mem, 1);
        }

        inline
        uint32_t
        AtomicOperation::AtomicDec(volatile uint32_t& mem)
        {
            return AtomicSub(mem, 1);
        }

        inline
        int32_t
        AtomicOperation::AtomicDec(volatile int32_t& mem)
        {
          return AtomicSub(mem, 1);
        }

        inline
        uint64_t
        AtomicOperation::AtomicDec(volatile uint64_t& mem)
        {
          return AtomicSub(mem, 1);
        }

        inline
        int64_t
        AtomicOperation::AtomicDec(volatile int64_t& mem)
        {
          return AtomicSub(mem, 1);
        }
    }
}




#endif //CAPU_WINDOWS_ATOMICOPERATION_H
