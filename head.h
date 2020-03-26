#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int add_2num(char *a, char *b)
{
    int c,d;
    //char str[50];
    //memcpy(str,&a,sizeof(char));
    c = atoi(a);
    //memcpy(str,&b,sizeof(char));
    d = atoi(b);
	printf("Sum of %d, %d is: %d\n",c,d,c+d);
    //printf("Added value=%d\n", a + b);
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];

   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
*/
