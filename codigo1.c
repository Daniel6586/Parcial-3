#include<stdio.h>

int main (){ 
int miarreglo [10];
miarreglo[0]=10;
miarreglo[1]=10;
miarreglo[2]=10;
miarreglo[3]=10;
miarreglo[4]=10;
miarreglo[5]=10;
miarreglo[6]=10;
miarreglo[7]=10;
miarreglo[8]=10;
miarreglo[9]=10;
miarreglo[10]=10;
int i= 0;

while (i <= 9){
printf("El valor de miarreglo[%d]:", i);
scanf("%d", &miarreglo[i]);
printf("El valor de miarreglo[%d] = %d \n", i, miarreglo[i]);

i++;
}

return 0;


}
