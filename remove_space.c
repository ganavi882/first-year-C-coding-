#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char str[80];
int i=0, len, j;
printf("Enter the String : ");
gets(str);
len=strlen(str);
for(i=0; i<len; i++)
{
if(str[i]==' ')
{
for(j=i; j<len; j++)
{
str[j]=str[j+1];
}
len--;
}
}
printf("String after removing spaces = %s", str);
getch();
}

   
  
      
  
      
       
            

