#define _USE_MATH_DEFINES

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <cmath>




using namespace std;

int main()
{

	cout << "This program will solve for the following values based on the given sides of the triangle. " << endl;
	cout << "Use this as a reference: " << endl << endl;

	cout << "         A  " << endl;
	cout << "         /\\  " << endl;
	cout << "        /  \\  " << endl;
	cout << "       /    \\  " << endl;
	cout << "    a /      \\ c  " << endl;
	cout << "     /        \\  " << endl;
	cout << "    /          \\  " << endl;
	cout << "   /            \\  " << endl;
	cout << " B/______________\\ C " << endl;
	cout << "         b " << endl;


	for (;;) {

		double sideA,sideB,sideC;
		double angleA, angleB, angleC, A, B, C;
		double deg = 180/M_PI;



		cout << "Please enter the length of side a: ";
		cin >> sideA;
		cout << "Please enter the length of side b: ";
		cin >> sideB;
		cout << "Please enter the length of side c: ";
		cin >> sideC;
		cout << endl << endl;

		cout << "Results: " << endl;

		angleA = (((sideB*sideB)+(sideC*sideC))-(sideA*sideA))/(2*sideB*sideC);
		A = acos(angleA)*deg;
			cout << "The interior angle of A is: " << A << endl;
		
		angleB = (((sideC*sideC)+(sideA*sideA))-(sideB*sideB))/(2*sideC*sideA);
		B = acos(angleB)*deg;
			cout << "The interior angle of B is: " << B << endl;
		
		angleC = (((sideA*sideA)+(sideB*sideB))-(sideC*sideC))/(2*sideA*sideB);
		C = acos(angleC)*deg;
			cout << "The interior angle of C is: " << C << endl << endl;
			

		if (sideA==sideB && sideB==sideC) 
			cout << "The triangle is an EQUILATERAL TRIANGLE" << endl;
		else if (sideA==sideB || sideA==sideC || sideB==sideC)
			cout << "The triangle is an ISOSCELES TRIANGLE" << endl;
		else 
			cout << "The triangle is a SCALENE TRIANGLE" << endl << endl;


		double perimeter = (sideA+sideB+sideC);
		double peri = perimeter*0.5;
		double area = sqrt((peri)*(peri-sideA)*(peri-sideB)*(peri-sideC));
		cout << "The area of the triangle is: " << area << endl;
		cout << "The perimeter of the triangle is: " << perimeter << endl << endl;
	
		
		if (A>= 90 || B>=90 || C>=90) 
			cout << "The triangle is a OBTUSE TRIANGLE." << endl;
		else if (A==90 || B==90 || C==90)
			cout << "The triangle is a RIGHT TRIANGLE." << endl;
		else 
			cout << "The triangle is an ACUTE TRIANGLE." << endl << endl;

		
		if (sideA==sideB && sideB==sideC) {
			double apothem;
			apothem = (sideA)/(2*tan(M_PI/3));
			cout << "The length of the apothem is: " << apothem << endl;
		}
		else 
			cout << "The length of the apothem is only valid for equilateral triangles." << endl << endl;

		
		double circumcenter = (sideA*sideB*sideC)/(4*area);
		cout << "The length of the circumcenter is: " << circumcenter << endl;
		
		string choice;
		cout << endl;
		cout << "Continue simulation? (y/n): ";
		cin >> choice;
		cout << endl;
		
		
		if (choice[0] == 'y' || choice[0] == 'Y')
			continue;
		else 
			break; 
	}
	getch();
	return 0;
}

