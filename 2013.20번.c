#include <stdio.h>
#include <stdlib.h>
int YY(int a);
int day(int a,int b);
  
int main(int argc, char *argv[])
{
    int a,b,c,d;
printf("�⵵�� �� �Է� : ");
scanf("%d%d",&a,&b);
c=YY(a);
d=day(a,b); 
if(c==1)printf("%d�� %d���� ���� �̰� %d�� �����ִ�\n",a,b,d); 
else printf("%d�� %d���� ���� �ƴϰ� %d�� �����ִ�\n",a,b,d); 
  system("PAUSE");	
  return 0;
}


int YY(int a)
{
 if(a%4==0)
 {
  if(a%100==0)
  {
   if(a%400==0)return 1;
   else return 0;
  }
  return 1;
 }
}

int day(int a,int b)
{int c;
 c=YY(a);
 if(b==2)
 {
  if(c==1)return 29;
  else return 28;
 }
 switch (b)
 { case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : return 31;break;
   case 4 : case 6 : case 9 : case 11 : return 30; break;
   default : return 0;
}
}
