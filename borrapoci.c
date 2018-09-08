# include<stdio.h>
# include<stdlib.h>

/* carnet: PV12017 */
int main(){
int i=0,tamano=0,opc=0,poci;	
	printf("NUMERO DE ELEMENTOS DEL VECTOR? -->");
	scanf("%d",&tamano);
	printf("\n");
	int array[tamano];
	
	do{
	printf("MENU:\n");
	printf("1.Insertar\n");
	printf("2.Eliminar pocicion\n");
	printf("3.salir\n");
	
	printf("Elije una opcion -->");
	scanf("%d", &opc);	
	printf("\n\n\n");
	
	if(opc==1){
		/* llena el vector*/
	for(i=0;i<tamano;i++){
		printf("Ingrese valor pocicion %d -->",(i+1));
		scanf("%d",&array[i]);
		}
		printf("\n\n");
		
	/* muestra el vector*/
	for(i=0;i<tamano;i++){
		printf("%d",array[i]);
	printf("\t");
		}
	printf("\n\n");
	}
	
	/* elimina la pocicion y reduce el tamano*/
	if(opc==2){
		printf("Pocicion a Borrar");
		scanf("%d",&poci);
		for(i=(poci-1);i<tamano;i++){
			array[i]=array[(i+1)];
				}
				tamano-=1;
			
			
		
			/* muestra el vector nuevo*/
		for(i=0;i<tamano;i++){
		printf("%d",array[i]);
	    printf("\t");
		}
	    printf("\n\n");
	}
	    
	    }while(opc!=3);
	
	}
