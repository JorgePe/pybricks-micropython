// SPDX-License-Identifier: MIT
// Copyright (c) 2019 David Lechner

#ifndef _PBIO_UTIL_H_
#define _PBIO_UTIL_H_

/**
 * Get the length of a fixed-sized array.
 * @param a     The array
 */
#define PBIO_ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

/**
 * Get a pointer to the structure that contains another structure.
 * @param ptr       Pointer to the child structure
 * @param type      The type of the parent structure
 * @param member    The name of the field containing ptr
 */
#define PBIO_CONTAINER_OF(ptr, type, member) ((type *)((char *)(ptr) - offsetof(type, member)))

#endif // _PBIO_UTIL_H_