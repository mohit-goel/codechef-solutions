#include<stdio.h>

int func(int num,int onum);
int sum,count,out;
int main()
{
int t,i,j,num,onum,res;

scanf("%d",&t);
while(t--)
{
     out=count=sum=0;
    scanf("%d",&num);
    onum = num;

    res = func(num,onum);
    if(res ==1)
    printf("%d\n",out);
    else printf("NONE\n");

}
}


int func(int num,int onum)
{
    int n,i,j,digit_sum=0,start,res,startdigitsum ;
    n=num;
    while(n!=0)
    {
        digit_sum += n%10;
        n = n/10;
    }
if(digit_sum  < sum)
    return 0;
    if(count ==0)
    {
        count++;
        sum=(num%10 + 1);
    }
    else sum+=10;
//printf("for count=%d, from number=%d , sum=%d \n",count,num,sum);


    start = num - num%10;
    startdigitsum = digit_sum - num%10;
    n = start -1;
//printf("for count=%d, from number=%d , start=%d \n",count,num,start);
    res = func(n,onum);
    if(res==1)
    return 1;


    j = start + startdigitsum;
    if(j>onum)
    return 0;
    j= onum - j;
    if(j>18 || (j%2==1))
    return 0;
    else{
        j = j/2;
        out = start +j;
        return 1;
    }
}
