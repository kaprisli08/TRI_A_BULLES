#include <stdio.h>
#include <stdlib.h>

int main()
{
	// variabl declaration
	
    int T[20];
    int i,j,k, nmbr;
    printf("Choose a number between 2 and 20:");
    scanf("%d", &nmbr);
    
    // filling
    
    printf("The numbers before TRI BY BULLE\n");
    for(i=0;i<nmbr;i++){
    	printf("number %d:", i+1);
    	scanf("%d", &T[i]);
	}
	
	// treatment 
	
    for(i=0;i<nmbr;i++){
        for(j=0;j<nmbr-1;j++){
            if(T[j]>T[j+1]){
                k = T[j];
                T[j]= T[j+1];
                T[j+1]= k;
            }
        }
    }
     printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
     
     // result 
     
     printf("The numbers after TRI BY BULLE : \n");
    for(i=0; i<nmbr; i++){
        printf("T[%d]=%d\n ", i+1,T[i]);
    }
        return 0;
}
