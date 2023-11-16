// test_analog.cpp
//Jasmine Franklin
//Displays pin # being read from and the ADC value
//
 #include <iostream>
 #include "AnalogIn.h"

 using namespace std;

 int main(int argc, char* argv[]){

 int reading;
 int number;

 AnalogIn AIN(0);

 number = AIN.getNumber();
 cout << "ADC number being read: " << number << endl;
 reading = AIN.readAdcSample();
 cout << "ADC Reads: " << reading << endl;
 }
