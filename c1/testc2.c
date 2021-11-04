#include<stdio.h>
int main(){
	int a;
	char b;
	float c;
	double d;

	a=520;
	b='b';
	c=3.14;
	d=3.1415926;

	printf("向佳欣是大帅比%d\n",a);\
	printf("呵呵呵加%c\n",b);
	printf("圆周率是:%.2f\n",c);
	printf("精确到小数点后9位的圆周率是:%11.9f\n",d);

	return 0;
	
}

