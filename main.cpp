//By Georgy Rached as main coder, October 6, EECE2140
//Program gets either celcius or farenheight and converts the temperature to either unit.
#include <iostream>
#include <string>
using namespace std;

int main() {

    double temperature = 0.0;
    string conversion;
    double newTemp = 0.0;

    cin >> conversion;

    if ( !(cin >> temperature) )
    {
        cout << "Error: invalid temperature" << endl;
        return 1;
    }

    if (conversion == "C2F") 
    {
        newTemp = temperature * 9.0 / 5.0 + 32.0 ;
        cout << temperature << " C converts to " << newTemp << " F" << endl;
    }

    else if (conversion == "F2C")
    {
        newTemp = (temperature - 32.0) * 5.0  / 9.0 ;
        cout << temperature << " F converts to " << newTemp << " C" << endl;
    }

    else
    {
        cout << "Error: unsupported direction" << endl;
        return 1;
    }

    return 0;
}