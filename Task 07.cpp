#include <iostream>
using namespace std;
int main() {
    
float temp_C=25;
float temp_F=100;
float temp_C_to_F=(temp_C*9/5)+32;
float temp_F_to_C=(temp_F-32)*5/9;

cout<<"Temperature in Celsius: "<<temp_C<<"°"<<endl;
cout<<"Temperature coverted in Fahrenheit: "<<temp_C_to_F<<"°"<<endl;
cout<<"Temperature in Fahrenheit: "<<temp_F<<"°"<<endl;
cout<<"Temprature converted in Celsius: "<<temp_F_to_C<<"°";    
    return 0;
}