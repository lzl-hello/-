# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "work.h"
//�������ܣ������ܷ�����ǰ�ļ��㣬������� 
void onlySumandaverage1(student *p1,int n)
{
	int i;
	
	for (i=0;i<n;i++,p1++)
	{
		p1->sum1=p1->fivegrades.calculus
				+p1->fivegrades.linear
				+p1->fivegrades.english
				+p1->fivegrades.program
				+p1->fivegrades.PE;
		p1->average1=(float)p1->sum1/5;
	}
}
//�������ܣ����ܷ��ɸߵ�������
void Sort1(student a[],int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("������������������������������\n"); 
	printf("o(*^��^*)�������ܳɼ���������\n");
	printf("������������������������������\n\n\n");
	int i,j,k;
	student temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i].sum1<a[j].sum1)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("ѧ��		����		�ܷ�\n"); 
	for (k=0;k<n;k++)
	{
		printf("%ld		%s		%d\n",a[k].num,a[k].name,a[k].sum1);
	}
} 
//�������ܣ����ܷ��ɵ͵�������
void Sort2(student a[],int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("������������������������������\n"); 
	printf("o(*^��^*)�������ܳɼ���������\n");
	printf("������������������������������\n\n\n");
	int i,j,k;
	student temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i].sum1>a[j].sum1)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("ѧ��		����		�ܷ�\n"); 
	for (k=0;k<n;k++)
	{
		printf("%ld		%s		%d\n",a[k].num,a[k].name,a[k].sum1);
	}
} 
//�������ܣ���ѧ����С��������
void Sort3(student a[],int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("������������������������������\n"); 
	printf("o(*^��^*)������ѧ����������\n");
	printf("������������������������������\n\n\n");
	int i,j,k;
	student temp;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i].num>a[j].num)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("ѧ��	����	����	�ߴ�	Ӣ��	���	����	�ܷ�	ƽ����\n");
	for (k=0;k<n;k++)
	{
		printf("%ld	%s	%d	%d	%d	%d	%d	%d	%.2f\n",a[k].num,a[k].name,a[k].fivegrades.calculus,
																										a[k].fivegrades.linear,
																										a[k].fivegrades.english,
																										a[k].fivegrades.program,
																										a[k].fivegrades.PE,
																										a[k].sum1,
																										a[k].average1);
	}
} 
//�������ܣ����������ֵ�˳������
void Sort4(student a[],int n)
{
	int i,j,k; 
	student temp;
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("������������������������������\n"); 
	printf("o(*^��^*)�����������ֵ�˳������\n");
	printf("������������������������������\n\n\n");
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (strcmp(a[i].name,a[j].name)>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("ѧ��	����	����	�ߴ�	Ӣ��	���	����	�ܷ�	ƽ����\n");
	for (k=0;k<n;k++)
	{
		printf("%ld	%s	%d	%d	%d	%d	%d	%d	%.2f\n",a[k].num,a[k].name,a[k].fivegrades.calculus,
																										a[k].fivegrades.linear,
																										a[k].fivegrades.english,
																										a[k].fivegrades.program,
																										a[k].fivegrades.PE,
																										a[k].sum1,
																										a[k].average1);
	}
	
 } 
