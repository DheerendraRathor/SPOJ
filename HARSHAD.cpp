#include<cstdio>
#define N 1000001
int d=1001;
bool num[N];
int next(int n){
int temp=n;
while(n!=0){
temp+=n%10;
n=n/10;
}
return temp;
}
int dev[N][2];
int main(){
for(int i=0;i<N;i++){dev[i][0]=1;num[i]=0;}
for(int x=1;x<=d;x++){
for(int y=1;y<=d;y++){
int sqx=x*x,sqy=y*y,m;
m=(3*sqx)-sqy;
if(m<N){
if(x>y&&m%12==11)num[m]^=1;
m=m+2*sqy;
if(m<N){
if(m%12==7)num[m]^=1;
m=m+sqx;
if(m<N&&(m%12==1||m%12==5))num[m]^=1;
}
}
}
}
for (int i=5;i<d;i++){
if(num[i]){
int k=i*i;
for(int j=k;j<N;j+=k)num[j]=0;
}
}
num[2]=num[3]=1;
int counter=0;
for(int i=1;i<N;i++){
if(dev[i][0]){
for(int j=next(i);j<N&&dev[j][0];j=next(j)){
dev[j][0]=0;
}
if(num[i])dev[i][1]=++counter;
else dev[i][1]=counter;
}
else dev[i][1]=counter;
}
dev[0][1]=0;
int t;
scanf("%d",&t);
while(t--){
int a,b,count;
scanf("%d%d",&a,&b);
if(dev[a][0]&&num[a])count=dev[b][1]-dev[a][1]+1;
else count=dev[b][1]-dev[a][1];
printf("%d\n",count);
}
return 0;
}
