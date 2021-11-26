//
//  main.c
//  查找2
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
int BinSearch(RecType R[],int n,KeyType k){
    int low=0,high=n-1,mid,count=0;
    while(low<=high){
        mid=(low+high)/2;
        printf("第%d次比较:在[%d,%d]中比较元素R[%d]:%d\n",++count,low,high,mid,R[mid].key);
        if(R[mid].key==k){
            return mid+1;
        }
        if(R[mid].key>k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return 0;
}
int main() {
    // insert code here...
    RecType R[MAXL];
    KeyType k=9;
    int a[]={1,2,3,4,5,6,7,8,9,10},i,n=10;
    CreateList(R, a, n);
    printf("关键字序列:");
    DisList(R, n);
    printf("查找%d的比较过程如下:\n",k);
    if((i=BinSearch(R, n, k))!=-1){
        printf("元素的位置是%d\n",k,i);
    }else{
        printf("元素%d不在表中\n",k);
    }
    return 1;
}
