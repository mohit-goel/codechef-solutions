#include<stdio.h>

typedef struct
{
        int play1;
        int play2;
        char w;
        int lead;
        }round;
main()
{
      int lead,i,max=0;
      int x,n;
      scanf("%d",&n);
      int k;
       round game[n];       
      for(i=0;i<n;i++)         
                      scanf("%d%d",&game[i].play1,&game[i].play2);
      for(i=0;i<n;i++)
      {
                      if(game[i].play1 > game[i].play2)
                      {
                                       game[i].lead = game[i].play1 - game[i].play2;
                                       game[i].w='1';
                      }
                      else
                      {
                            game[i].lead=game[i].play2 - game[i].play1;
                           game[i].w='2';
                          
                          
                      }
                      
                           if((game[i].lead)>max)
                           {
                                                 max=game[i].lead;
                                                 k =i;
                                                 }
                           
                           
                           
      }
      printf("%c%d",game[k].w,game[k].lead);  
      

      return 0;
 }
                                   
                           
                           
