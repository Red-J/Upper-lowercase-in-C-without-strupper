#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *LowercaseFunc(char *str){

int i=0;
for(i=0;i<=strlen(str);i++){
if(str[i]>=65&&str[i]<=90) // lowercase
str[i]=str[i]+32;}
return str;
}

char *UppercaseFunc(char *str){

int i=0;
for(i=0;i<=strlen(str);i++){
if(str[i]>=97&&str[i]<=122) //uppercase
str[i]=str[i]-32;
}

return str;
}

int main()
{char str1[25];
fgets(str1, 25, stdin);

UppercaseFunc(str1);
    printf("uppercased: %s\n",str1);
LowercaseFunc(str1);
   printf("lowercased: %s\n",str1);
    return 0;
}
