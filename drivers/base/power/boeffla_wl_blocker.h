/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT				"IPA_WS;wlan_extscan_wl;qcom_rx_wakelock;wlan;[timerfd];wlan_ipa;wcnss_filter_lock;wlan_pno_wl;NETLINK;netmgr_wl;wlan_wake;wlan_rx_wake;bluetooth_timer;alarmtimer;bq_delt_soc_wake_lock;wlan_wow_wl;msm_hsic_host;sensor_ind;mmc0_detect;bbd_wake_lock;GPSD;bluesleep;wlan_ctrl_wake"

#define LENGTH_LIST_WL				10000
#define LENGTH_LIST_WL_DEFAULT		10000
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
