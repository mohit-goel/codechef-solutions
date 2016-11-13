#include<stdio.h>
void initialize(char *ch,int size);
void initialize1(int *ch,int size);
int main()
{
    int hash[27];
    char str[1001];
    int t,i,len,mid,unique_ch,flag;


    scanf("%d",&t);
    while(t--)
    {
        flag=1;
        initialize(str,1001);
        initialize1(hash,27);
        scanf("%s",str);
        unique_ch=i=0;
        len=strlen(str);
        if(len>=2)
        {
        //printf("%d",len);
        if(len%2==0)
        {
            mid=len/2;
            while(i<mid)
            {
                if(hash[str[i]-'a']==0)
                    unique_ch++;
                hash[str[i]-'a']++;
                i++;
            }

            i=mid;
            while(i<len)
            {
                if(hash[str[i]-'a']==0)
                    flag=0;
                else
                {
                    hash[str[i]-'a']--;
                    if(hash[str[i]-'a']==0)
                    unique_ch--;
                }
                i++;
            }
        }
        else
        {

            mid=len/2;
            while(i<mid)
            {
                if(hash[str[i]-'a']==0)
                    unique_ch++;
                hash[str[i]-'a']++;
                i++;
            }

            i=mid+1;
            while(i<len)
            {
                if(hash[str[i]-'a']==0)
                   {
                       flag=0;
                       break;
                   }
                else
                {
                    hash[str[i]-'a']--;
                    if(hash[str[i]-'a']==0)
                    unique_ch--;
                }
                i++;
            }
        }
        if(unique_ch!=0)
            flag=0;

        if(flag==1)
            printf("YES\n");
            else printf("NO\n");
        }
        else
            continue;
    }

}
void initialize(char *ch,int size)
{
    int i=0;
    for(i=0;i<size;i++)
        ch[i]=0;

}
void initialize1(int *ch,int size)
{
    int i=0;
    for(i=0;i<size;i++)
        ch[i]=0;

}
