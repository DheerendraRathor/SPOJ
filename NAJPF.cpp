#include <iostream>
#include <string>
using namespace std;

size_t index[1000001];

int main(){
	int t, count, i;
	size_t pos;
	string str, sub;
	cin>>t;
	while(t--){
		count = 0;
		cin>>str>>sub;
		pos = str.find(sub,0);
		while(pos!= string::npos){
			index[count] = pos+1;
			count++;
			pos = str.find(sub, pos+1);
		}

		if (count){
			cout<<count<<endl;
			for (i = 0; i < count; i++){
				cout<<index[i]<<" ";
			}
		}
		else{
			cout<<"Not Found";
		}
		cout<<"\n\n";
	}
	return 0;
}