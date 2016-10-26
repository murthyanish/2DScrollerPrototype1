#include<iostream.h>
#include<conio.h>
int i,j,s=0,p,m,d=0,map[5][30];
void disp()
{
for(i=0;i<5;i++)
{
for(m=0;m<2;m++)
{
for(j=p-3;j<p+3;j++)
{
if(map[i][j]==0)
cout<<"    ";
else if(map[i][j]==1)
cout<<"####";
else if(map[i][j]==3)
cout<<"@@@@";
else if(map[i][j]==2)
{
if(m==0)
{
if(d==0)
cout<<" @o ";
else
cout<<" o@ ";
}
else
{
cout<<"/";
for(i=0;i<2;i++)
{
if(d==1)
{
if(i<s)
cout<<"/";
else
cout<<"\\";
}
else
{
if(2-i<=s)
cout<<"\\";
else
cout<<"/";
}
}
cout<<"\\";
}
}
}
cout<<"\n";
}
}
}
void main()
{
clrscr();
int z=0;
long x=0,y=0,n;
char ch;
for(i=0;i<5;i++)
{
map[i][0]=3;
for(j=0;j<30;j++)
{
if(i==0)
map[i][j]=3;
else if(i<3)
map[i][j]=0;
else
map[i][j]=1;
}
}
map[2][3]=2;
p=3;
while(z==0)
{
if(kbhit())
{
ch=getch();
if(ch=='d')
{
s++;
if(s==3)
s=0;
d=0;
if(p<29)
{
p++;
map[2][p-1]=0;
map[2][p]=2;
}
}
if(ch=='a')
{
s--;
if(s<0)
s=2;
d=1;
if(p>0)
{
p--;
map[2][p+1]=0;
map[2][p]=2;
}
}
if(ch=='o')
z++;
}
for(n=0;n<300000;n++)
{
x++;y++;
x=y*x;
}
clrscr();
disp();
}
}