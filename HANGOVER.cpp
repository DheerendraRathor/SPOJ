#include<cstdio>
#include<vector>
using namespace std;

int main(){
	vector<double>len;
	double sum=0.0;
	len.push_back(sum);
	double count=2.0;
	while(1){
		sum+=1/count;
		count++;
		len.push_back(sum);
		if(sum>5.20)break;
	}
	while(1){
		double num;
		scanf("%lf",&num);
		//printf("%d\n",num);
		if(num==0.0)break;
		for(int i=0;i<len.size();i++){
			if(num>len[i]&&num<=len[i+1]){
				printf("%d card(s)\n",i+1);
				break;
			}
		}
	}
	return 0;
	
}
