#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	double radius, height, volumeC,lateralAreaC, baseAreaC, surfaceAreaC;
	double lengthP, widthP, heightP, baseAreaP, volumeP, lateralAreaP, surfaceAreaP;
	double radiusS, volumeS, surfaceAreaS;
	char choice, option;
	bool quit = false;

	string package;

	cout << "This program is a geometric calculator. " << endl << endl;

	do
	{

		cout << "Please enter the shape to be calculated (C/P/S): ";
		cin >> choice;
		cout << endl;

		switch (choice) {

		case 'C':
		case 'c':
			cout << "The shape you chose is a CONE!" << endl;
			cout << "Please enter the radius: "; 
			cin >> radius;
			cout << "Please enter the height: ";
			cin >> height;

			volumeC = 0.33*3.14*(radius*radius)*height;
			lateralAreaC = 3.14*radius*sqrt(radius*radius+height*height);
			baseAreaC = 3.14*radius*radius;
			surfaceAreaC = lateralAreaC+baseAreaC;

			cout << "The volume of the cone is: " << volumeC << endl;
			cout << "The lateral area of the cone is: " << lateralAreaC << endl;
			cout << "The base area of the cone is: " << baseAreaC << endl;
			cout << "The surface area of the cone is: " << surfaceAreaC << endl;
			break;
			

		case 'P':
		case 'p':
			cout << "The shape you chose is a PYRAMID!" << endl;
			cout << "Please enter the length: "; 
			cin >> lengthP;
			cout << "Please enter the width: ";
			cin >> widthP;
			cout << "Please enter the height: ";
			cin >> heightP;


			volumeP = lengthP* widthP *heightP;
			lateralAreaP = lengthP*sqrt((widthP/2)*(widthP/2)+heightP*heightP)+ widthP*sqrt((lengthP/2)*(lengthP/2)+heightP*heightP);
			baseAreaP = lengthP*widthP;
			surfaceAreaP = lateralAreaP+baseAreaP;

			cout << "The volume of the pyramid is: " << volumeP << endl;
			cout << "The lateral area of the pyramid is: " << lateralAreaP << endl;
			cout << "The base area of the pyramid is: " << baseAreaP << endl;
			cout << "The surface area of the pyramid is: " << surfaceAreaP << endl;
			break;
			
			
		case 'S':
		case 's':
			cout << "The shape you chose is a SPHERE!" << endl;
			cout << "Please enter the radius: "; 
			cin >> radiusS;

			volumeS = (4.19)*radiusS*radiusS*radiusS;
			surfaceAreaS = 4*3.14*radiusS*radiusS;

			cout << "The volume of the sphere is: " << volumeS << endl;
			cout << "The surface area of the sphere is: " << surfaceAreaS << endl;
			break;


		default: return 0;

		}

		cout << endl;
		cout << "Do you want to continue? (y/n): ";
		cin >> option;
		cout << endl << endl;

		switch (option) {
			case 'y':
			case 'Y':
				{quit = false; }
				break;

			case 'n':
			case 'N':

				{quit = true; }
				break;

			default:
				{quit = true; }	

		}

	} while (!quit);
	
	getch ();
	return 0;
}
