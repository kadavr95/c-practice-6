#include <stdio.h>															  //подключение библиотек содержащих функции ввода, вывода и математических  функций
#include <math.h>
#include <stdlib.h>
#include <time.h>

const int k = 13;

int main(void){
  int d,dd,a,n,e[13],i,j,t,sum=0,kv=0;                                               //определение переменных и присваивание им необходимых значений
  float m,av;
  int stime;
  long int ltime;
  printf("Yaskovich Dmitry (T01-01c). Exercise 6. Variant 4\n\n");                  //Информация о программе
  printf("Enter interval and number A:\n");
  scanf("%d %d %d",&d,&dd,&a);
  ltime=time(NULL);
  stime=(unsigned) ltime/2;
  srand(stime);
  for (i = 1; i <= (k-1); i++) {
	e[i]=d+(int)((dd-d)*(rand() / (RAND_MAX + 1.0)));
	if (e[i]<a) {
	 sum+=e[i];
	 kv++;
	}
  }
  if (((k-1)%6)==0)
	t=k/6;
  else
	t=k/6+1;
  for (i = 1; i <= t; i++) {
	printf("-------------------------------------------\n");
	printf("Index: ");
	for (j = 1; j <= 6; j++) {
	  printf("%6d",j+(i-1)*6);
	}
	printf("\n");
	printf("Number:");
	for (j = 1; j <= 6; j++) {
	  printf("%6d",e[j+(i-1)*6]);
	}
	printf("\n");
  }
  printf("-------------------------------------------\n");
  if (kv>0) {
  av=sum/kv;
  printf("Average of elements less than A: %f\n",av);
  }
  else
  printf("Average of elements less than A: N/A\n");
  kv=0;
  for (i = 1; i <=k; i++) {
	if (e[i]<av) {
	  kv++;
	}
  }
  printf("Quantity of elements less than average: %d\n",kv);
  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}
