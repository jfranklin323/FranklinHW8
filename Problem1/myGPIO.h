//Jasmine FRanklin
//Header

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using std::string;

class myGPIO {
        private:
          int number;
          string name, path;
          int write(string path, string filename, string value);
          int write(string path, string filename, int value);
          string read(string path, string filename);
          ofstream stream;
        public:
          myGPIO(int number); //constructor
          int getNumber();
          void setDirection(GPIO_DIRECTION dir)
          GPIO_DIRECTION getDirection();
          int setValue(GPIO_VALUE val);
          GPIO_VALUE getValue();
          void toggleOutput();
          ~myGPIO(); //destructor
};
