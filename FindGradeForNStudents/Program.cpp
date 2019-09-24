//
//  Program.cpp
//  Algorithm to Find Grade with Average for n Students
//
//  Created by Mazen Hrazi on 24/09/19.
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	int test1,test2,test3,test4,test5,average,sum,studentsNumber,classAverage;
	static int totalAverage = 0;
	string name,grade;
	
	cout<<"How many students in the class? Enter the number of students: "<<endl;
	cin>>studentsNumber;
	
	for (int i=1;i<=studentsNumber;i++) {
		cout<<"STUDENT NUMBER ["<<i<<"]"<<endl;
		
		cout<<"Enter student name: ";
		cin.ignore();
		getline(cin, name); // cin >> name;
		
		cout<<"Enter student scores: ";
		cin >> test1>>test2>>test3>>test4>>test5;
		
		sum = test1+test2+test3+test4+test5;
		average = sum / 5;
		
		if (average >= 90) {grade = "A";}
		else if (average >= 80) {grade = "B";}
		else if (average >= 70) {grade = "C";}
		else if (average >= 60) {grade = "D";}
		else {grade = "F";}
		
		cout<<"ُThe student name: "<<name<<endl;
		cout << "The grade is: " << grade << endl;
		cout << "=========================================="<< endl;
		
		totalAverage = totalAverage + average;
		}
		
		classAverage = totalAverage / studentsNumber;
		cout << "The class average is: "<<classAverage;	
	return 0;
}