#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Liste{
    int val;
    Liste*suiv; 
};
int n , x ,y, d; 
print("donner le nombre des points : ");
scanf(n);
for (int i= 0 ; i<n;i++){
    printf("donner les points de 1er point:");
    scanf(x1,y1);
    printf("donner les points de 2eme point:");
    scanf(x2,y2);
    d=sqrt((x1-x2)pow(2)+(y1-y2)pow(2));
    Liste* ajouterD(Liste * val,int a){
      Liste * Nouv=(Liste*)malloc(sizeof(Liste));
      Nouv->val=a;
      Nouv->suiv=L;
      return Nouv;
    }
}
printf("");