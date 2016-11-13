#include<stdio.h>

int main()
{
    int t,n,k,r,j,r_min,j_min,x,y,val,ans,rsum,jsum;
    scanf("%d",&t);
    int romio[100001];
    int julet[100001];
    while(t--)
    {
        for(x=0;x<100001;x++)
        {romio[x]=0;
        julet[x] =0;
            }

     scanf("%d",&n);
      scanf("%d",&k);
       scanf("%d",&r);
       for(x=0;x<r;x++)
       {
           scanf("%d",&val);
           romio[val-1]=1;
       }


        scanf("%d",&j);
         for(x=0;x<j;x++)
       {
           scanf("%d",&val);
           julet[val-1]=1;
       }
       ans =0;
        r_min =200000;
        j_min=200000;
        rsum =jsum=0;
          for(x=0;x<n;x++)
          {

              for(y=x;y<x+3;y++)
              {
                  rsum += romio[y];
                  jsum += julet[y];
              }
              if(rsum<r_min)
              {
                  ans =x+1;
                  r_min =rsum;
                  j_min =jsum;
              }
              else{


                 ans =x+1;
                  r_min =rsum;
                  j_min =jsum;


              }

       }
       printf("%d \n",ans);
    }
    return 0;
}
