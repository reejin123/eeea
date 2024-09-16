#include<stdio.h>
# define x 20
int sum(int y);
int main(void)
{
int y=55;
printf("sum:%d",sum(y));
return 0;
}
int sum(int y)
{
return y+x;
}
