//��1!+2!+3!+4!+5!+6!+7!+8!+9!+10!��ֵ                                  
                                                                     //�Ľ�����һ��ѭ����4!=3!*4  ret=ret*n
#include<stdio.h>                                                    //#include<stdio.h>
int main()                                                           //int main()
{                                                                    //{
	int i=0;                                                         //    int i=0; 
	int n=0;                                                         //    int n=0;
	int ret=1;                                                       //    int ret=1;
	int sum=0;                                                       //    int sum=0;
   for(n=1;n<=10;n++)        //�ö��Ǽ����׳���ӣ�����һ��ѭ��      // for(n=1;n<=10;n++)
   {                                                                 // {
	   ret=1;                                                        //     
    	for(i=1;i<=n;i++)    //�ö�����ÿ�����Ľ׳�                  //       
		{                                                            //         
		    ret=ret*i;                                               //            ret=ret*n;
		}                                                            //         }
      sum=sum+ret;                                                   //  sum=sum+ret;
   }                                                                 // }

   printf("sum=%d\n",sum);                                           //   printf("sum=%d\n",sum);
   return 0;                                                         //   return 0;
}                                                                    //}



   
