#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h> 
//Author Hoang Bui hhb5051@spu.edu
int countDigit(long long n) { 
    int count = 0; 
    if(n==0){
      ++count;
    }
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}
int digit_sum(int n) {
  if (countDigit(n)==1){
    return n;
  }
  else{
    return n%10 + digit_sum(n/10);
  }
}
int main(void) {
  char *entrance = readline("Enter an int: ");
  int entrance2 = atof(entrance);
  printf("sum of digits of %s is %i.\n", entrance, digit_sum(entrance2));
  return 0;
}