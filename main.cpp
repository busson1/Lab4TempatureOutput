/*
 Jake Busson
 Computer Science
 Due: Oct. 29, 2024
 Lab Name: Lab 4 Hourly Tempature Output
 Lab Description: In Lab 4, I made a C++ file and code that takes the inputs for hourly tempatures and outputs them on a bar chart using *'s as the number of tempatures on the scale of 3 degrees. It was interesting to see how the bar chart looks based on the numbers that you input in the file. The code will also round to the closest multiple of 3. 
 */
#include "temp.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int temp;  // creates the variable temp as an integer
    Temp myTemp; // creates object of myTemp in the class Temp

    // description of what the data is and a chart of what the data should read
    cout << "Hourly Temperatures throughout the day, each '*' represents 3 degrees in Fahrenheit" << endl;
    cout << "Temperature Bar Chart" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Scale: -30      0         30        60        90       120" << endl;
    cout << "----------------------------------------------------------" << endl;

    // the file stream goes into inFile, it then opens "Tempratures.dat" file
    ifstream inFile;
    inFile.open("/Users/jakebusson/Desktop/Lab4/tempatureoutput/tempatures .txt");

    if (!inFile) {
        cout << "Error opening file";// checks if file is able to open
        return 7; // leaves with code 7 if this happens
    }

    // in While loop it sets the variable, as long as there is a variable it then sets the temp and creates a bar chart
    while (inFile >> temp) {
        myTemp.settemp(temp);
        myTemp.TemperatureChart();
    }

    if (!inFile.eof()) {
        cout << "Error inside the file with the data input." << endl;// if there is an input that is not an integer, this check tells the user that the data cannot be read
        return 5; // leaves with code 5 if this happens
    }

    inFile.close(); // closes the file

    cout << endl << "All data has been read in! " << endl; // after all data has been ran in it ends with this

    return 0;
}
