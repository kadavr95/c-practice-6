#include <stdio.h>															  //����������� ��������� ���������� ������� �����, ������ � ��������������  �������
#include <math.h>
#include <stdlib.h>

const int k = 13;

int main(void){
  int d,dd,a,n,e[13],i;                                               //����������� ���������� � ������������ �� ����������� ��������
  float m;
  printf("Yaskovich Dmitry (T01-01c). Exercise 6. Variant 4\n\n");                  //���������� � ���������
  printf("Enter interval and number A:\n");
  scanf("%d %d %d",&d,&dd,&a);
  for (i = 1; i <= (k-1); i++) {
	e[i]=d+(int)((dd-d)*(rand() / (RAND_MAX + 1.0)));
  }
  printf("--------------------------------\n");
  for (i = 1; i <= (k-1); i++) {

  }
  printf("Dimini Inc.\n");                                                      //��������� �����
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //�������� ������� �� ������� ��� ���������� ���������
  getchar();
  return 0;
}
