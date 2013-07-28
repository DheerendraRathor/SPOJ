#include<iostream>
#include<cmath>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==-1)break;
		int packet[n];
		double sum=0;
		for(int i=0;i<n;i++){
			int d;
			cin>>d;
			packet[i]=d;
			sum=sum+d;
		}
		double avg=sum/n;
		if(avg!=floor(avg)){
			cout<<-1<<endl;
			continue;
		}
		int count=0;
		for(int i=0;i<n;i++){
			count=count+abs(packet[i]-avg);
		}
		cout<<count/2<<endl;
	}
	return 0;
}
