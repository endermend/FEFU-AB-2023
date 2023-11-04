#include <stdio.h>

int main(){
	unsigned long long n;
	scanf("%llu",&n);
	int flag = 0;
	do{
    //0x?????babe == 0xbabe - True
    //0x?????beba == 0xbabe - False
		flag = (n&0xffff)==0xbabe;
		n>>=4;
	}while(!flag && n>0);
	printf("%s\n",flag?"YES":"NO");
}
