#include <stdio.h>                                                              //����������� ��������� ���������� ������� �����, ������ � ��������������  �������
#include <math.h>

int main(void){
  float m[41], min=6,av,sum=0,i;                                                //����������� ���������� � ������������ �� ����������� ��������
  short int n=0;
  printf("Yaskovich Dmitry (T01-01c). Lab 6. Variant 22\n\n");                  //���������� � ���������
  for (i = -14; i <=14; i+=0.7) {                                               //���� � ������� �������� �������� ��������� � ������ ���������� �������
	m[n]=5*cos(0.4*i);
	if (m[n]<min) {                                                             //����� ������������ ��������
	  min=m[n];
	}
	printf("No:%2d Element: %13.10f\n",n,m[n]);                            //����� ���������
	n=n+1;
  }
  for (i = 0; i <= 40; i+=2) {                                                   //���� ������� �����
	sum+=m[i];
  }
  av=sum/29;                                                                    //���������� ��������
  printf("\nMinimum:       %13.10f\n",min);                                     //����� �����������
  printf("Average:       %13.10f\n\n",av);
  printf("Dimini Inc.\n");                                                      //��������� �����
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //�������� ������� �� ������� ��� ���������� ���������
  getchar();
  return 0;
}
