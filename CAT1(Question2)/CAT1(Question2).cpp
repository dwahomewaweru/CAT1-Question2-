// CAT1(Question2)
// C++ Program to convert temperature in Fahrenheit into Celsius 

#include <iostream>
using namespace std;

int main()
{
	float fht, cel;
	cout << "Conversion of Temperature in Fahrenheit into Celsius \n";
	cout << "Input temperature in Fahrenheit : ";
	cin >> fht;
	//Formula to convert temperature in Fahrenheit into Celsius
	cel = 5.0 / 9.0 * (fht - 32.0);
	cout << "Temperature in Celsius : " << cel << endl;

	return 0;
}

