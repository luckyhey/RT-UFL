/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _UFL_COMMON_H_
#define _UFL_COMMON_H_

#include <stdbool.h>
#include <stdint.h>
#include <string.h>
/*******************************************************************************
 * Definitions
 ******************************************************************************/

typedef enum _rt_chip_id
{
    kChipId_Invalid = 0xFFU,
    kChipId_RT6xx   = 1U,
    kChipId_RT106x  = 2U,
} rt_chip_id_t;

#define RT_ROM_BASE_CM33 (0x03000000u)
#define RT_ROM_BASE_CM7  (0x00200000u)

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /*_cplusplus*/

void ufl_full_setup(void);

#if defined(__cplusplus)
}
#endif /*_cplusplus*/

#endif /* _UFL_COMMON_H_ */