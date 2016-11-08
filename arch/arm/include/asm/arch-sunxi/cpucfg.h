/*
 * (C) Copyright 2017 Icenowy Zheng <icenowy@aosc.io>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _SUNXI_CPUCFG_H
#define _SUNXI_CPUCFG_H

#if defined(CONFIG_MACH_SUN8I_A83T) || defined(CONFIG_MACH_SUN9I)
#include <asm/arch/cpucfg_sun9i.h>
#else
#include <asm/arch/cpucfg_sun4i.h>
#endif

#endif /* _SUNXI_CPUCFG_H */
