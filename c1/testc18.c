#include<stdio.h>
int main(){
	char ch;
	printf("请输入你的成绩评级:");
	scanf("%c",&ch);

	switch(ch){
		case 'A':printf("你的成绩在90分以上!\n");break;
		case 'B':printf("你的成绩在80-90分之间!\n");break;
		case 'C':printf("你的成绩在70-80分之间\n");break;
		case 'D':printf("你的成绩在60-70分之间!\n");break;
                case 'F':printf("你的成绩在60分以下!\n");break;
		default:printf("请输入有效的成金评级！\n");break;
	}
	return 0;
}
