#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello! My name is Elise and I will help you solve: " << endl;
	cout << "Ax+B=0" << endl << endl; 
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "Solving " << A << "X+" << B << "=0" << endl << endl;

	X = (-B) / A;

	cout << "The answer is:" << endl;
	cout << X;
	
}