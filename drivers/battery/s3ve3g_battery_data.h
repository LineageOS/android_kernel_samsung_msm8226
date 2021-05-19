/*
 * battery_data.h
 * Samsung Mobile Battery data Header
 *
 *
 * Copyright (C) 2012 Samsung Electronics, Inc.
 *
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

#ifndef __SEC_BATTERY_DATA_H
#define __SEC_BATTERY_DATA_H __FILE__

static void * samsung_battery_data;

#define CAPACITY_MAX            1000
#define CAPACITY_MAX_MARGIN     50
#define CAPACITY_MIN            0

static sec_bat_adc_table_data_t temp_table[] = {
  {26537, 800},
  {26849, 750},
  {27211, 700},
  {27627, 650},
  {28117, 600},
  {28713, 550},
  {29403, 500},
  {30205, 450},
  {31075, 400},
  {32026, 350},
  {33014, 300},
  {34117, 250},
  {35115, 200},
  {36121, 150},
  {37212, 100},
  {38190, 50},
  {39006, 0},
  {39813, -50},
  {40490, -100},
  {41084, -150},
  {41537, -200},
};

static sec_bat_adc_table_data_t chg_temp_table[] = {
	{0, 0},
};

#define TEMP_HIGH_THRESHOLD_EVENT  580
#define TEMP_HIGH_RECOVERY_EVENT   530
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 580
#define TEMP_HIGH_RECOVERY_NORMAL  530
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    580
#define TEMP_HIGH_RECOVERY_LPM     530
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0

#if defined(CONFIG_BATTERY_SWELLING)
#define BATT_SWELLING_HIGH_TEMP_BLOCK			500
#define BATT_SWELLING_HIGH_TEMP_RECOV			450
#define BATT_SWELLING_LOW_TEMP_BLOCK			50
#define BATT_SWELLING_LOW_TEMP_RECOV			100
#define BATT_SWELLING_HIGH_CHG_CURRENT			0
#define BATT_SWELLING_LOW_CHG_CURRENT			0
#define BATT_SWELLING_DROP_FLOAT_VOLTAGE		4200
#define BATT_SWELLING_HIGH_RECHG_VOLTAGE		4150
#define BATT_SWELLING_LOW_RECHG_VOLTAGE			4050
#endif

#endif /* __SEC_BATTERY_DATA_H */
