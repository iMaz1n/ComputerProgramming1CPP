//
//  Program.cpp
//  You need to calculate your average grade for Problem solving course. There are three marks midterm(30%), quiz (20%) and final (50%).
//
//  Created by Mazen Hrazi on 08/10/19.
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
	
	int qiz, mid, fnl;
	int Q,M,F,score;
	
	cin>>qiz;
	cin>>mid;
	cin>>fnl;
	
	Q = ( qiz * 20 ) / 100; 
	M = ( mid  * 30 ) / 100;
	F = ( mid  * 50 ) / 100;
	
	score = Q + M + F; 
	
	cout<<score;
	
	return 0;
}