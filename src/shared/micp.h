/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2023  NXP Semiconductors. All rights reserved.
 *
 */
#include <stdbool.h>
#include <inttypes.h>

#include "src/shared/io.h"


struct bt_micp;

typedef void (*bt_micp_destroy_func_t)(void *user_data);
typedef void (*bt_micp_debug_func_t)(const char *str, void *user_data);
typedef void (*bt_micp_func_t)(struct bt_micp *micp, void *user_data);
