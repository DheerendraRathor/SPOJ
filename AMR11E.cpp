#include<vector>
#include<cstdio>
using namespace std;
    int n=625;
	int d = 25;//3163;
	vector<bool>num(n,false);
	 //int counter=2;
   
 bool primefact(int a,vector<int>& prime)
 {
	 int count=0;
	 for(int i=0;i<prime.size();i++)
	 {
		 if(a%prime[i]==0)count++;
		 if(count==3)break;
	 }
	 return count==3;
 }
int main (){
	for (int x = 1; x <= d; x++){
			for (int y = 1; y <= d; y++){
				int sqx=x*x,sqy=y*y;
				int m =(3*sqx)-sqy;
				 //m=m-sqx;
				 if(m<=n){
					 if(x>y&&m%12==11)num[m]=num[m]^true;
					 m=m+2*sqy;
					 if(m<=n){
						 if(m%12==7)num[m]=num[m]^true;
						m=m+sqx;
						if(m<=n&&(m%12==1||m%12==5))num[m]=num[m]^true;
					}
				 }
				 
			}
	}
   for (int i=5;i<=d;i++){
	   if(num[i]){
		   for(int j=i*i;j<n;j+=i*i)num[j]=false;
	   }
   }
   vector<int>prime;
   prime.push_back(2);
   prime.push_back(3);
  
  for(int a=5;a<n;a++){
	  if(num[a])prime.push_back(a);
  }
  vector<int>kn;
  for(int i=30;kn.size()!=1000;i++){
	  if(primefact(i,prime))kn.push_back(i);
  }
  int t;
  scanf("%d",&t);
  while(t--){
	  int number;
	  scanf("%d",&number);
	  printf("%d\n",kn[number-1]);
  }
  return 0;
}

