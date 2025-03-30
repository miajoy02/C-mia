#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    
    cout<< "Enter your Word: ";
    cin>> a;
    
    if (a == "ACCURACY") {
        cout << "The degree to which a measurement or calculation matches the true or expected value.";
    } else if (a == "CALIBRATION") {
        cout << "The process of adjusting and verifying the accuracy of measuring instrument and tools.";
    } else if (a == "PASCALINE") {
        cout << "Works by rotating a wheel. For every revolution, it rotates the neighbouring wheel which totals up on top of the machine.";
    } else if(a == "STEPPED_RECKONER") {
        cout << "it also rotates like the Pascaline but instead it uses fluted drums.";
    } else if (a == "ANALYTICAL_ENGINE") {
        cout << "A machine developed by Charles Babbage capable of performing any mathematical problem. It also stores data and has permanent memory.";
    } else {
        cout << "No word is found";
    }
    
   return 0;
}
