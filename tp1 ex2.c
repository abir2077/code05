#include<stdio.h>
int main () { int i, j ;
int Mat[4][4] = {
{1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16} } ;
printf("donner le matrice:\n") ;
for(i=0;i<4;i++) {
for(j=0;j<4;j++) {
printf("%d\t",Mat[i][j]);
}
printf("\n") ;
}
for(i=0;i<4;i++){
for(j=i+1;j<4;j++){
int temp = Mat[i][j] ;
Mat[i][j]  =  Mat[j][i] ;
Mat[j][i] = temp ;
}
}
printf("donner le matrice apr�s �change de traingle:\n") ;
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%d\t",Mat[i][j]) ;
}
printf("\n");
}
return 0 ;
}