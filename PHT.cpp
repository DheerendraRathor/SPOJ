/*

T(1) = 3
T(n) = T(n-1) + 2*n + 1

*/

#include <iostream>
#include <algorithm>
using namespace std;

#define num 1000001
#define lim 1000000000000ll

long long val[num];
int upper = 0;

void construct(){
	int i = 1;
	long long x,temp;
	val[0] = 0;
	temp = val[0];
	while(i < num){
		x = temp + 2*i + 1;
		val[i]=x;
		temp = x;
		if (x > lim){
			upper = i;
			break;
		}
		i++;
	}
}

int lb(int start, int end, long long theVal){
	if (start == end){
		return start;
	}
	if (end == start + 1){
		if (theVal < val[end]){
			return start;
		}
		else return end;
	}
	int mid = (start + end) /2;
	if (val[mid] == theVal){
		return mid;
	}

	if (val[mid] < theVal){
		return lb(mid, end, theVal);
	}
	else return lb(start, mid, theVal);

}

int main(){
	ios_base::sync_with_stdio(false);
	construct();
	int t, i, found;
	long long n;
	cin>>t;
	for(i= 1; i<=t; i++){
		cin>>n;
		found = lb(0, upper, n);
		cout<<"Case "<<i<<": "<<found<<endl;
	}
	return 0;
}