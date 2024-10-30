#include "temp.h"
#include <fstream>
#include <iomanip>


Temp::Temp() // constructor for the 'temp' class.
{
    temp = 0; // postcondition: initializes temp to 0.
    count = 0; // postcondition initializes count to 0.
};

// destructor for the temp class.
Temp::~Temp() {};

// set function for 'temp' variable.
// makes "temp_" an integer that represents a temp value
void Temp::settemp(int temp_)
{
    temp = temp_;
};
// postcondition: sets the 'temp' member variable to the value of 'temp_'.

// function to generate a temperature chart.
// precondition: 'temp' represents a valid temperature value.
void Temp::TemperatureChart()
{
    // check to see if the temperature is outside the valid range (-30 to 120).
    if (temp < -30 || temp > 120)
    {
        cout << "ERROR: Temperature is not in the given range!" << endl;
    }
    int zeroPosition = 10; // sets the 0 at 10 character marks
    
    cout << left << setw(4) << temp << ": "; // outputs the : four character spaces from the the left hand margin
    
    int numStars = round(abs(temp) / 3) ; // takes the absolute value of tempature input, divides by 3, and rounds to the nears multiple of 3
    
     
    if (temp < 0){
        cout << string (zeroPosition -numStars, ' ') << string(numStars, '*') << '|' << endl; // for negitive tempatures it goes from the zero position to the left (negitive)
    }
    else if (temp==0 ){
        cout << string (zeroPosition, ' ') << '|' << endl; // if tempature is equal to 0 it will just show bar
    }
    else {
        cout << string (zeroPosition, ' ') << '|' << string(numStars, '*') << endl; // if tempature is great than 0 it will count up starts for vlaules divided by 3
    }
};
