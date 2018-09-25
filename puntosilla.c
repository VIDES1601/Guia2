#include <stdio.h>

int main(){
int i=0,j=0,fil=0,col=0;
int maxfil [0];
int mincol [0];


 printf("cunatas filas? ");
	scanf("%d",&fil);
printf("cunatas columnass? ");
	scanf("%d",&col);
	
	int silla[fil][col];
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
	printf("escriba valor %d,%d -->",i,j);
	scanf("%d",&silla[i][j]);
	}}
	
	
	for(i=0;i<fil;i++){
		
		maxfil[i]=-999;
		}
	for(i=0;i<col;i++){
		
		mincol[i]=999;
		}
	
	
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
	
	
	if(silla[i][j]>maxfil[i]){
		maxfil [i]=silla[i][j];
		}
	
	if(silla [i][j]< mincol[j]){
		mincol [j]= silla
		2 [i][j];
		}
	
   }}
	
	
	for(i=0;i<fil;i++){
		for(j =0;j<col;j++){
	
    if(maxfil [i]==mincol[j]){
		
		printf("punto de cilla en %d,%d -->",i,j);
		}
    }}
	
	
	return 0;
	}
