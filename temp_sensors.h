#pragma once
#include <random>

class temp_sensors{
private:
    double _temp;

     void temp_update(){
        _temp+=static_cast<double>(-10+rand()%20)/10;
        if(_temp>=MAX_TEMP)
            _temp=MAX_TEMP;
        if(_temp<=MIN_TEMP)
            _temp=MIN_TEMP;
    }
public:
    const double MIN_TEMP=-50;
    const double MAX_TEMP=100;

    temp_sensors(){
        _temp=MIN_TEMP+rand()%static_cast<int>(MAX_TEMP);
    }

    double operator()(){
        temp_update();
        return _temp;
    }



};