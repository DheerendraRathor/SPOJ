#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
	if (a<b){
		return gcd(b,a);
	}
	if (b == 0){
		return a;
	}
	return gcd(b,a%b);
}


struct Fraction
{
	long long x,y;
	Fraction(){};

	Fraction(long long a, long long b){
		long long temp = gcd(a,b);
		x=a/temp;
		y=b/temp;
	}

	Fraction operator+(const Fraction& f){
		Fraction temp;
		long long a,b;

		a = this->x * f.y + f.x * this->y;
		b = this->y * f.y;
		long long tempgcd = gcd(a,b);
		temp.x = a/tempgcd;
		temp.y = b/tempgcd;
		return temp;

	}

	Fraction operator*(const Fraction& f){
		Fraction temp;
		long long a,b;
		a = this->x*f.x;
		b = this->y*f.y;
		long long tempgcd = gcd(a,b);
		temp.x = a/tempgcd;
		temp.y = b/tempgcd;
		return temp;
	}

	void print(){
		cout<<this->x<<"/"<<this->y<<endl;
	}
	
};

int main(){
	ios_base::sync_with_stdio(false);
	int test, i;
	long long x1,y1,x2,y2;
	cin>>test;
	for (i = 1; i<= test; i++){
		cin>>x1>>y1>>x2>>y2;
		if (x1 == 0 && y1 == 0){
			cout<<"Case "<<i<<": 0"<<endl;
			continue;
		}
		Fraction a = Fraction(x1, x1+y1)*Fraction(x2+1, x2+y2+1);
		Fraction b = Fraction(y1, x1+y1) * Fraction(y2+1, x2+y2+1);
		Fraction c = a+b;
		cout<<"Case "<<i<<": ";
		c.print();

	}
	return 0;
}