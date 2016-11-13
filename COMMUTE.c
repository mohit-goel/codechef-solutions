#include<stdio.h>
#include<stdlib.h>
int time =0;
int n;
int  schedule[1000][3];
void find_time(int s);

int main()
{
      int ans[n];
      int cnt=0;
      int t,i,j;
      int s=0;
      scanf("%d",&t);
      while(t--)
      {
                s =0;
                time =0;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                     for(j=0;j<3;j++)
                        scanf("%d",&schedule[i][j]);
                   find_time(s);
                   ans[cnt++] =time;

                }
      for(i=0;i<cnt;i++)
      printf("%d \n",ans[i]);




return 0;
}
void find_time(int s)
{
     if(s==n)
     return;
     int next_time =0;
     if(schedule[s][0] == time){
                       time = schedule[s][1] +time;


     }
    else  if( time <schedule[s][0] )
     time = schedule[s][0] + schedule[s][1];
      else
      {

          next_time =schedule[s][0] +schedule[s][2] ;
          while(time >next_time)
          next_time =schedule[s][0] +schedule[s][2] ;

          time = next_time;
           time = schedule[s][1] +time;

          }
         s++;
       find_time( s);
}


