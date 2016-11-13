#include<stdio.h>


int main()
{
    int t,n,temp,small,count,zero=0,minus=-1;
    scanf("%d",&t);
    while(t--)
    {
        count =0;
        scanf("%d",&n);
         if((n >0 && n<4 ) || (n>4 && n<7))
         {
             printf("%d\n",minus);
            
        }
        else if(n==4)
        {printf("%d\n",zero);
            
        }

         else if(n%7 ==0)
        {
            printf("%d\n",n);
            
        }

        else
        {
           temp = n%7;
            small = n-temp;
            while(temp%4 !=0 && small >0)
            {
                temp = temp +7;
            small = small -7;
            }
            if(temp%4 == 0)
            {
                printf("%d\n",small);
            }
            else
            printf("%d\n",minus);
        }



            }
}
