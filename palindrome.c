#include<stdio.h>
int main()
{
    char s1[]="moinul islam";
   char s2[100];
   int i=0,len=0,j;
   while(s1[i]!='\0')
      {
          i++;
          len++;

      }
      for(j=0,i=len-1;i>=0;i--,j++)
      {
          s2[j]=s1[i];
      }
      s2[j]='\0';
 printf("given = %s\n",s1);
    printf("reverse = %s\n",s2);
    int d= strcmp(s1,s2);
    if(d==0)
        printf("string is palindrome\n");
    else
                printf("string is not palindrome\n");


    return 0;
}


