/*
 * Copyright (c) 2017 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#define STACKSIZE 1024
#define THREAD0_PRIORITY 5
#define THREAD1_PRIORITY 5

void thread0(void)
{
	while (1)
      {
      printk("Hello World from Thread 0! %d\n", k_cycle_get_32());
      // k_yield();
      k_msleep(100);
	}
}

void thread1(void)
{
   while (1)
   {
      printk("Hello World from Thread 1! %d\n", k_cycle_get_32());
      // k_yield();
      k_msleep(100);
	}
}

K_THREAD_DEFINE(thread0_id, STACKSIZE, thread0, NULL, NULL, NULL,
   THREAD0_PRIORITY, 0, 0);
K_THREAD_DEFINE(thread1_id, STACKSIZE, thread1, NULL, NULL, NULL,
   THREAD1_PRIORITY, 0, 0);