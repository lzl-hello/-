# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "work.h"
//�������ܣ�����ѧ�ţ���������Ƴɼ��� 
void Readdate(student *p1,int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("��������������������������\n"); 
	printf("o(*^��^*)��������ѧ����Ϣ������������ѧ����ѧ�ţ��������������ߴ���Ӣ���̣������ɼ���\n");
	printf("				    ���磺111   ����   95    90    85    90    100\n"); 
	printf("��������������������������\n\n\n");
	int i;
	for (i=0;i<n;i++,p1++)
	{
		scanf("%ld%s%d%d%d%d%d"
			,&p1->num,&p1->name
			,&p1->fivegrades.calculus
			,&p1->fivegrades.linear
			,&p1->fivegrades.english
			,&p1->fivegrades.program
			,&p1->fivegrades.PE);
	}
}
//�������ܣ����ѧ�ţ���������Ƴɼ��� 
void Putdate1(student *p1,int n)
{
	printf("����������������������������������������\n"); 
	printf("o(*^��^*)����ÿ��ѧ����ѧ�ţ��������ɼ�\n");
	printf("����������������������������������������\n\n\n");
	printf("ѧ��	����	����	�ߴ�	Ӣ��	���	����\n");
	int i;
	for (i=0;i<n;i++,p1++)
	{
		
		printf("%ld",p1->num);
		printf("	%s",p1->name);
		printf("	%d",p1->fivegrades.calculus);
		printf("	%d",p1->fivegrades.linear);
		printf("	%d",p1->fivegrades.english);
		printf("	%d",p1->fivegrades.program);
		printf("	%d",p1->fivegrades.PE);
		printf("\n");
		
	}
}
//�������ܣ�����ÿ�ſγ̵��ֺܷ�ƽ���֣� 
void Sumandaverage2(student a[],sumandaverage b[],int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("������������������������������������\n"); 
	printf("o(*^��^*)����ÿ�ſε��ܳɼ���ƽ����\n");
	printf("������������������������������������\n\n\n");
	printf("�γ���		�ܷ�		ƽ����\n"); 
		int j;
		b[0].sum2=0;
		b[0].sum2=zongfen1(a,n);
		printf("����		%d",b[0].sum2);
		b[0].average2=(float)b[0].sum2/n;
		printf("		  %.2f",b[0].average2);
		printf("\n");
		
		
		
		b[1].sum2=0;
		b[1].sum2=zongfen2(a,n);
		printf("��ѧ		%d",b[1].sum2);
		b[1].average2=(float)b[1].sum2/n;
		printf("		  %.2f",b[1].average2);
		printf("\n");
		
	
		b[2].sum2=0;
		b[2].sum2=zongfen3(a,n);
		printf("Ӣ��		%d",b[2].sum2);
		b[2].average2=(float)b[2].sum2/n;
		printf("		  %.2f",b[2].average2);
		printf("\n");
		
		
	
		b[3].sum2=0;
		b[3].sum2=zongfen4(a,n);
		printf("C����		%d",b[3].sum2);
		b[3].average2=(float)b[3].sum2/n;
		printf("		  %.2f",b[3].average2);
		printf("\n");
		
		
		
		b[4].sum2=0;
		b[4].sum2=zongfen5(a,n);
		printf("����		%d",b[4].sum2);
		b[4].average2=(float)b[4].sum2/n;
		printf("		  %.2f",b[4].average2);
		printf("\n");
}

//�������ܣ�����ÿ��ѧ�����ֺܷ�ƽ���ֲ������ 
void Sumandaverage1(student *p1,int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("��������������������������������������\n"); 
	printf("o(*^��^*)����ÿ��ѧ�����ܳɼ���ƽ����\n");
	printf("��������������������������������������\n\n\n");
	printf("ѧ��		����		�ܷ�		ƽ����\n");
	int i;
	for (i=0;i<n;i++,p1++)
	{
		p1->sum1=p1->fivegrades.calculus
				+p1->fivegrades.linear
				+p1->fivegrades.english
				+p1->fivegrades.program
				+p1->fivegrades.PE;
		p1->average1=(float)p1->sum1/5;
		printf("%ld		%s		%d		%.2f\n",p1->num,p1->name,p1->sum1,p1->average1);
	} 
}
int zongfen1(student a[],int n)
{
	if(n==1)
	{
		return a[0].fivegrades.calculus;
	}
	else
	{
		return a[n-1].fivegrades.calculus+zongfen1(a,n-1);
	}
}
int zongfen2(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.linear;
	}
	else
	{
		return a[n-1].fivegrades.linear+zongfen2(a,n-1);
	}
}
int zongfen3(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.english;
	}
	else
	{
		return a[n-1].fivegrades.english+zongfen3(a,n-1);
	}
}
int zongfen4(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.program;
	}
	else
	{
		return a[n-1].fivegrades.program+zongfen4(a,n-1);
	}
}
int zongfen5(student a[],int n)
{
	
	if(n==1)
	{
		return a[0].fivegrades.PE;
	}
	else
	{
		return a[n-1].fivegrades.PE+zongfen5(a,n-1);
	}
}
//�������ܣ� �������㣬���ã��еȣ����񣬲������ѧ����������ռ�ٷֱȣ�
void Percent(student a[],int n)
{
	int exc=0,wel=0,med=0,pas=0,fai=0,j;
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("����������������������\n"); 
	printf("o(*^��^*)�����ɼ�ռ��\n");
	printf("����������������������\n\n\n");
	
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.calculus>=90 && a[j].fivegrades.calculus<=100)
			exc++;
			if(a[j].fivegrades.calculus>=80 && a[j].fivegrades.calculus<=89)
			wel++;
			if(a[j].fivegrades.calculus>=70 && a[j].fivegrades.calculus<=79)
			med++;
			if(a[j].fivegrades.calculus>=60 && a[j].fivegrades.calculus<=69)
			pas++;
			if(a[j].fivegrades.calculus>=0 && a[j].fivegrades.calculus<=59)
			fai++;
			
		}
		printf("�γ�	����	����	�е�	����	������\n");
		printf("calculus %d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.linear>=90 && a[j].fivegrades.linear<=100)
			exc++;
			if(a[j].fivegrades.linear>=80 && a[j].fivegrades.linear<=89)
			wel++;
			if(a[j].fivegrades.linear>=70 && a[j].fivegrades.linear<=79)
			med++;
			if(a[j].fivegrades.linear>=60 && a[j].fivegrades.linear<=69)
			pas++;
			if(a[j].fivegrades.linear>=0 && a[j].fivegrades.linear<=59)
			fai++;
			
		}
		printf("�γ�	����	����	�е�	����	������\n");
		printf("linear	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.english>=90 && a[j].fivegrades.english<=100)
			exc++;
			if(a[j].fivegrades.english>=80 && a[j].fivegrades.english<=89)
			wel++;
			if(a[j].fivegrades.english>=70 && a[j].fivegrades.english<=79)
			med++;
			if(a[j].fivegrades.english>=60 && a[j].fivegrades.english<=69)
			pas++;
			if(a[j].fivegrades.english>=0 && a[j].fivegrades.english<=59)
			fai++;
			
		}
		printf("�γ�	����	����	�е�	����	������\n");
		printf("english	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.program>=90 && a[j].fivegrades.program<=100)
			exc++;
			if(a[j].fivegrades.program>=80 && a[j].fivegrades.program<=89)
			wel++;
			if(a[j].fivegrades.program>=70 && a[j].fivegrades.program<=79)
			med++;
			if(a[j].fivegrades.program>=60 && a[j].fivegrades.program<=69)
			pas++;
			if(a[j].fivegrades.program>=0 && a[j].fivegrades.program<=59)
			fai++;
			
		}
		printf("�γ�	����	����	�е�	����	������\n");
		printf("program	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
		exc=0;wel=0;med=0;pas=0;fai=0;
		for (j=0;j<n;j++)
		{	
			
			if(a[j].fivegrades.PE>=90 && a[j].fivegrades.PE<=100)
			exc++;
			if(a[j].fivegrades.PE>=80 && a[j].fivegrades.PE<=89)
			wel++;
			if(a[j].fivegrades.PE>=70 && a[j].fivegrades.PE<=79)
			med++;
			if(a[j].fivegrades.PE>=60 && a[j].fivegrades.PE<=69)
			pas++;
			if(a[j].fivegrades.PE>=0 && a[j].fivegrades.PE<=59)
			fai++;
			
		}
		printf("�γ�	����	����	�е�	����	������\n");
		printf("PE	%d	%d	%d	%d	%d\n",exc,wel,med,pas,fai);
		printf("	%%%.2f	%%%.2f	%%%.2f	%%%.2f	%%%.2f\n",100*(float)exc/n,100*(float)wel/n,100*(float)med/n,100*(float)pas/n,100*(float)fai/n);
		
}
//�������ܣ����ÿ��ѧ����ѧ�ţ�������ÿ�ſεĳɼ����ܳɼ������ļ�score.txt�ϣ� 
void Writetofile(student a[],int n)
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("����������������������\n"); 
	printf("o(*^��^*)���������ļ�\n");
	printf("����������������������\n\n\n");
	FILE *fp;
	int k;
	fp=fopen("score.txt","w");
	if (fp==NULL)
	{
		printf("Failure to open score.txt!\n");
		exit(0);
	}
	
	for (k=0;k<n;k++)
	{
		fprintf(fp,"%ld	%s	%d	%d	%d	%d	%d	%d	%.2f\n",a[k].num,a[k].name,a[k].fivegrades.calculus,
																										a[k].fivegrades.linear,
																										a[k].fivegrades.english,
																										a[k].fivegrades.program,
																										a[k].fivegrades.PE,
																										a[k].sum1,
																										a[k].average1);
	}
	fclose(fp);
	printf("�����Ѷ�ȡ�������ļ��м��±��򿪲鿴����\n");
		
}
  
//�������ܣ����ļ�score.txt�ж�ȡÿ��ѧ����ѧ�ţ��������ܳɼ���ÿ�ſεĳɼ��� 
void Readfromfile(student a[],int n)
{
	int k;
	FILE *fp;
	fp=fopen("score.txt","r");
	if (fp==NULL)
	{
		printf("Failure to open score.txt!\n");
		exit(0);
	}
	
	for (k=0;k<n;k++)
	{
		fscanf(fp,"%ld	%s	%d	%d	%d	%d	%d	%d	%f\n",&a[k].num,a[k].name,&a[k].fivegrades.calculus,
																										&a[k].fivegrades.linear,
																										&a[k].fivegrades.english,
																										&a[k].fivegrades.program,
																										&a[k].fivegrades.PE,
																										&a[k].sum1,
																										&a[k].average1);
	}
	fclose(fp);
	
 } 
 //�������ܣ������ļ�score.txt�ж�ȡ�������������Ļ��
void Puttxt(student a[],int n) 
{
	printf("			��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("����������������������\n"); 
	printf("o(*^��^*)��������ļ�\n");
	printf("����������������������\n\n\n");
	int k;
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
//�������ܣ���ʾ�˵���
void Displaymenu()                                                         
{	
	system("color 70");
	printf("		    		��������������������������ӭʹ�á�����������������������\n\n\n");
	printf("����������������������\n"); 
	printf("o(*^��^*)�����˵��鿴\n");
	printf("����������������������\n\n\n");
	printf("		                    ------menu------                \n");
	printf("		1.Input record\n");
	printf("		2.Calculate total and average score of every course\n");
	printf("		3.Calculate total and average score of every student\n");
	printf("		4.Sort in descending order by total score of every student\n");
	printf("		5.Sort in ascending order by total score of every student\n");
	printf("		6.Sort in ascending order by number\n");
	printf("		7.Sort in dictionary order by name\n");
	printf("		8.Search by number\n");
	printf("		9.Search by name\n");
	printf("		10.Statistic analysis for every course\n");
	printf("		11.List record\n");
	printf("		12.Write to a file\n");
	printf("		13.Read from a file\n");
	printf("		0.Exit\n");
	
}

void music(void){
	mciSendString("open back2.mp3 alias bkmusic", NULL, 0, NULL);//�� 
 	mciSendString("play bkmusic repeat", NULL, 0, NULL);     //ѭ�� 
	
}
