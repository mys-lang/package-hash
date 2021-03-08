/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2018, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

#pragma once

#include <stdint.h>

namespace mys::hash::sha1 {

struct sha1_t {
    struct {
        uint8_t buf[64]; 
        uint32_t size; 
    } block;
    uint32_t h[5]; 
    uint64_t size; 
}; 

/**
 * Initialize given SHA1 object.
 *
 * @param[in,out] self_p SHA1 object.
 *
 * @return zero(0) or negative error code.
 */
int sha1_init(struct sha1_t *self_p);

/**
 * Update the sha object with the given buffer. Repeated calls are
 * equivalent to a single call with the concatenation of all the
 * arguments.
 *
 * @param[in] self_p SHA1 object.
 * @param[in] buf_p Buffer to update the sha object with.
 * @param[in] size Size of the buffer.
 *
 * @return zero(0) or negative error code.
 */
int sha1_update(struct sha1_t *self_p,
                uint8_t *buf_p,
                uint32_t size);

/**
 * Return the digest of the strings passed to the sha1_update()
 * method so far. This is a 20-byte value which may contain non-ASCII
 * characters, including null bytes.
 *
 * @param[in] self_p SHA1 object.
 * @param[in] hash_p Hash sum.
 *
 * @return zero(0) or negative error code.
 */
int sha1_digest(struct sha1_t *self_p,
                uint8_t *hash_p);

};
