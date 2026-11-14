#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc , char*argv[])
{
int m1,m2,m3,m4,m5,total;
char name[50];
float average;

if(argc!=7)
{
printf("Usage m1,m2,m3,m4,m5");
return 0;
}
strcpy(name,argv[1]);

m1=atoi(argv[2]);
m2=atoi(argv[3]);
m3=atoi(argv[4]);
m4=atoi(argv[5]);
m5=atoi(argv[6]);
total=m1+m2+m3+m4+m5;
average=total/0.5;
printf("\n>>>Student Report<<<");
printf("Student name :%s\n",name);
printf("Mark 1       :%s\n",m1);
printf("Mark 2       :%s\n",m2);
printf("Mark 3       :%s\n",m3);
printf("Mark 4       :%s\n",m4);
printf("Mark 5       :%s\n",m5);
printf("Total        :%d\n",total);
printf("Average      :%.2f\n",average);
if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("Result: Fail\n");
}
else
{
printf("Result: Pass\n");
if(average>=90)
printf("Grade A+\n");
else if(average>=80)
printf("Grade A\n");
else if(average>=70)
printf("Grade B");
else if(average>=60)
printf("Grade C");
else
printf("Grade D");
}
return 0;
}


