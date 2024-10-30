#ifndef temp.h
#define temp_h
#include <iostream>
#include <string>

using namespace std;

class Temp
{
public:
    Temp();
    ~Temp();
    
    void TemperatureChart();

    void settemp(int temp_);


private:

    int count; 
    double temp; // double becuase int would just take the interger out front

};

#endif temp.h
