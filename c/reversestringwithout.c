#include<stdio.h>
#include<stdlib.h>

void main(){
int cnt=0,n,i;
char *a;
printf("how many letters in your string : ");
scanf("%d",&n);
a=(char *)malloc(n*sizeof(char));
printf("enter string : ");
scanf("%s",a);

while(*a!='\0'){
cnt++;
a++;
}
printf("cnt=%d\n",cnt);

   for(i=cnt;i>=0;i--)
   {
    printf("%c",*a);
    a--;
    }
}