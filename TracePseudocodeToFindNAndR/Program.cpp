//
//  Program.cpp
//  Trace the following pseudocode
//
//  Created by Mazen Hrazi on 08/10/19.
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
	int X=7,Y=3,Z=5,N,R;
	N = X % Y + Z / 5;
	//  7 % 3 + 5 / 5 
	//  1 + 1 = 2 = N
	cout << "N = " << N << endl;
	R = ( 3 + Y ) * N;
	//  ( 3 + 3 ) * 2
	//  (6) * 2 = 12 = R
	cout << "R = " << R << endl;
	return 0;
}