#include<stdio.h>
#include<conio.h>

main(){
int nim1[11][11];
int nim2[11][11];
int hasi[11][11];
int i,j;
printf("penjumlahan NIM\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("Masukkan nilai index%d,%d=",i,j);
scanf("%d",&nim1[i][i]);
}
}
printf("\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("Masukkan nilai index%d%d=",i,j);
scanf("%d",&nim2[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
hasil [i][j]=nim1[i][j]+nim2[i][j];
printf("%d",hasil[i][j])
}
printf("\n");
}
getch();
}
