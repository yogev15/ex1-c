#include "Mymath.h"


double exponent (int x){
   	 double i = 1.0;
   	 double e = 2.7182;
   	 
   	 if(x==0)
  		 return i;
	 	
	 if(x==1)
	 	return e;
	 for(int j = 0;j < x;j++)
	 {
	 	i=i*e;
	 }
	 
	 if(x<0)
	 {
	 	i=1/i;
	 	}
	 return i;
	 	
   	 
  }

double power(double x, int y){
   	 double a=x; 
   	 double b=y;
   	 if(y<0){
   	 b=-y;
	}
	   
	for(int i=1;i<b;i++){
		 x*=a;
     	   }
         if(y<0){
       	  return 1.0/x;
    	  }
    
   	 return x;
    
}

