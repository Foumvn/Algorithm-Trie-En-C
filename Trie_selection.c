#include <stdio.h>
#define MAX 50
#define SIZE 10
int selection(){
int n,i;
int T[MAX];
int max, posmax;
int m;
// int m
//les entres
do{
    printf("Veuillez taper les dimensions du tableau:");
    scanf("%d",&n);
}while(n>MAX || n<1);
m=n;
//remplissage
for(i= 0 ; i < n ; i++){
    printf("Donnez la valeur de lelement num %d:",i+1);
    scanf("%d",&T[i]);
}
//Affichage
printf("Doonez la valeur numero num %d:",i+1);
scanf("%d",&T[i]);
printf("Avant le trie est.\n");
for(i=0; i<n; i++)
    printf("%7d",T[i]);
printf("\n");
//Traitement

while(n>0){
max=T[0];
posmax=0;
for(i= 0 ; i<n; i++)
   {
    if(T[i]>max){
    max=T[i];
    posmax=i;
    }


}
for(i=posmax;i<n; i++){
    T[i]=T[i+1];
}
T[n-1]=max;
n--;
}
printf("Apres le trie est.\n");
for(i=0; i<m; i++)
    printf("%7d",T[i]);
printf("\n");



return 0;
}
