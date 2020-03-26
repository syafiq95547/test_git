#include <stdio.h>
#include <stdlib.h>
 
void stop_now() {
	  abort();
}
 
int main(void)
{
	printf("Hello\n");
	  printf("Preparing to stop...\n");
	   
	    stop_now();
	     
	      printf("This code is never executed.\n");
	       
	        return EXIT_SUCCESS;
		 
}
