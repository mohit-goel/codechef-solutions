#include<stdio.h>
#include<math.h>
void inc(int *j,int k,int n);
int isprime(int n);
int isprime(int n)
{
    int i;
     int m=(int)sqrt(n);
   if (n<=1) return 0;
   if (n==2) return 1;
   if (n%2==0) return 0;

   for ( i=3; i<=m; i+=2)
      if (n%i==0)
         return 0;

   return 1;
}
int main()
{
    int t,n,i,j,k,start,count=0,res,temp=1,m;
char arr[10001];
    scanf("%d",&t);

    while(t--)
    {
        for(i=0;i<10001;i++)
       arr[i]='0';
        res =1;
        count =0;
         scanf("%d",&n);
         if(isprime(n))
         {
             res = n-1;

             }
       else{
            for(k=2;k<n;k++)
        {temp=0; m=k;
            if(n%k ==0)
            {
                temp =temp+ k;
                while( temp <=n)
                {
                    arr[temp] ='1';
                    temp = temp+m;

                }

            }
         else  if(arr[k] == '1')
            continue;


         else{
            res++;
         }
            //printf("\n");
        }
       }
        printf("%d\n",res);
    }
    return 0;
}

void inc(int *j,int k,int n)
{
    if(*j +k <=n)
    *j = *j +k;

    else{
        k = k - (n-*j);

        *j = k;

    }
}


