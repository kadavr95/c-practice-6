#include <stdio.h>															    //подключение библиотек содержащих функции ввода, вывода, математических  функций, и функции рандом
#include <math.h>
#include <stdlib.h>
#include <time.h>

const int k = 13;

int main(void){
  int d,dd,a,n,e[13],i,j,t,sum=0,sum2=0,kv=0,kv2=0, *q;                          //определение переменных и присваивание им необходимых значений
  float av,av2;
  int stime;
  long int ltime;
  printf("Yaskovich Dmitry (T01-01c). Exercise 6. Variant 4\n\n");              //Информация о программе
  printf("Enter interval and number A:\n");                                     //получение интервала и числа а
  scanf("%d %d %d",&d,&dd,&a);                                                  //создание последовательности рандом
  ltime=time(NULL);
  stime=(unsigned) ltime/2;
  srand(stime);
  if (((k-1)%6)==0)                                                             //задание настроек вывода цикла
	t=k/6;
  else
	t=k/6+1;
  for (i = 1; i <= (k-1); i++) {                                                //заполнение массива и вычисление сумм и количеств элементов
	e[i]=d+(int)((dd-d)*(rand() / (RAND_MAX + 1.0)));
	if (e[i]<a) {                                                               //индексы
	 sum+=e[i];
	 kv++;
	}
	q=&e[i];                                                                    //адресная арифметика
	if (*q<a) {
	  sum2+=*q;
	  kv2++;
	}
  }
  for (i = 1; i <= t; i++) {                                                    //вывод массива
	printf("-------------------------------------------\n");
	printf("Index: ");
	for (j = 1; j <= 6; j++) {
	  if ((j+(i-1)*6)<k)
		printf("%6d",j+(i-1)*6);
	}
	printf("\n");
	printf("Number:");
	for (j = 1; j <= 6; j++) {
	  if ((j+(i-1)*6)<k)
		printf("%6d",e[j+(i-1)*6]);
	}
	printf("\n");
  }
  printf("-------------------------------------------\n");
  if (kv>0) {                                                                   //среднее индексы
	av=1.0*sum/kv;
  printf("Average of elements less than A: %f\n",av);
  }
  else
  printf("Average of elements less than A: N/A\n");
  kv=0;
  for (i = 1; i <=k; i++) {                                                     //кол-во индексы
	if (e[i]<av) {
	  kv++;
	}
  }
  printf("Quantity of elements less than average: %d\n",kv);
  printf("\n");
   if (kv2>0) {                                                                 //среднее адресная арифметика
  av2=1.0*sum2/kv2;
  printf("Average of elements less than A: %f\n",av2);
  }
  else
  printf("Average of elements less than A: N/A\n");
  kv2=0;
  for (i = 1; i <=k; i++) {                                                     //кол-во адресная арифметика
	q=&e[i];
	if (*q<av) {
	  kv2++;
	}
  }
  printf("Quantity of elements less than average: %d\n",kv2);
  printf("\n");
  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}


