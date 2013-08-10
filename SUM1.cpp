#include<iostream>
using namespace std;

typedef long long ll;
ll foo(ll n){
    ll th=double(((n-1)/3))/2*(6+((n-1)/3-1)*3);
	ll fi=double(((n-1)/5))/2*(10+((n-1)/5-1)*5);
	ll fiv=double(((n-1)/15))/2*(30+((n-1)/15-1)*15);
	return th+fi-fiv;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<foo(n)<<endl;
	}
	return 0;
}