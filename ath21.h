#pragma once
#include "temp_sensors.h"
#include "humidity_sensors.h"
#include <tuple>

class ath21{

    private:
    temp_sensors _temp;
    humidity_sensors _hum;


    public:
    ath21(){

    }

    double get_temp(){
        return _temp();

    }
    double get_hum(){
        return _hum();
    }


    std::tuple<double,double> operator()(){
        return std::tuple<double,double>(_temp(),_hum());

    }

};