// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LIBBSONCXX_ENUM
#error "This header is only meant to be included as an X-macro over LIBBSONCXX_ENUM"
#endif

LIBBSONCXX_ENUM(binary, 0x00)
LIBBSONCXX_ENUM(function, 0x01)
LIBBSONCXX_ENUM(binary_deprecated, 0x02)
LIBBSONCXX_ENUM(uuid_deprecated, 0x03)
LIBBSONCXX_ENUM(uuid, 0x04)
LIBBSONCXX_ENUM(md5, 0x05)
LIBBSONCXX_ENUM(user, 0x80)
