/*
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

#ifndef CAPU_IPHONEOS_TCPSERVERSOCKET_H
#define CAPU_IPHONEOS_TCPSERVERSOCKET_H


#include <capu/os/Posix/TcpServerSocket.h>

namespace capu
{
    namespace os
    {
        class TcpServerSocket: private capu::posix::TcpServerSocket
        {
        public:
            using capu::posix::TcpServerSocket::accept;
            using capu::posix::TcpServerSocket::close;
            using capu::posix::TcpServerSocket::bind;
            using capu::posix::TcpServerSocket::listen;
            using capu::posix::TcpServerSocket::port;
        };
    }
}
#endif // CAPU_IPHONEOS_TCPSERVERSOCKET_H