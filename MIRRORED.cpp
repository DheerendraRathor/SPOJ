#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    printf("Ready\n");
	while(1){
		char a,b,c;
		scanf("%c",&a);
        scanf("%c",&b);
        scanf("%c",&c);
		if(a==' '&&b==' ')break;
		bool check=true;
		switch(a){
			case 'p':if(b=='q')check=false;break;
			case 'q':if(b=='p')check=false;break;
			case 'b':if(b=='d')check=false;break;
			case 'd':if(b=='b')check=false;break;
		}
		if(!check)printf("Mirrored pair\n");
		else printf("Ordinary pair\n");
	}
	return 0;
}
		