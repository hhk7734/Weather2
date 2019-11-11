/*
 * Copyright (C) 2019  Hyeonki Hong <hhk7734@gmail.com>
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 * USA
 */

#pragma once

#include "ODROID_Si1132.h"
#include "Adafruit_BME280.h"

#include <Wire.h>

class Weather2
    : public ODROID_Si1132
    , Adafruit_BME280
{
public:
    bool begin( TwoWire *wire = &Wire );

    using ODROID_Si1132::readIR;
    using ODROID_Si1132::readUV;
    using ODROID_Si1132::readVisible;

    using Adafruit_BME280::setSampling;
    using Adafruit_BME280::takeForcedMeasurement;

    using Adafruit_BME280::readAltitude;
    using Adafruit_BME280::readHumidity;
    using Adafruit_BME280::readPressure;
    using Adafruit_BME280::readTemperature;
    using Adafruit_BME280::seaLevelForAltitude;

    // clang-format off
    using Adafruit_BME280::sensor_sampling;
    using Adafruit_BME280::SAMPLING_NONE;
    using Adafruit_BME280::SAMPLING_X1;
    using Adafruit_BME280::SAMPLING_X2;
    using Adafruit_BME280::SAMPLING_X4;
    using Adafruit_BME280::SAMPLING_X8;
    using Adafruit_BME280::SAMPLING_X16;

    using Adafruit_BME280::sensor_mode;
    using Adafruit_BME280::MODE_SLEEP;
    using Adafruit_BME280::MODE_FORCED;
    using Adafruit_BME280::MODE_NORMAL;

    using Adafruit_BME280::sensor_filter;
    using Adafruit_BME280::FILTER_OFF;
    using Adafruit_BME280::FILTER_X2;
    using Adafruit_BME280::FILTER_X4;
    using Adafruit_BME280::FILTER_X8;
    using Adafruit_BME280::FILTER_X16;

    using Adafruit_BME280::standby_duration;
    using Adafruit_BME280::STANDBY_MS_0_5;
    using Adafruit_BME280::STANDBY_MS_10;
    using Adafruit_BME280::STANDBY_MS_20;
    using Adafruit_BME280::STANDBY_MS_62_5;
    using Adafruit_BME280::STANDBY_MS_125;
    using Adafruit_BME280::STANDBY_MS_250;
    using Adafruit_BME280::STANDBY_MS_500;
    using Adafruit_BME280::STANDBY_MS_1000;
    // clang-format on
};
