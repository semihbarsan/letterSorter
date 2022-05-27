#include<stdio.h>
int main(){
	int i,j,c,e;
	int adet,temp;
	int a=1;
	int b=1;
	int d=1;
	char harfal[100];
	
	printf("kac harf girmek istediginizi girin : ");
	scanf("%d",&adet);
	
	for(i=1 ; i<=adet ; i++){
	 	printf("%d. harfi giriniz : ",i);
	 	scanf("%s",&harfal[i]);	 	
	}
	for(i=1 ; i<=adet ; i++){
		  for(j=1 ; j<=adet ; j++){
		 	 	 	if(harfal[i]<=harfal[j]){
		 	 	 		temp=harfal[i];
		 	 	 		harfal[i]=harfal[j];
		 	 	 		harfal[j]=temp;
					   }
			}
	}
	for(i=1 ; i<=adet ; i++){		
		if( harfal[i]<=90){
		c=b;
			if(c==1){				
					printf("\nBUYUK HARFLER :");						
				b++;									
			}
    	printf("\n"); 
		printf("\n%d. harf : %c\n",i,harfal[i]);	    
	                     }
	if(harfal[i]>=97) {
		e=d;
	    	if(e==1){	    		
	    		    printf("\nKUCUK HARFLER:");	
	    		d++;
			}	
			printf("\n"); 
	    	printf("\n%d. harf : %c\n",a,harfal[i]);	
	    	a++;
		}		    
                       	   }	
	return 0 ;
}
