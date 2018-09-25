#include <stdio.h>
#define tam 3
int main(){
	int i=0,j=0;
	int matriz[tam][tam];
	int fil1,fil2,fil3;
	int col1,col2,col3;
	int dig1,dig2;
	
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
	printf("escriba valor %d,%d -->",i,j);
	scanf("%d",&matriz[i][j]);
	}}

   printf("\n\n");

/*  imprime la matriz */
for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
	printf("%d",matriz [i][j]);
	}
	
	printf("\n");
	}

printf("\n\n\n");
	
	//determina si es amiga o no
	//filas
	 for(int i=0;i<tam;i++)
	 {
		 for(int j=0;j<tam;j++)
		 {
			 if(i==0)
			 {
				 fil1 = fil1+matriz[0][j];
				 }
				if(i==1)
				{
					fil2= fil2+matriz[1][j];
					} 
				if(i==2)
				{
					fil3= fil3 + matriz[2][j];
					}
			}
		 }
		 if(fil1==fil2 && fil2 == fil3){
			 printf("suma de filas %d", fil3 );
			 printf("\n");
		 //columnas
		for(int i=0;i<tam;i++)
	 {
		 for(int j=0;j<tam;j++)
		 {
			 if(j==0)
			 {
				 col1 = col1+matriz[i][0];
				 }
				if(j==1)
				{
					col2= col2+matriz[i][1];
					} 
				if(j==2)
				{
					col3= col3 + matriz[i][2];
					}
			 }
		 }
		 if(col1==col2 && col2 == col3){
			 printf("suma de columnas %d", col3);
		 //diagonal
		 for(int i=0;i<tam;i++)
		 {
			 for(int j=0;j<tam;j++)
			 {
				 if(i==j)
				 {
					 dig1=dig1+matriz[i][j];
					 }
				 }
			 }
	for(int i=0;i<tam;i++)
		 {
			 for(int j=0;j<tam;j++)
			 {
				 if(i+j==tam-1)
				 {
					 dig2= dig2+matriz[i][j];
					 }
				 }
			 }
			 if(dig1==dig2)
			 {
				 printf("suma diagonales %d -->", dig1);}
	
	}
	printf("La matriz es Amiga");


}
else {
	printf("La Matriz no es Amiga");
	}













	
	
	
	
	
	return 0;
	}
