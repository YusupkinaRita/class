#pragma once
#include "temp_sensors.h"
#include "humidity_sensors.h"
#include "co2_sensor.h"
#include "pressure_sensor.h"
#include "ath21.h"

class sensors_handler{
private:

    temp_sensors** temp_array;
    humidity_sensors** humidity_array;
    pressure_sensor** pressure_array;
    co2_sensors** co2_array;
    ath21** ath_array;
    size_t temp_size=10;
    size_t hum_size=11;
    size_t pressure_size=10;
    size_t co2_size=10;
    size_t ath_size=10;

public:
sensors_handler(){
    temp_array=new temp_sensors*[temp_size];
    humidity_array=new humidity_sensors*[hum_size];
    pressure_array=new pressure_sensor*[pressure_size];
    co2_array=new co2_sensors*[co2_size];
    ath_array=new ath21*[ath_size];
}




};