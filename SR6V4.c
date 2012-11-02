#include <stdio.h>															  //подключение библиотек содержащих функции ввода, вывода и математических  функций
#include <math.h>
#include <stdlib.h>

const int k = 13;

int main(void){
  int d,dd,a,n,e[13],i;                                               //определение переменных и присваивание им необходимых значений
  float m;
  printf("Yaskovich Dmitry (T01-01c). Exercise 6. Variant 4\n\n");                  //Информация о программе
  printf("Enter interval and number A:\n");
  scanf("%d %d %d",&d,&dd,&a);
  for (i = 1; i <= (k-1); i++) {
	e[i]=d+(int)((dd-d)*(rand() / (RAND_MAX + 1.0)));
  }
  printf("--------------------------------\n");
  for (i = 1; i <= (k-1); i++) {

  }
  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}
