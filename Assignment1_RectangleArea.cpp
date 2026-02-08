#include <iostream>

using namespace std;

int main()
{
	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter a height: ";
/* write your code here */
cin>>height;
cout << "Enter a width: ";
cin>>width;
	// calculate area
	double area;
	area=height*width;

	// write output to console
	cout<<"the area of the rectangle with a height of "<<height <<" and a width of "<<width<<" is "<<area<<" squared units"<<endl;

	// return value that indicates normal program exit
    return 0;
}