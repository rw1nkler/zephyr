/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
	volatile unsigned int *reg = (unsigned int *) 0x82007800;
	*reg = 1;

	unsigned long i = 0;
	while (1) {
		printk("Hello World! [%lu] %s\n", i, CONFIG_BOARD);
		*reg ^= 1;
		k_sleep(1000);
	 ++i;
	}

}
