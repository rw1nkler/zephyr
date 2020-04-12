/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
	unsigned long i = 0;
	while (1) {
		printk("Hello World! [%lu] %s\n", i, CONFIG_BOARD);
		k_sleep(1000);
		++i;
	}

}
