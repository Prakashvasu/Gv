#include<studio.h>
void main() 
{
int num;
for(num=0;num<1000;num++)
{
printf("number:");
scanf("%d", &num);
if(num > 0)
{
printf("positive");
} 
if(num < 0)
{
printf("negative");
}
if(num == 0)
{
printf("zero");
}
return 0;
}
} 
