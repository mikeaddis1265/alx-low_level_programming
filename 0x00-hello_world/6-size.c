#include<stdio.h>


int main(){

   printf("Size of a char : %d byte(s)\n" , (int)sizeof(char));
   printf("Size of an int : %lu byte(s)\n" , sizeof(int));
   printf("size of a long int : %d byte(s)\n" , (int)sizeof(long int));
   printf("size of a long long int : %lu byte(s)\n",sizeof(long long int));
   printf("sizeof a float : %d byte(s)\n" ,(int)sizeof(float));
    


   return 0;

}