/* �p������׹��-�i���m�ߧ@�~-�@�~8 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/13 24:00 */
/*��J�G 
5
7
0 1 1000
4 2 600
2 1 200
1 1 10000
0 2 400
2 2 100
0 2 300
*/
/*��X�G 
�C�W�U�Ȫ��s�ڦp�U�G
��1�W�U�ȡG�Ѿl�s�ڬ�300��
��2�W�U�ȡG�Ѿl�s�ڬ�10000��
��3�W�U�ȡG�Ѿl�s�ڬ�100��
��4�W�U�ȡG�Ѿl�s�ڬ�0��
��5�W�U�ȡG�Ѿl�s�ڬ�-600��
*/ 
#include<iostream> //�w�q��ܮw
#include <stdio.h> //�w�q��ܮw
int main()
{
    int N;//�N��N���U��
    int T;//�N��T�����
    int n, t, m; //�N���n�W�U�ȡA�s�کδ��ڤFm���A t=1�N��s�ڡAt=2�N���ڡC
    int money[105];//�w�q�}�C 
    int i;//�j���
	printf("�p������׹��-�i���m�ߧ@�~-�@�~8\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/04/13 24:00\n");
	printf("-----------------------------------\n");	
	printf("�п�J���X���U�ȡG"); 
    scanf("%d",&N);//��J���X���U�� 
    printf("�п�J���X������G"); 
    scanf("%d",&T);//��J���X�����
    
    i=0; 
    while( i<N )
    {
        money[i] = 0; //���Ҧ������O0 

        i = i+1;
    }

    //�s�کδ���
    printf("�п�J���X���U�ȡA�s���٬O���ڡA�s�کδ��ڤFm���G\n"); 
    i = 0;
    while( i<T )
    {
    scanf("%d%d%d",&n,&t,&m); //��Jn�N���n�W�U�ȡA�s�کδ��ڤFm���A t=1�N��s�ڡAt=2�N���ڡC 

        if( t==1 ) //t=1�N��s��
        {
            money[n] = money[n] + m;
        }
        if( t==2 ) //t=2�N����
        {
            money[n] = money[n] - m;
        }

        i = i+1;
    }
    printf("�C�W�U�Ȫ��s�ڦp�U�G\n"); 
    //��ܵ��� 
    i = 0;
    while( i<N )
    {
    	printf("��%d�W�U�ȡG�Ѿl�s�ڬ�%d��\n",i+1,money[i]); 
        i = i+1;
    }

    return 0; //�^�ǭ�0 
}
