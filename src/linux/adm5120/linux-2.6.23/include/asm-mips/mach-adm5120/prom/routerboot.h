/*
 *  $Id: routerboot.h 8538 2007-08-29 17:27:11Z juhosg $
 *
 *  Mikrotik's RouterBOOT definitions
 *
 *  Copyright (C) 2007 OpenWrt.org
 *  Copyright (C) 2007 Gabor Juhos <juhosg at openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the
 *  Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA  02110-1301, USA.
 */

#ifndef _ROUTERBOOT_H
#define _ROUTERBOOT_H

#define RB_MAC_SIZE		6
#define RB_MAX_MAC_COUNT	6

struct rb_bios_settings {
	u32	hs_offs; /* hard settings offset */
	u32	hs_size; /* hard settings size */
	u32	fw_offs; /* firmware offset */
	u32	ss_offs; /* soft settings offset */
	u32	ss_size; /* soft settings size */
};

struct rb_hard_settings {
	char	*name;		/* board name */
	char	*bios_ver;	/* BIOS version */
	u32	mem_size;	/* memory size in bytes */
	u32	mac_count;	/* number of mac addresses */
	u8	macs[RB_MAC_SIZE][RB_MAX_MAC_COUNT]; /* mac addresses */
};

/*
 * Magic numbers
 */
#define RB_MAGIC_HARD	0x64726148 /* "Hard" */
#define RB_MAGIC_SOFT	0x74666F53 /* "Soft" */
#define RB_MAGIC_DAWN	0x6E776144 /* "Dawn" */

#define RB_ID_TERMINATOR	0

/*
 * ID values for Hardware settings
 */
#define RB_ID_HARD_01		1
#define RB_ID_HARD_02		2
#define RB_ID_FLASH_INFO	3
#define RB_ID_MAC_ADDRESS_PACK	4
#define RB_ID_BOARD_NAME	5
#define RB_ID_BIOS_VERSION	6
#define RB_ID_HARD_07		7
#define RB_ID_SDRAM_TIMINGS	8
#define RB_ID_DEVICE_TIMINGS	9
#define RB_ID_SOFTWARE_ID	10
#define RB_ID_SERIAL_NUMBER	11
#define RB_ID_HARD_12		12
#define RB_ID_MEMORY_SIZE	13
#define RB_ID_MAC_ADDRESS_COUNT	14

/*
 * ID values for Software settings
 */
#define RB_ID_UART_SPEED	1
#define RB_ID_BOOT_DELAY	2
#define RB_ID_BOOT_DEVICE	3
#define RB_ID_BOOT_KEY		4
#define RB_ID_CPU_MODE		5
#define RB_ID_FW_VERSION	6
#define RB_ID_SOFT_07		7
#define RB_ID_SOFT_08		8
#define RB_ID_BOOT_PROTOCOL	9
#define RB_ID_SOFT_10		10
#define RB_ID_SOFT_11		11

/*
 * UART_SPEED values
 */
#define RB_UART_SPEED_115200	0
#define RB_UART_SPEED_57600	1
#define RB_UART_SPEED_38400	2
#define RB_UART_SPEED_19200	3
#define RB_UART_SPEED_9600	4
#define RB_UART_SPEED_4800	5
#define RB_UART_SPEED_2400	6
#define RB_UART_SPEED_1200	7

/*
 * BOOT_DELAY values
 */
#define RB_BOOT_DELAY_0SEC	0
#define RB_BOOT_DELAY_1SEC	1
#define RB_BOOT_DELAY_2SEC	2

/*
 * BOOT_DEVICE values
 */
#define RB_BOOT_DEVICE_ETHER	0
#define RB_BOOT_DEVICE_NANDETH	1
#define RB_BOOT_DEVICE_ETHONCE	2
#define RB_BOOT_DEVICE_NANDONLY	3

/*
 * BOOT_KEY values
 */
#define RB_BOOT_KEY_ANY		0
#define RB_BOOT_KEY_DEL		1

/*
 * CPU_MODE values
 */
#define RB_CPU_MODE_POWERSAVE	0
#define RB_CPU_MODE_REGULAR	1

/*
 * BOOT_PROTOCOL values
 */
#define RB_BOOT_PROTOCOL_BOOTP	0
#define RB_BOOT_PROTOCOL_DHCP	1

extern int routerboot_present(void) __init;
extern char *routerboot_get_boardname(void);

#endif /* _ROUTERBOOT_H */
