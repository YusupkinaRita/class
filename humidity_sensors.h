#pragma once
#include<random>



class humidity_sensors{
private:
    double _humidity;

public:
    const double MAX_HUMIDITY=100;

    humidity_sensors(){
        _humidity=rand()%static_cast<int>(MAX_HUMIDITY);
    }

    void humidity_update(){
        _humidity+=static_cast<double>(-10+rand()%20)/10;
        if(_humidity>=MAX_HUMIDITY)
            _humidity=MAX_HUMIDITY;
        if(_humidity<=0)
            _humidity=0;
        

    }

    double operator()(){
        humidity_update();
        return _humidity;
    }






};