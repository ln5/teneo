// Copyright (c) 2015 Alexander Færøy. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef GUARD_PROFILE_H
#define GUARD_PROFILE_H 1

#include <stdbool.h>

#define DEFAULT_PROFILE "2015v1"

bool is_valid_profile_name(const char *profile_name);

bool generate_keypair(const char *profile_name, const char *username, size_t username_length, const char *passphrase, size_t passphrase_length, unsigned char *secret, unsigned char *public);

#endif
