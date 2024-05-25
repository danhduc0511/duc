#include<stdio.h>
int main(){

    int n,i,a[100][100];
    scanf("%d",&n);
     int hang1=0,hangn=n-1,cot1=0,cotn=n-1,dem=1;
    while((hangn>=hang1)&&(cotn>=cot1)){
    	for(i=cot1;i<=cotn;i++){
	    	a[hang1][i]=dem;
		    dem++;
    	}
    	++hang1;
    	for(i=hang1;i<=hangn;i++){
    		a[i][cotn]=dem;
    		++dem;
		}
		 --cotn;
		 for(i=cotn;i>=cot1;i--)   {
		 
    	     a[hangn][i]=dem;
    	     ++dem;
         }
         --hangn;
         for(i=hangn;i>=hang1;i--){
         	a[i][cot1]=dem;
         	++dem;	
		 } 
         ++cot1;
	}
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		    printf("%d ",a[i][j]);
	   }
	   printf("\n");
	}
	return 0;
}
    