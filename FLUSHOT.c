#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct mn
{
        float value;
        int flag;
        }node;


float dis;
float min_dist(node pos[],int);
main()
{
float d;
int t,i,j=0;
int n;
float outpos[10000];
scanf("%d",&t);

while(t--)
{


          scanf("%d",&n);
          if(n<1 || n>10000)
          exit(1);
          node pos[n];
          scanf("%f",&dis);

           for(i=0;i<n;i++)
             {

                           scanf("%f",&(pos[i].value));
                           if((pos[i].value<0.0) || (pos[i].value>1000000.0))
                           {

                                             exit(1);
                                             }
                           pos[i].flag =0;
             }
          d=min_dist(pos,n);
          outpos[j++]= d;



          }
          for(i=0;i<j;i++)
           printf("%f \n",outpos[i]);



return 0;
}

float min_dist(node pos[],int n)
{
      int i,j,d,d1;
      float first,second,temp,tp;
      float dif,t1,t2;
      float max =0.0;
      for(i=0;i<n;i++)
      {
                   first =pos[i].value;
                   if((i+1 )<n)
                  second =pos[i+1].value;
                  else break;

                    dif =dis -(second-first);
                    if(dif <= 0)
                  continue;
                      t1=t2= dif/2;
                      if((first -t1)<0 )
                      {
                           t1 =  first;
                           t2 =dif -t1;
                           }
                           tp=first-t1;
                           if(i-1>=0){
                           if(tp-pos[i-1].value <dis)
                           {
                                 tp= dis+pos[i-1].value ;
                                 t1 =pos[i].value-tp;
                                 t2 =dif -t1;
                                 }}




                           if(pos[i].flag ==1)
                           {
                                          t1 =0;
                                          t2 =dif;}

                      pos[i].value=first -t1;
                      pos[i+1].value=second +t2;
                      pos[i].flag =1;
                      pos[i+1].flag =1;

                    if(t1 >t2)
                    temp= t1;
                    else temp =t2;
                    if(temp >max)
                    max =temp;



                      }
                      return max;
}

