#include <stdlib.h>
#include <stdio.h>

int sumar(int *a,int *y){
  int b= *y;
  b=*a+b;
  *y=b;
  return b;
}

int restar(int *a,int *y){
  int b= *y;
  b=b-*a;
  *y=b;
  return b;
}

int resta(int *a,int *y){
  int b= *y;
  b=*a-b;
  *y=b;
  return b;
}

int multiplicar(int *a,int *y){
  int b= *y;
  b=*a*(b);
  *y=b;
  return b;

}

int dividir(int *a,int *y){
  int b= *y;
  b=b/(*a);
  *y=b;
  return b;
}

int potencia(int *a,int *b){
  int y=1;
  for(int x=0;x<*b;x++){
    y= y * (*a);

  }

  return y;
}

int main(void) {
  
  int opc;
  printf("%s\n", "CALCULADORA: \n1)sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n5)Potencia\n6)Promedio\n");
  scanf("%i" , &opc);
  printf("\n para finalizar las operaciones ingrese un 0");
  int a,b,y,m,con,conn;
  con=-1;
  y=0;
  a=1;
  m=1;
  conn=1;
  switch(opc){

    case 1:
        
      while (a!=0){
        printf("%s\n", "\n ingrese valor: \n");
        
        scanf("%d", &a);
        sumar(&a, &y); 
      }

      printf("%s\n", "\n resultado: \n");
   
      printf("%d\n", sumar(&a, &y));
      break;
    
    case 2:
    
      while (a!=0){
        printf("%s\n", "\n ingrese valor: \n");
        scanf("%d", &a);
        if(conn==1){
          resta(&a, &y);
          conn++;
        }
        else 
          restar(&a,&y);
          
      }

      printf("%s\n", "\n resultado: \n");
  
      printf("%d\n", y);
      break;
     
    case 3:

      while (a!=0){
        printf("%s\n", "\n ingrese valor: \n");
        scanf("%d", &a);
        if (a!=0){
          multiplicar(&a, &m);
        }
      }

      printf("%s\n", "\n resultado: \n");
    
      printf("%d\n", m);
      break;

    case 4:

      while (a!=0){
        printf("%s\n", "\n ingrese valor: \n");
        scanf("%d", &a);
        if(conn!=1) 
          if(a!=0)
            dividir(&a,&m);
    
        if(conn==1){
          m=a; 
          conn++;
        }  
      }

      printf("%s\n", "\n resultado: \n");

      printf("%d\n", m);
      break;

    case 5:

      printf("%s\n", "\n ingrese base: \n");
      scanf("%d", &a);

      printf("%s\n", "\n ingrese potencia: \n");
      scanf("%d", &b);

      printf("%s\n", "\n resultado: \n");
        
      printf("%d\n", potencia(&a, &b));
      break;

    case 6:

      while (a!=0){
        printf("%s\n", "\n ingrese valor: \n");
        
        scanf("%d", &a);
        sumar(&a, &y); 
        
        con++;
      }
      printf("%s\n", "\n resultado: \n");
      printf("%d\n", y/con);
      break;
  }
  return 0;
}
