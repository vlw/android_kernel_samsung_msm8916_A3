#ifndef __LINUX_CM36672P_H
#define __CM36672P_H__

#include <linux/types.h>

#ifdef __KERNEL__
struct cm36672p_platform_data {
	int irq;		/* proximity-sensor irq gpio */
	int default_hi_thd;
	int default_low_thd;
	int cancel_hi_thd;
	int cancel_low_thd;
#if defined(CONFIG_SENSORS_LEDA_EN_GPIO)
	int leden_gpio;
#endif
	int default_trim;
};
#endif
#endif
