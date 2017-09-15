#include <stdio.h>

void prob1(){
  int sum = 0;
  int three = 3;
  int five = 5;
  while (five < 1000 || three < 1000){
    if (three % 5 != 0){
      sum += 3;
    }
    sum += 5;
    three++;
    five++;
  }
  printf("%d\n",sum);
}

void prob2(){
  int first = 1;
  int next = 2;
  while (next < 4000000){

  }
}

int main(){
  prob1();
  prob2();
  return 0;
}
