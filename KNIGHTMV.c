#include<stdio.h>
#include<string.h>


int main()
{
    int i,t,j,q, chess[8][8], queue[100];
    char arr[10];
char ch;
    scanf("%d",&t);

   while(t--)
    {
        for(i=0;i<=7;i++)
                {

                    for(j=0;j<=7;j++)
                    chess[i][j]=0;
                }
        i=0;q=0;j=0;
       ch =  getchar();
        scanf("%c",arr+i);
        while(*(arr+i)!='\n')
        {
            i++;
            scanf("%c",arr+i);
        }
        arr[i] ='\0';
       // printf("%s",arr);
        if(strlen(arr) == 5)
        {

        if((arr[0] <= 'h' && arr[0] >= 'a') &&   (arr[3] <= 'h' && arr[3] >= 'a') && (arr[1] <= '8' && arr[1] >= '1') && (arr[4] <= '8' && arr[4] >= '1') && arr[2] == '-')
        {

            queue[q++]=arr[0]-97;
            queue[q++] = arr[1]-49;
            chess[queue[0]][queue[1]] = 1;
           //printf("%d %d",queue[0],queue[1]);

                j = queue[--q];
                 i = queue[--q];
                 if(i-2 >=0 )
                 {
                     if(j+1<=7)
                     {
                         if(chess[i-2][j+1]==0)
                     {
                         chess[i-2][j+1]=1;
                     queue[q++] =i-2;
                     queue[q++] =j+1;
                     }
                     }


                     if(j-1>=0)
                     {if(chess[i-2][j-1]==0)
                     {
                         chess[i-2][j-1]=1;
                      queue[q++] =i-2;
                     queue[q++] =j-1;}
                     }


                 }
                 if(i+2 <=7 )
                 {
                     if(j+1<=7)
                     {
                         if(chess[i+2][j+1] ==0)
                         {
                         chess[i+2][j+1]=1;
                     queue[q++] =i+2;
                     queue[q++] =j+1;}
                     }

                     if(j-1>=0)
                     {
                         if(chess[i+2][j-1]==0)
                         {
                         chess[i+2][j-1]=1;
                      queue[q++] =i+2;
                     queue[q++] =j-1;}
                     }

                 }
                 if(j-2 >=0 )
                 {
                     if(i+1<=7)
                     {
                         if(chess[i+1][j-2]==0)
                         {chess[i+1][j-2]=1;
                     queue[q++] =i+1;
                     queue[q++] =j-2;}
                     }

                     if(i-1>=0)
                     {
                         if(chess[i-1][j-2] ==0)
                      {queue[q++] =i-1;
                     queue[q++] =j-2;
                     chess[i-1][j-2]=1;}}


                 }
                  if(j+2 <=7)
                 {
                     if(i+1<=7)
                     {if(chess[i+1][j+2]==0)
                     {
                         chess[i+1][j+2]=1;
                     queue[q++] =i+1;
                     queue[q++] =j+2;}
                     }

                     if(i-1>=0)
                     {
                         if(chess[i-1][j+2]==0)
                         {
                         chess[i-1][j+2]=1;
                      queue[q++] =i-1;
                     queue[q++] =j+2;}
                     }


                 }




            i=arr[3]-97;
            j = arr[4]-49;
            if(chess[i][j] ==1)
            printf("yes");
            else
            printf("no");

        }
        else printf("error");
        }
        else printf("error");
    }
}

