/*
*
*	Copyright (c) 2015, The Linux Foundation. All rights reserved.
*
*	This program is free software; you can redistribute it and/or modify
*	it under the terms of the GNU General Public License version 2 and
*	only version 2 as published by the Free Software Foundation.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*/
#ifndef __OV7251R_COMMON_H____
#define __OV7251R_COMMON_H____

#include <media/msm_cam_sensor.h>

static struct msm_sensor_power_setting ov7251R_power_setting[] = {
    {
            .seq_type = SENSOR_VREG,
            .seq_val = CAM_VIO,
            .config_val = 0,
            .delay = 0,
    },
    {
            .seq_type = SENSOR_VREG,
            .seq_val = CAM_VANA,
            .config_val = 0,
            .delay = 0,
    },
    {
            .seq_type = SENSOR_VREG,
            .seq_val = CAM_VDIG,
            .config_val = 0,
            .delay = 0,
    },
    {
            .seq_type = SENSOR_GPIO,
            .seq_val = SENSOR_GPIO_RESET,
            .config_val = GPIO_OUT_LOW,
            .delay = 1,
    },
    {
            .seq_type = SENSOR_GPIO,
            .seq_val = SENSOR_GPIO_RESET,
            .config_val = GPIO_OUT_HIGH,
            .delay = 30,
    },
    {
            .seq_type = SENSOR_CLK,
            .seq_val = SENSOR_CAM_MCLK,
            .config_val = 0,
            .delay = 1,
    },
    {
            .seq_type = SENSOR_I2C_MUX,
            .seq_val = 0,
            .config_val = 0,
            .delay = 0,
    },
};


#endif
