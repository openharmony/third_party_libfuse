/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LIBFUSE_CONFIG_H
#define LIBFUSE_CONFIG_H

#define HAVE_COPY_FILE_RANGE

#define HAVE_FALLOCATE

#define HAVE_FDATASYNC

#define HAVE_FORK

#define HAVE_FSTATAT

#define HAVE_ICONV

#define HAVE_OPENAT

#define HAVE_PIPE2

#define HAVE_POSIX_FALLOCATE

#define HAVE_READLINKAT

#define HAVE_SETXATTR

#define HAVE_SPLICE

#define HAVE_STRUCT_STAT_ST_ATIM

#undef HAVE_STRUCT_STAT_ST_ATIMESPEC

#define HAVE_UTIMENSAT

#define HAVE_VMSPLICE

#define PACKAGE_VERSION "3.10.5"

#define pthread_setcancelstate(state, p)
#define pthread_cancel(thread)

#define PTHREAD_CANCEL_ENABLE 0
#define PTHREAD_CANCEL_DISABLE 0

#endif
