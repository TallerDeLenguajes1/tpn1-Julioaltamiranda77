#include <stdio.h>
int main(){
    int x=2;
    int *punt=&x;
    printf("contenido del puntero: %d\n",*punt);
    printf("direccion de memoria almacenada por el puntero: %p\n",punt);
    printf("direccion de memoria de la variable x: %p\n",&x);
    printf("direccion de memoria del puntero: %p\n",&punt);
    printf("tamano de memoria de la variable x:%d\n",sizeof(x));
    return 0;
}