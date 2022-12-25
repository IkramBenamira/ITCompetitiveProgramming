#include<stdio.h>
function Search(int i,int n,int key){
table T[100];
printf("donner l'element : ");
scanf(key);
for(i=0;i<n;i++){
    if (T[i]==key){
        return i;
    }else return -1;
}
}
