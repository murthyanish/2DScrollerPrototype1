#include<iostream.h>
#include<conio.h>
void main()
{
int z=0,a=1,i=0;
long w,x=1,y=1;
char ch;
clrscr();
cout<<" @o\n///\\";
while(z==0)
{
if(kbhit())
{
ch=getch();
clrscr();
if(ch=='d')
{
cout<<" @o\n/";
for(i=2;i>=0;i--)
{
if(i<=a)
cout<<"\\";
else
cout<<"/";
}
}
else if(ch=='a')
{
cout<<" o@\n";
for(i=0;i<3;i++)
{
if(i<=a)
cout<<"/";
else
cout<<"\\";
}
cout<<"\\";
}
else
z++;
a++;
if(a==3)
a=0;
}
for(w=0;w<300000;w++)
{
x++;y++;
x=y*x;
}
}
}