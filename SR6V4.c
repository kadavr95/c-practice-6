#include <stdio.h>                                                              //подключение библиотек содержащих функции ввода, вывода и математических  функций
#include <math.h>

int main(void){
  float m[41], min=6,av,sum=0,i;                                                //определение переменных и присваивание им необходимых значений
  short int n=0;
  printf("Yaskovich Dmitry (T01-01c). Lab 6. Variant 22\n\n");                  //Информация о программе
  for (i = -14; i <=14; i+=0.7) {                                               //цикл в котором выодятся значения элементов и ищется минималный элемент
	m[n]=5*cos(0.4*i);
	if (m[n]<min) {                                                             //выбор минимального элемента
	  min=m[n];
	}
	printf("No:%2d Element: %13.10f\n",n,m[n]);                            //вывод элементов
	n=n+1;
  }
  for (i = 0; i <= 40; i+=2) {                                                   //цикл расчета суммы
	sum+=m[i];
  }
  av=sum/29;                                                                    //вычисление среднего
  printf("\nMinimum:       %13.10f\n",min);                                     //вывод результатов
  printf("Average:       %13.10f\n\n",av);
  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}
