#include <stdio.h>
int cuadradoint(int num);
void cuadradovoid(int num);
void mostrar(int x);
void invertir(int *a,int *b);
void ordernar(int *menor,int *mayor);
void leepares();
int main(){
    leepares();
    return 0;
}
//A)
int cuadradoint(int num){
    return num*num;
}
//B)
void cuadradovoid(int num){
    printf("%d\n",cuadradoint(num));
}
//C)
void mostrar(int x){
    printf("direccion de memoria:%p\n",&x);
    printf("contenido:%d\n",x);
}
//D)
void invertir(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}
//E)
void ordenar(int *menor,int *mayor){
   if(*menor>*mayor){
       invertir(menor,mayor);
   }
}
//F)
void leepares(){
    int a,b;
    printf("Ingrese un numero\n");
    scanf("%d",&a);
    printf("Ingrese un numero\n");
    scanf("%d",&b);
    if(a%2==0 && b%2==0){
        ordenar(&a,&b);
        printf("par menor:%d\n",a);
        printf("par mayor:%d\n",b);
    }
}