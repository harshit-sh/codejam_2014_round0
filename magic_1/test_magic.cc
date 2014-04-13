#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getCommon(vector<int> &v1, vector<int> &v2){
	vector<int> v3;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(v3));

    return v3;
} 

int main(){
	vector<int> v1 {1,2,3};
	vector<int> v2 {3,4,5};
	auto v3= getCommon(v1,v2);
//	cout << v3[5] << "\n";
	cout << v3.size() << endl;
	return 0;
}
