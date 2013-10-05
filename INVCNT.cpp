#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;
typedef long long ll;
#define FOR(n) for (int i=0;i<n;i++)
#define pb(n) push_back(n);

struct node{
	int value;
	int height;
	node* left;
	node* right;
};

int height(node* n){
	if(n==NULL)return 0;
	return n->height;
}

node* insert(node* n,int val,long long *count){
	if(n==NULL)
	{
		node* temp=new node();
		temp->value=val;
		temp->left=NULL;
		temp->right=NULL;
		temp->height=1;
		return temp;
	}
	if(n->value > val)
	{
		n->left=insert(n->left,val,count);
		n->height+=1;
		*count=*count+1+height(n->right);
	}
	else {
		n->right=insert(n->right,val,count);	
		n->height+=1;
	}
	return n;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		node* root=NULL;
		int n;
		scanf("%d",&n);
		long long ans=0;
		while(n--){
			int temp;
			scanf("%d",&temp);
			root=insert(root,temp,&ans);
			//cout<<ans<<endl;
		}
		printf("%lld\n",ans);
		delete root;
	}
	return 0;
}
