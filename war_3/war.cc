//war.cc

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

int fairWar( vector<double> v1, vector<double> v2 ){
	int points = 0;
	int n = v1.size();
	if(v1.size() == 1){
		if (v1[0] > v2[0] ){
			points = points + 1;
			return points;
		}
	}
	else{
		int flag = 0;
		while(v1.size() > 0 ){
			double k = v1[0];
			for(int i = 0 ; i < v2.size(); i++){
				if (v2[i] > k) {
					v1.erase( v1.begin() );
					v2.erase( v2.begin()+i );
					break;
					}
				else {
					flag = flag + 1;
					if( flag % n == 0 ){
						points = points + 1;
					}  
				}
			}
		}
	}
	return 0;
}

int main(){
	int t, n= 0;
	int k = 1;
	cin >> t;
	while(t){
		vector<double> v1;
		vector<double> v2;
		cin >> n;
		for(int i = 0 ; i < n ; i++){
			double c4;
			cin >> c4;
			v1.push_back(c4);
		}
		for(int i = 0 ; i < n ; i++){
			double c4;
			cin >> c4;
			v2.push_back(c4);
		}
		
		
		
		t = t - 1;
