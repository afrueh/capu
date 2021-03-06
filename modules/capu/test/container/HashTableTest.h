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

#ifndef CAPU_HASHTABLETEST_H
#define CAPU_HASHTABLETEST_H

#include <gtest/gtest.h>

#include "capu/container/HashTable.h"
#include "capu/container/List.h"
#include "capu/container/String.h"

class HashTableTest: public ::testing::Test
{
public:
    struct MyStruct
    {
        capu::uint32_t a;
        capu::int16_t  b;

        capu::uint32_t getA()
        {
            return a;
        }

        capu::bool_t operator== (const MyStruct& other) const
        {
            return (a == other.a);
        }
    };
    typedef capu::HashTable<capu::int32_t, capu::int32_t> Int32HashMap;

    static const capu::uint32_t PERFORMANCE_MAP_SIZE = 1000000;

    enum SomeEnumeration
    {
        TEST_VALUE1,
        TEST_VALUE2,
    };

    void SetUp();
    void TearDown();
protected:
    Int32HashMap testHashMap;
};

#endif // CAPU_HASHTABLETEST_H
