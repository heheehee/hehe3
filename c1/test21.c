#include<stdio.h>
int main(){
	int count;
	printf("你输入一段英文字符:");
	while(getchar() !='\n'){
		count=count+1;
	}
	printf("你总共输入了%d个字符!\n",count);
	return 0;
}
