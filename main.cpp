#include<iostream>
#include "temp_sensors.h"
#include "humidity_sensors.h"
#include "co2_sensor.h"
#include "pressure_sensor.h"
#include "ath21.h"

int main(){
    srand(time(NULL));

    //temp_sensors temp=temp_sensors();
    //humidity_sensors hum=humidity_sensors();

    //co2_sensors co=co2_sensors();
    //pressure_sensor pr=pressure_sensor();
    ath21 sens=ath21();

    auto f=sens();
    std::cout<<std::get<0>(f)<<std::endl;
    std::cout<<std::get<1>(f)<<std::endl;
    


    return 0;
}

