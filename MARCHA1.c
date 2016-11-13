#include<stdio.h>

int main()
{

int test, n,m,res[21][20001],i,j,arr[21],p,q;
scanf("%d",&test);
while(test--)
{
    scanf("%d",&n);
    scanf("%d",&m);
arr[0] = 0 ;
    for(i=1;i<=n;i++)
    scanf("%d",arr+i);
    for(i=0;i<=m;i++)
    res[0][i] = 0;
     for(i=0;i<=n;i++)
    res[i][0] = 0;
    res[0][0] = 1;


    for(i=1;i<=n;i++)

     for(j=1;j<=m;j++)
    {  q=p=0;
        p = res[i-1][j];
        if(j-arr[i] >= 0)
        q =res[i-1][j-arr[i]];

        if(p || q)
        res[i][j] = 1;
        else res[i][j] = 0;




    }
    /*for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=m;j++)
        printf("%d",res[i][j]);
    }*/
if(res[n][m] ==1)
printf("YES ");
else
printf("NO  ");
}
}


