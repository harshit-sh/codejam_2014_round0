//cookie.cc

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iomanip> 

using namespace std;

int main(){
	ifstream input_file;
	ofstream output_file;
	int t= 0;
	int k = 1;
	cin >> t;

	while(t){
		double C,F,X, time = 0;
		cin >> C >> F >> X;
		double cps = 2;
		time = 0;
		int cookie = 1;
		int j = 1;
		if( C < X ){
			while( X/cps >= C/cps +  X/(cps+F)){
				time = time + C/cps;
				cps = cps + F;
				}
				time = time + X/cps;
			}
		else{
			time = X/cps;
		}
		cout << "Case #" << k << ": " << std::fixed << std::setprecision(8) << time << "\n";
		k = k + 1;
		t = t - 1;
	}
	return 0;
}
