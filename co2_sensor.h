#pragma once
#include<random>



class co2_sensors{
private:
    double _percent;

public:
    const double MAX_PERCENT=100;

    co2_sensors(){
        _percent=rand()%static_cast<int>(MAX_PERCENT);
    }


    void co2_update(){
        _percent+=static_cast<double>(-10+rand()%20)/10;
        if(_percent>MAX_PERCENT)
            _percent=MAX_PERCENT;
        if(_percent<0)
            _percent=0;
    }

    double operator()(){
        co2_update();
        return _percent;
    }


};