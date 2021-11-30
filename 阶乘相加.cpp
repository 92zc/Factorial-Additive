//求1!+2!+3!+4!+5!+6!+7!+8!+9!+10!的值                                  
                                                                     //改进：少一层循环，4!=3!*4  ret=ret*n
#include<stdio.h>                                                    //#include<stdio.h>
int main()                                                           //int main()
{                                                                    //{
	int i=0;                                                         //    int i=0; 
	int n=0;                                                         //    int n=0;
	int ret=1;                                                       //    int ret=1;
	int sum=0;                                                       //    int sum=0;
   for(n=1;n<=10;n++)        //该段是几个阶乘相加，又是一个循环      // for(n=1;n<=10;n++)
   {                                                                 // {
	   ret=1;                                                        //     
    	for(i=1;i<=n;i++)    //该段是求每个数的阶乘                  //       
		{                                                            //         
		    ret=ret*i;                                               //            ret=ret*n;
		}                                                            //         }
      sum=sum+ret;                                                   //  sum=sum+ret;
   }                                                                 // }

   printf("sum=%d\n",sum);                                           //   printf("sum=%d\n",sum);
   return 0;                                                         //   return 0;
}                                                                    //}



   
