#pragma once
#include<random>


class pressure_sensor{
    private:
    double _pressure;


    public:
    const double MAX_PRESSURE=900;
    const double MIN_PRESSURE=600;

    pressure_sensor(){

        _pressure=MIN_PRESSURE+rand()%static_cast<int>(MAX_PRESSURE-MIN_PRESSURE);

    }
    
    void pressure_update(){
        double del=-10+rand()%20;
        _pressure+=del;
        if(_pressure>MAX_PRESSURE)
            _pressure=MAX_PRESSURE;
        else if(_pressure<MIN_PRESSURE)
            _pressure=MIN_PRESSURE;
    }

    double operator()(){
        pressure_update();
        return _pressure;
    }


};
