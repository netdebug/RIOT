/**
 * Native CPU configuration
 *
 * Copyright (C) 2013 Ludwig Ortmann
 *
 * This file subject to the terms and conditions of the GNU General Public
 * License. See the file LICENSE in the top level directory for more details.
 *
 * @ingroup arch
 * @{
 * @file
 * @author  Ludwig Ortmann <ludwig.ortmann@fu-berlin.de>
 * @}
 */
#ifndef CPUCONF_H_
#define CPUCONF_H_
#include <signal.h>

/* TODO: choose more sensibly? */
#ifndef KERNEL_CONF_STACKSIZE_DEFAULT
#define KERNEL_CONF_STACKSIZE_DEFAULT   8192
#endif

#define KERNEL_CONF_STACKSIZE_IDLE      4096
#define NATIVE_ISR_STACKSIZE            8192

#define _SIG_LTC4150        SIGRTMIN + 0

/* TODO: check for overflow (SIGRTMAX) */

/* for cc110x_ng */
#define RX_BUF_SIZE (10)
#define TRANSCEIVER_BUFFER_SIZE (3)

#endif /* CPUCONF_H_ */
