#include<stdio.h>
#include<string.h>
void revstring(char string[])
{
    int i,k,store;
    int length=strlen(string);
    for(i=0,k=length-1;i<k;i++,k--)
    {
        store=string[i];
        string[i]=string[k];
        string[k]=store;
    }
}
int main()
{
    char string[100];
    char temp[100];
    printf("Enter the word in string :");
    scanf("%s",string);
    int length=strlen(string);
    int i=0;
    for(i=0;i<length;i++)
    {
        temp[i]=string[i];
    }
    temp[length]='\0';
    revstring(temp);
    if(strcmp(string,temp)==0)
    {
        printf("%s is pallindrome",string);
    }
    else
    {
        printf("%s is not pallindrome",string);
        
    }

}