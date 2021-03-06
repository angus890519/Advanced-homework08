/* 計算機概論實務-進階練習作業-作業8 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/13 24:00 */
/*輸入： 
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
/*輸出： 
每名顧客的存款如下：
第1名顧客：剩餘存款為300元
第2名顧客：剩餘存款為10000元
第3名顧客：剩餘存款為100元
第4名顧客：剩餘存款為0元
第5名顧客：剩餘存款為-600元
*/ 
#include<iostream> //定義函示庫
#include <stdio.h> //定義函示庫
int main()
{
    int N;//代表有N個顧客
    int T;//代表有T筆交易
    int n, t, m; //代表第n名顧客，存款或提款了m元， t=1代表存款，t=2代表提款。
    int money[105];//定義陣列 
    int i;//迴圈用
	printf("計算機概論實務-進階練習作業-作業8\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/04/13 24:00\n");
	printf("-----------------------------------\n");	
	printf("請輸入有幾個顧客："); 
    scanf("%d",&N);//輸入有幾個顧客 
    printf("請輸入有幾筆交易："); 
    scanf("%d",&T);//輸入有幾筆交易
    
    i=0; 
    while( i<N )
    {
        money[i] = 0; //讓所有錢都是0 

        i = i+1;
    }

    //存款或提款
    printf("請輸入有幾個顧客，存款還是提款，存款或提款了m元：\n"); 
    i = 0;
    while( i<T )
    {
    scanf("%d%d%d",&n,&t,&m); //輸入n代表第n名顧客，存款或提款了m元， t=1代表存款，t=2代表提款。 

        if( t==1 ) //t=1代表存款
        {
            money[n] = money[n] + m;
        }
        if( t==2 ) //t=2代表提款
        {
            money[n] = money[n] - m;
        }

        i = i+1;
    }
    printf("每名顧客的存款如下：\n"); 
    //顯示答案 
    i = 0;
    while( i<N )
    {
    	printf("第%d名顧客：剩餘存款為%d元\n",i+1,money[i]); 
        i = i+1;
    }

    return 0; //回傳值0 
}
