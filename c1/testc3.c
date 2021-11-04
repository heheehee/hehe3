#include<stdio.h>

#define URL "http://www.xiangmomo.com"
#define NAME "向佳欣大帅比"
#define BOSS "呵呵"
#define YEAR 2002
#define MONTH 2
#define DAY 20

int main(){
	printf("%s出生于%d年%d月%d日\n",NAME,YEAR,MONTH,DAY);
	printf("%s的网民叫%s\n",NAME,BOSS);
	printf("%s的域名是%s\n",NAME,URL);

	return 0;
}

