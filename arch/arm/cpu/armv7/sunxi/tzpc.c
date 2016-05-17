/*
 * (C) Copyright 2015 Chen-Yu Tsai <wens@csie.org>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <asm/io.h>
#include <asm/arch/cpu.h>
#include <asm/arch/tzpc.h>

/* Configure Trust Zone Protection Controller */
void tzpc_init(void)
{
	struct sunxi_tzpc *tzpc = (struct sunxi_tzpc *)SUNXI_TZPC_BASE;

#ifdef CONFIG_MACH_SUN6I
	/* Enable non-secure access to the RTC */
	writel(SUN6I_TZPC_DECPORT0_RTC, &tzpc->decport0_set);
#endif

#ifdef SUN8I_A83T_TZPC_DECPORT0_ALL
	/* Set secure RAM size to defined value */
	writel(SUN8I_A83T_TZPC_R0SIZE_64K, &tzpc->r0size);

	/* Enable non-secure access to all peripherals */
	writel(SUN8I_A83T_TZPC_DECPORT0_ALL, &tzpc->decport0_set);
	writel(SUN8I_A83T_TZPC_DECPORT1_ALL, &tzpc->decport1_set);
	writel(SUN8I_A83T_TZPC_DECPORT2_ALL, &tzpc->decport2_set);
#endif

#ifdef CONFIG_MACH_SUN8I_H3
	/* Enable non-secure access to all peripherals */
	writel(SUN8I_H3_TZPC_DECPORT0_ALL, &tzpc->decport0_set);
	writel(SUN8I_H3_TZPC_DECPORT1_ALL, &tzpc->decport1_set);
	writel(SUN8I_H3_TZPC_DECPORT2_ALL, &tzpc->decport2_set);
#endif
}
