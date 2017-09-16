#include <stdio.h>

void prob1(){
  int sum = 0;
  int three = 3;
  int five = 5;
  int fifteen = 15;
  while (three < 1000){
    sum += three;
    three += 3;
  }
  while (five < 1000){
    sum += five;
    five += 5;
  }
  while (fifteen < 1000){
    sum -= fifteen;
    fifteen += 15;
  }
  printf("%d\n",sum);
}

void prob2(){
  int first = 1;
  int second = 2;
  int next = 3;
  int sum = 0;
  while (second < 4000000){
    if (second % 2 == 0){
      sum += second;
    }
    first = second;
    second = next;
    next = first + second;
  }
  printf("%d\n",sum);
}

int main(){
  prob1();
  prob2();
  return 0;
}
