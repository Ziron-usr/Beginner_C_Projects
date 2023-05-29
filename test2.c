#include <stdio.h>


    int incrementAge() {
  static int age = 0;
  age++;
  return age;
}
int main(void){
    printf("%i", incrementAge);
}