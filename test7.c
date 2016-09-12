#include<stdio.h>
int main()
{
char x;
scanf("%c",&x);
if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'))
{
printf("Vowel");
}
else if((x>='b'&& x<='z')||(x>='B'&& x<='Z'))
{
printf("Consonant");
}
else
{
printf("Not an alphabet");
}
return 0;
}
