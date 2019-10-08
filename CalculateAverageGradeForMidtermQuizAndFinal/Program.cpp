//
//  Program.cpp
//  You need to calculate your average grade for Problem solving course.
//  There are three marks midterm(30%), quiz (20%) and final (50%).
//
//  Created by Mazen Hrazi on 08/10/19.
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
	
	double qiz, mid, fnl;
	double Q,M,F,score=0;
	
	cout<<"Enter your quiz mark (of 20): ";
	cin>>qiz;
	cout<<"Enter your midterm mark (of 30): ";
	cin>>mid;
	cout<<"Enter your final mark (of 50): ";
	cin>>fnl;
	
	Q = ( qiz * 0.2 ) / 20; 
	M = ( mid * 0.3 ) / 30;
	F = ( fnl * 0.5 ) / 50;
	
	score = ( Q + M + F ) * 100;
	
	cout<<"Your score is: "<<score<<endl;
	
	return 0;
}