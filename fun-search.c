# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "work.h"
//�������ܣ���ѧ�Ų�ѯѧ���������俼�Գɼ���
void Numsearch(student a[],int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("����������������������\n"); 
	printf("o(*^��^*)����ѧ�Ų�ѯ\n");
	printf("����������������������\n\n\n");
	printf("����Ҫ��ѯ��ѧ����ѧ��\n");
	long int x;int i,flag=0;
	scanf("%ld",&x);
	for (i=0;i<n;i++)
	{
		if (a[i].num==x)
		{
			printf("ѧ��	����	�ɼ�	����\n");
			printf("%ld	%s	%d	%d\n",a[i].num,a[i].name,a[i].sum1,i+1);
			flag++;
			break; 
		}
	}
	if (flag==0)
	{
		printf("��Ǹ��û�и�ѧ����\n");
	}
}
 //�������ܣ���������ѯѧ�� �������俼�Գɼ��� 
 void Namesearch (student a[],int n)
 {
 	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("����������������������\n"); 
	printf("o(*^��^*)����������ѯ\n");
	printf("����������������������\n\n\n");
	printf("����Ҫ��ѯ��ѧ��������\n");
	char x[20];int i,flag=0;
	scanf("%s",x);
	for (i=0;i<n;i++)
	{
		if (strcmp(a[i].name,x)==0)
		{
			printf("ѧ��	����	�ɼ�	����\n");
			printf("%ld	%s	%d	%d\n",a[i].num,a[i].name,a[i].sum1,i+1);
			flag++;
			break; 
		}
	}
	if (flag==0)
	{
		printf("��Ǹ��û�и�ѧ����\n");
	}
 }
 
 
 
 //�������ܣ�ֻ�����ܷ��ɸߵ������򣬲���������ڲ�ѯǰ����
void onlySort1(student a[],int n)
{
	
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
}
