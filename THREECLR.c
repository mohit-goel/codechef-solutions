#include<stdio.h>

int conflict[501][501];
int roundy[501][501];
int colm[501];
int pos[501];
int main()
{
      int t;
      int n,m, p1,p2,i,j,f,a,b,row,flag,k;
      scanf("%d",&t);
      while(t--)
      {        flag=0;
              for(i=0;i<501;i++)
              {
                                for(j=0;j<501;j++)
                                {
                                                  roundy[i][j]=0;                
                                                  conflict[i][j]=0;
                                }
              }
                for(i=0;i<501;i++)
                {
                                  colm[i]=0;
                                  pos[i]=0;
                }
                
             scanf("%d",&n);   
             scanf("%d",&m);
             for(i=1;i<=m;i++)
             {
                              scanf("%d",&p1);
                              scanf("%d",&p2);
                              conflict[p1][p2]=1;
                              conflict[p2][p1]=1;
                              }
                          row=1;
                   roundy[row][colm[row]] =1;
                   colm[row]++;           
                 for(i=2;i<=n;i++)
                 {
                                  for(j=1;j<=row;j++)
                                  {
                                                    for(k=0;k<colm[j];k++)
                                                    {
                                                                          flag =0;
                                                                          f =roundy[j][k];
                                                                          if(conflict[i][f] ==1)
                                                                          {
                                                                                          flag =1;  break;}
                                                                         
                                                    }
                                                       if(flag==0)                   
                                                        {                                                                          
                                                                          roundy[j][k] =i;
                                                                          colm[j]++;
                                                                          break;
                                                        }
                                                        
                                   }
                                   if(flag ==1)
                                       {
                                           roundy[++row][colm[row]++]=i;
                                           flag=0;
                                           }
                                       
                  }
                                    for(j=1;j<=row;j++)
                                         for(k=0;k<colm[j];k++)
                                               pos[roundy[j][k]]=j; 
                                               for(i=1;i<=n;i++)
                                               printf("%d ",pos[i]) ;
                                              
             } 
            
             return 0 ;
                                                                          
       }         
                                                                            
                         
                                 
                              
                                  
                                                                             
                              
      
