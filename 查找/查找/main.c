//
//  main.c
//  查找
//
//  Created by xiang on 2021/11/25.
//

#include <stdio.h>
#include<stdlib.h>
#define MAXL 100
typedef int KeyType;
typedef char InfoType;
typedef struct{
    KeyType key;
    InfoType data;
}RecType;
void CreateList(RecType R[],KeyType keys[],int n){
    for(int i=0;i<n;i++){
        R[i].key=keys[i];
    }
}
void DisList(RecType R[],int n){
    for(int i=0;i<n;i++){
        printf("%d",R[i].key);
    }
    printf("\n");
}
int SeqSearch(RecType R[],int n,KeyType k){
    int i=0;
    while(i<n&&R[i].key!=k){
        printf("%d",R[i].key);
        i++;
    }
    if(i>=n){
        return 0;
    }else{
        printf("%d",R[i].key);
        return i+1;
    }
}
int main() {
    // insert code here...
    RecType R[MAXL];
    int n=10,i;
    KeyType k=5;
    int a[]={3,6,2,10,1,8,5,7,4,9};
    CreateList(R,a,n);
    printf("关键字序列:");
    DisList(R, n);
    printf("查找%d所比较的关键字:\n\t",k);
    if((i=SeqSearch(R, n, k))!=0){
        printf("\n元素%d的位置是%d\n",k,i);
    }else{
        printf("\n元素%d不在表中",k);
    }
    return 1;
}
