//
//  Program.cpp
//  Circle Square Area And Perimeter with Pseudocode and Flowchart
//
//  Created by Mazen Hrazi on 21/09/19.
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
	
	double CircleArea;	
	double CirclePerimeter;
	double SquareArea;
	double SquarePerimeter;
	
	double Pi = 3.14;
	
	double side;
	double radius;
	
	cout<<"Enter the radius: ";
	cin>>radius;
	CircleArea = Pi * radius * radius;
	CirclePerimeter = 2 * Pi * radius;
	cout<<"The Circle Area: "<<CircleArea<<endl;
	cout<<"The Circle Perimeter is: "<<CirclePerimeter<<endl;
	
	cout<<"Enter the length of side: ";
	cin>>side;
	SquareArea = side*side;
	SquarePerimeter = 4*side;
	cout<<"The Square Area is: "<<SquareArea<<endl;
	cout<<"The Square Perimeter is: "<<SquarePerimeter<<endl;
	
	return 0;
}