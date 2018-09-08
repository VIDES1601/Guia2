# include<stdio.h>
# include<stdlib.h>

/* carnet: PV12017 */

int main(){
	int opc=0,fila,columna;
	int i=0,j=0; 
	float valor=0;
    int sillas[5][5];
	         
	           for(i=0;i<5;i++){
			   for(j=0;j<5;j++){
				  sillas[i][j]=0;
				   }
				   }             
	            
	do{	
		
	printf("MENU:\n");
	printf("1.Vender\n");
	printf("2.Mostrar ganancias\n");
	printf("3.Salir\n");
	printf("Elije una opcion:");
	scanf("%d", &opc);	
	printf("\n\n\n");
	
	           
		
		if(opc==1){
		printf("Ingresa el numero de fila -->");
		     scanf("%d",&fila);
		     printf("\n");		
	          printf("Ingresa el numero de columna -->");
		       scanf("%d",&columna);
		       	
		       	
				 
		/*asigna la silla*/       	
	   if (sillas[(fila-1)][(columna-1)]==0)
	      { 
      	   sillas[(fila-1)][(columna-1)]=1;
      	    printf("Silla vendido");	
      	     printf("\n"); 
	         }else{
				printf("Silla ocupada");
				printf("\n\n"); 
				 }
				 /* suma la ganancia*/
				  if(fila==1){
					valor=valor+5;}
                    else if(fila==5){
					valor=valor+2.5;}
					else{
					valor=valor+3.5;}
				}
				
				   
					
					
							
		   else if(opc==2){
			   for(i=0;i<5;i++){
			   for(j=0;j<5;j++){
				   printf("%d",sillas[i][j]);
				   }
				   printf("\n");
				   }
			printf("ganancias %f",valor);
			printf("\n\n");
			}
	
	      else if (opc==3){
			  break;
			  }  
		
		}while(opc !=3);
		
	
	
	
	
	return 0;
	}

