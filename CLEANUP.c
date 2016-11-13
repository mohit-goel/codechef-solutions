#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct mn* nodeptr;
void func(int num,int comp,nodeptr *list,nodeptr *ass ,nodeptr *chef,nodeptr *job );

typedef struct mn{
       int n;
       nodeptr next;
       }node;
main()
{    
     int t,i,j,num,comp,res=0;
     int job_comp;
     int x;
  nodeptr r;
     scanf("%d",&t);
     x =2*t;
        nodeptr result[t];
        for(i=0;i<2*t;i++)
        result[i] =NULL;
        
     while(t--)
     {
               nodeptr p ,list,ass,chef,job;
               list=NULL;
               ass =NULL;
               job =chef =NULL;
               scanf("%d",&num);
               scanf("%d",&comp);
               for(i=0;i<comp;i++)
              {    
                   scanf("%d",&job_comp);
                    p =(nodeptr)malloc(sizeof(node));
                    p->n=job_comp;
                   p->next =NULL; 
                   if(list==NULL)
                   list =p;
                   else{
                        p->next =list;
                        list =p;
                        }
              }
              for(i=num;i>0;i--)
              {    
                  
                    p =(node*)malloc(sizeof(node));
                    p->n =i;
                   p->next =NULL; 
                   if(job==NULL)
                   job =p;
                   else{
                        p->next =job;
                        job =p;
                        }
              }
              
                        
                            
               
               func(num,comp,&list,&ass,&chef,&job);
               result[res++]= chef;
               result[res++]=ass;
               }
     for(i=0;i<res;i++)
     {
                       r=result[i];
                       
                       for(;r!=NULL;r=r->next)
                       printf("%d ",r->n);
                       
                       printf("\n");
                       }
                       
               
               

	
  getch();
return 0;
}

void func(int num,int comp,nodeptr *list,nodeptr *ass ,nodeptr *chef,nodeptr *job )
{
     
     int i,flag;
      
           nodeptr p,q,r,rear,rear1,c;
           r=NULL;
      p= *job;
      
     for(;p!=NULL;)
     {flag =0;
     for(q= *list;q!=NULL;q=q->next)
     {
                        if(p->n ==q->n)
                        {
                                if(r ==NULL)
                                {
                                     *job = p->next;
                                     r=NULL;
                                     }
                                else 
                                {
                                     r->next =p->next;
                                     }
                                     c=p;
                                      p=p->next;
                                       free(c);
                                       c =NULL;
                                       flag =1;
                                     break;
                                     
                        }
     }
     if(flag ==0)
     {r=p;
     p=p->next;}
     }
                        
      p= *job;
      i=1;
     for(;p!=NULL;p=p->next)
     {  
                            
            if(i%2 ==0)
            {
                   q =(node*)malloc(sizeof(node));
                    q->n =p->n;
                   q->next =NULL; 
                   if(*ass==NULL)
                   *ass =q;
                   else{
                        rear->next =q;
                       
                        }
                        rear =q;
                        }
            else
            {
                q =(node*)malloc(sizeof(node));
                    q->n =p->n;
                   q->next =NULL; 
                   if(*chef==NULL)
                   *chef =q;
                   else{
                        rear1->next =q;
                        }
                        rear1 =q;
                        
            }
              i++;          
                    
                    }
                    }                              
                        
                      
                        
                        
                           
    
                       

