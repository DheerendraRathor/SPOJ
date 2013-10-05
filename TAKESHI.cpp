#include<iostream>
using namespace std;
typedef long long ull;

ull find(int i, int j, int** array, int n, ull **sum){
	if(i==n-1&&j==n-1){
		sum[i][j]=0;
		return 0;
	}
	ull sumij1;
	if(j!=n-1){
		if(sum[i][j+1]!=-1){
			sumij1=sum[i][j+1];
		}
		else {
			sum[i][j+1]=find(i,j+1,array,n,sum);
			sumij1=sum[i][j+1];
		}
	}
	ull sumi1j;
	if(i!=n-1){
		if(sum[i+1][j]!=-1){
			sumi1j=sum[i+1][j];
		}
		else {
			sum[i+1][j]=find(i+1,j,array,n,sum);
			sumi1j=sum[i+1][j];
		}
	}
	if(i!=n-1&&j!=n-1){
		sum[i][j]=array[i][j]+max(sumij1,sumi1j);
		return sum[i][j];
	}
	if(i!=n-1){
		sum[i][j]=array[i][j]+sumi1j;
		return sum[i][j];
	}
	if(j!=n-1){
		sum[i][j]=array[i][j]+sumij1;
		return sum[i][j];
	}
}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int **array;
		ull **sum;
		array = new int *[n];
		sum= new ull *[n];
		for(int i = 0; i <n; i++){
			array[i] = new int[n];
			sum[i] = new ull[n];
		}
		int c;
		cin>>c;
		for(int i=0;i<n;i++)for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			array[i][j]=temp;
			sum[i][j]=-1;
		}
		ull ans=find(0,0,array,n,sum);
		if(ans-c>=0)cout<<ans-c<<endl;
		else cout<<-1<<endl;
	}
	return 0;

}
