#include<stdio.h>
#include<math.h>
int convert(int d,char res[]);
int main()
{
int t,n,a,b,i,j,num_a,num_b,largest,n_a,n_b;
char arr_a[30];
char arr_b[30];
scanf("%d",&t);
while(t--)
{
    for(i=0;i<30;i++)
    {
        arr_a[i] = '0';
        arr_b[i] = '0';
        }

    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);

     num_a=convert(a,arr_a);
    num_b=convert(b,arr_b);
largest =0;
if(num_a + num_b <=n)
   {i =num_a + num_b;
       j=n-1;
        while(i>0)
        {
            largest = largest + 1*(int)pow(2,j);
            i--;
            j--;
        }
   }
    else{
        n_a = n-num_a;
        n_b = n-num_b;
        i = n_a + n_b;
        j=n-1;
        while(i>0)
        {
            largest = largest + 1*(int)pow(2,j);
            i--;
            j--;
        }
    }


   /* for(i=n;i>=0;i--)
    {

    printf("%c ",arr_a[i]);
    }
    printf("\n");
     for(i=n;i>=0;i--)
    {

    printf("%c ",arr_b[i]);
    }
    */
printf("%d ",largest);


}
}



  int convert(int d,char res[])
    { int num = 0;
        int po=1,count =0;
        while(po <=d)
        {
            po =po*2;
            count++;
        }
        count--;
        while(count >=0)
        {

            if(((int)pow(2,count)) <=d)
            {
                res[count] ='1';
                num++;
                d = d - (int)pow(2,count);
            }
            else
            {
                res[count]='0';
            }

            count--;
        }
        return num;
    }






