#include<stdio.h>
int main()
{   int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	   scanf("%d",&a[i]);
    }
	int max=(a[0]+a[n-1]);//gan max bang tong chu so dau vaf chu so cuoi
	for(i=0;i<n-1;i++){	//
	    if((a[i]+a[i+1])>=max)
	      max=a[i]+a[i+1];
   }
    int max1=0;
    for(i=0;i<n-1;i++){//tim a[i] max 
    	if((a[i]+a[i+1])==max&&a[i]>max1)
    	  max1=a[i];	
	}
	if((a[0]+a[n-1])==max&&a[n-1]>max1){// so sanh voi a[n-1]
		printf("%d ",a[n-1]);
		printf("%d\n",a[0]);
	}
	else{
        for(i=0;i<n-1;i++){ 
    	  if((a[i]+a[i+1])==max&&a[i]==max1){
    	    printf("%d ",a[i]);
    	    printf("%d\n",a[i+1]);	
	      }
       }
}
    return 0;
}