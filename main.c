#include <stdio.h>
#include <stdlib.h>
#include "work.h" 

int main()
{
	
	int n;
	printf("������ѧ��������");
	scanf("%d",&n);
	
	music();
	student a[n];
	sumandaverage b[5]; 
	
	student *p1=a;                //p1ָ��n��Ԫ�ص�student������׵�ַ�� 
	sumandaverage *p2=b;          //p2ָ��5��Ԫ�ص�sumandaverage������׵�ַ�� 
	onemoretime:	 
	printf("		����������������������������������������������������������������������������������\n");
	printf("\n");
	printf("		                        	 ѧ����Ϣ�����ѯϵͳ                            		\n");
	printf("\n");
	printf("		����������������������������������������������������������������������������������\n");
	printf("\n");
	Displaymenu();
	printf("Ϊ��֤�˵��ϵĹ��ܿ�������ʵ�֣�����ѡ����1¼����Ϣ��\n");

	int choose;
do
{
	 printf("Please enter your choice:(����-1�鿴�˵���)\n"); 
	 scanf("%d",&choose);
	 system("cls");
	 switch (choose)
	{
	 case -1:
	 	Displaymenu();
	 	break;
	 case 1:
		Readdate(p1,n);
	 	break;
	 case 2:
		 Sumandaverage2(a,b,n);
	 	break; 
	 case 3:
	 	Sumandaverage1(p1,n);
	 	break;
	 case 4:
	 	onlySumandaverage1(p1,n);
	 	Sort1(a,n);
	 	break;
	 case 5:
	 	onlySumandaverage1(p1,n);
	 	Sort2(a,n);
	 	break;
	 case 6:
	 	Sort3(a,n);
	 	break;
	 case 7:
	 	Sort4(a,n);
	 	break;
	 case 8:
	 	onlySort1(a,n);
	 	Numsearch(a,n);
	 	break;
	 case 9:
	 	onlySort1(a,n);
	 	Namesearch(a,n);
	 	break;
	 case 10:
	 	Percent(a,n);
	 	break;
	 case 11:
	 	Sumandaverage2(p1,p2,n); 
	 	Putdate1(p1,n);
	 	break;
	 case 12:
	 	onlySort1(a,n);
	 	onlySumandaverage1(a,n); 
	 	Writetofile(a,n);
	 	break;
	 case 13:
	 	Readfromfile(a,n);
	 	Puttxt(a,n);
	 	break;
	 case 521:
	 	printf("\n\n\n\n\n				�����İ���Ӧ�ó�Խ�����ĳ��ȣ�����Ŀ�ȣ�������ȣ�\n\n\n");
	 	printf("С��磬С�����Ը��Ҵ�ķָ�һ���𣿩�|��O��|�� �~~  ��|��O��|�� �~~\n\n\n\n\n\n\n\n\n\n\n");
		 break; 
	 case 888:
	 	printf("\n\n\n\n\n				������������Ŀ�ʼ����ô������Ϊ����һ����������׼����\n\n\n");
	 	printf("С��磬С�����Ը��Ҵ�ķָ�һ���𣿩�|��O��|�� �~~  ��|��O��|�� �~~\n\n\n\n\n\n\n\n\n\n\n");
		 break; 
	 default:
	 	printf("��Ǹ������ʧ���ˣ���û�иù��ܰ�(p�Rw�Qq) (p�Rw�Qq)\n");
	 	
	}
}while (choose!=0);
	if (choose==0)
	{
		printf("			`(*>�n<*)��`(*>�n<*)��`(*>�n<*)��`(*>�n<*)��`(*>�n<*)��`(*>�n<*)��\n\n\n");
		printf("			ȷ������ʹ�������𣿻����һ��и��๦�ܵȴ���ȥ�ھ�(��������)��(��������)��\n\n");
		printf("��Ϊ�ˣ����Ǳ�����˼�룬��������ڲ����������ϵͳ�Ĳ˵�����(�������)��(�������)\n\n");
		printf("������Ļǰ��С��磬С��㣬Ϊʲô������-1~13����Ĺ����أ�\n\n��һ��521����һ��888���������벻�����ջ�Ŷ��\n"); 
		printf("���롰1���������뿪��								���롰0��������һ�Σ�\n");
		int morechoose;
		scanf("%d",&morechoose);
		if (morechoose==1)
		{
			exit(-1);
		 }
		 if (morechoose==0)
		 goto onemoretime; 
	}
	 
	 
	system("pause");
	
	return 0;
}
