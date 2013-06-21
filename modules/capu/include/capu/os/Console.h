/*
 * Copyright (C) 2013 BMW Car IT GmbH
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

#ifndef CAPU_CONSOLE_H
#define CAPU_CONSOLE_H

#include <capu/Config.h>

#include <capu/os/PlatformInclude.h>
#include CAPU_PLATFORM_INCLUDE(Console)


namespace capu
{
    /**
     * Allows platform independent handling of console IO
     */
    class Console
    {
    public:
        /**
         * Checks whether there is input on stdin available or not
         * @return true if input on stdin is available, false otherwise
         */
        static bool_t IsInputAvailable();
    };

    inline
    bool_t
    Console::IsInputAvailable()
    {
        return capu::os::arch::Console::IsInputAvailable();
    }
}

#endif // CAPU_CONSOLE_H