#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<process.h>
void main()
{
 clrscr();
 int x=21,y=5;
 for(int i=5;i<=11;i++)
 {
   gotoxy(x,y);
   cout<<"|";
   y++;

 }
 x=23;
 y=5;
 for(int k=5;k<=11;k++)
 {
   gotoxy(x,y);
   cout<<"|";
   y++;

 }

 x=19;
 y=7;
 for(int j=19;j<=25;j++)
 {
   gotoxy(x,y);
   cout<<"-";
   x++;

 }

 x=19;
 y=9;

 for(int l=19;l<=25;l++)
 {
   gotoxy(x,y);
   cout<<"-";
   x++;

 }
x=20,y=6;
int abc=0;
int r=0,e=0;
int c=0,d=0;
int q=1;
int qu=1;
int coh,cov;
gotoxy(x,y);
char s[3][3];
again:
//abc=0;
char a=getch();
if(a=='a')
{

  if(x==24)
  {
   x=18;
   y+=2;

  }



  d++;
  if(d==3)
  {
   d=0;
   c++;
   //if(c<3)

   //else
  // c=0;
  }
  x+=2;
  //gotoxy(x,y);
  gotoxy(20,15);
  cout<<c<<d;
  gotoxy(x,y);
  if(x==24&&y==10)
  {
   x=18;
   y=6;



  if(c==2&&d==2)
  {
   c=-1;

  } }


  goto again;
  }
else
{
 cout<<a;
 s[c][d]=a;
 if(x==18&&y==6)
 {
  s[2][2]=a;

 }
 qu++;
 if(qu>=3)
 {
 if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][2]=='o'||s[1][0]==s[1][1]&&s[1][1]==s[1][2]&&s[1][2]=='o'||s[2][0]==s[2][1]&&s[2][1]==s[2][2]&&s[2][2]=='o'||s[0][0]==s[1][0]&&s[1][0]==s[2][0]&&s[2][0]=='o'||s[0][1]==s[1][1]&&s[1][1]==s[2][1]&&s[2][1]=='o'||s[0][2]==s[1][2]&&s[1][2]==s[2][2]&&s[2][2]=='o'||s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[2][2]=='o'||s[0][2]==s[1][1]&&s[1][1]==s[2][0]&&s[2][0]=='o')
  {  gotoxy(24,16);
  cout<<"Player Wins.";
  delay(1000);
  exit(1);

 }
 if(qu==6)
 {
  gotoxy(24,16);

  cout<<"Match Draw.";
  delay(1000);
  exit(1);
 }
 }
 ag:
 randomize();

 coh=random(25-19+1)+19;
 if(coh%2!=0)
 {
  goto ag;
 }
 ga:
 cov=random(11-5+1)+5;
 if(cov%2!=0)
 goto ga;

 aga:

 if(abc==0)
 {
   gotoxy(coh,cov);


 if(cov==6)
 {
    r=0;
    if(coh==20)
    {
     e=0;
    }
    if(coh==22)
    {
     e=1;
    }
    if(coh==24)
    {
     e=2;
    }

 }

 else if(cov==8)
 {
    r=1;
    if(coh==20)
    {
     e=0;
    }
    if(coh==22)
    {
     r=1;
    }
    if(coh==24)
    {
     e=2;
    }

 }

 else if(cov==10)
 {
    r=2;
    if(coh==20)
    {
     e=0;
    }
    if(coh==22)
    {
     e=1;
    }
    if(coh==24)
    {
     e=2;
    }

 }
 if(s[r][e]!='x'&&s[r][e]!='o')
  {
    s[r][e]='x';
    gotoxy(coh,cov);
    cout<<"x";
    q++;
    abc=1;
  }
 else
 {
  goto ag;
 }

 }
 else
 {
  if(abc==1)
  {
    if(s[0][0]=='x'&&s[0][1]=='x'&&s[0][2]!='x'&&s[0][2]!='o')
    {
      s[0][2]='x';
      gotoxy(24,6);
      cout<<"x";
      q++;

    }
    else if(s[0][0]=='x'&&s[0][2]=='x'&&s[0][1]!='x'&&s[0][1]!='o')
    {
      s[0][1]='x';
      gotoxy(22,6);
      cout<<"x";
      q++;

    }

    else if(s[0][1]=='x'&&s[0][2]=='x'&&s[0][0]!='x'&&s[0][0]!='o')
    {
      s[0][0]='x';
      gotoxy(20,6);
      cout<<"x";
      q++;

    }

     else if(s[1][0]=='x'&&s[1][1]=='x'&&s[1][2]!='x'&&s[1][2]!='o')
    {
      s[1][2]='x';
      gotoxy(24,8);
      cout<<"x";
      q++;

    }
    else if(s[1][0]=='x'&&s[1][2]=='x'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }

    else if(s[1][1]=='x'&&s[1][2]=='x'&&s[1][0]!='x'&&s[1][0]!='o')
    {
      s[1][0]='x';
      gotoxy(20,8);
      cout<<"x";
      q++;

    }

    else if(s[2][0]=='x'&&s[2][1]=='x'&&s[2][2]!='x'&&s[2][2]!='o')
    {
      s[2][2]='x';
      gotoxy(24,10);
      cout<<"x";
      q++;

    }
    else if(s[2][0]=='x'&&s[2][2]=='x'&&s[2][1]!='x'&&s[2][1]!='o')
    {
      s[2][1]='x';
      gotoxy(22,10);
      cout<<"x";
      q++;

    }

    else if(s[2][1]=='x'&&s[2][2]=='x'&&s[2][0]!='x'&&s[2][0]!='o')
    {
      s[2][0]='x';
      gotoxy(20,10);
      cout<<"x";
      q++;

    }
   else
   {
    abc=2;
   }
   }
  if(abc==2)
  {
    if(s[0][0]=='x'&&s[1][0]=='x'&&s[2][0]!='x'&&s[2][0]!='o')
    {
      s[2][0]='x';
      gotoxy(20,10);
      cout<<"x";
      q++;

    }
    else if(s[1][0]=='x'&&s[2][0]=='x'&&s[0][0]!='x'&&s[0][0]!='o')
    {
      s[0][0]='x';
      gotoxy(20,6);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='x'&&s[2][0]=='x'&&s[1][0]!='x'&&s[1][0]!='o')
    {
      s[1][0]='x';
      gotoxy(20,8);
      cout<<"x";
      q++;

    }

    else if(s[0][1]=='x'&&s[1][1]=='x'&&s[2][1]!='x'&&s[2][1]!='o')
    {
      s[2][1]='x';
      gotoxy(22,10);
      cout<<"x";
      q++;

    }
    else if(s[1][1]=='x'&&s[2][1]=='x'&&s[0][1]!='x'&&s[0][1]!='o')
    {
      s[0][1]='x';
      gotoxy(22,6);
      cout<<"x";
      q++;

    }

    else if(s[0][1]=='x'&&s[2][1]=='x'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }
    else if(s[0][2]=='x'&&s[1][2]=='x'&&s[2][2]!='x'&&s[2][2]!='o')
    {
      s[2][2]='x';
      gotoxy(24,10);
      cout<<"x";
      q++;

    }
    else if(s[1][2]=='x'&&s[2][2]=='x'&&s[0][2]!='x'&&s[0][2]!='o')
    {
      s[0][2]='x';
      gotoxy(24,6);
      cout<<"x";
      q++;

    }

    else if(s[0][2]=='x'&&s[2][2]=='x'&&s[1][2]!='x'&&s[1][2]!='o')
    {
      s[1][2]='x';
      gotoxy(24,8);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='x'&&s[1][1]=='x'&&s[2][2]!='x'&&s[2][2]!='o')
    {
      s[2][2]='x';
      gotoxy(24,10);
      cout<<"x";
      q++;

    }
    else if(s[1][1]=='x'&&s[2][2]=='x'&&s[0][0]!='x'&&s[0][0]!='o')
    {
      s[0][0]='x';
      gotoxy(20,6);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='x'&&s[2][2]=='x'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }
    else if(s[0][2]=='x'&&s[1][1]=='x'&&s[2][0]!='x'&&s[2][0]!='o')
    {
      s[2][0]='x';
      gotoxy(20,10);
      cout<<"x";
      q++;

    }
    else if(s[1][1]=='x'&&s[2][0]=='x'&&s[0][2]!='x'&&s[0][2]!='o')
    {
      s[0][2]='x';
      gotoxy(24,6);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='x'&&s[2][2]=='x'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }
   else
   {
    abc=3;
   }

   }
   if(abc==3)
  {
    if(s[0][0]=='o'&&s[0][1]=='o'&&s[0][2]!='o'&&s[0][2]!='x')
    {
      s[0][2]='x';
      gotoxy(24,6);
      cout<<"x";
      q++;

    }
    else if(s[0][0]=='o'&&s[0][2]=='o'&&s[0][1]!='x'&&s[0][1]!='o')
    {
      s[0][1]='x';
      gotoxy(22,6);
      cout<<"x";
      q++;

    }

    else if(s[0][1]=='o'&&s[0][2]=='o'&&s[0][0]!='x'&&s[0][0]!='o')
    {
      s[0][0]='x';
      gotoxy(20,6);
      cout<<"x";
      q++;

    }

    else if(s[1][0]=='o'&&s[1][1]=='o'&&s[1][2]!='x'&&s[1][2]!='o')
    {
      s[1][2]='x';
      gotoxy(24,8);
      cout<<"x";
      q++;

    }
    else if(s[1][0]=='o'&&s[1][2]=='o'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }

    else if(s[1][1]=='o'&&s[1][2]=='o'&&s[1][0]!='x'&&s[1][0]!='o')
    {
      s[1][0]='x';
      gotoxy(20,8);
      cout<<"x";
      q++;

    }

    else if(s[2][0]=='o'&&s[2][1]=='o'&&s[2][2]!='x'&&s[2][2]!='o')
    {
      s[2][2]='x';
      gotoxy(24,10);
      cout<<"x";
      q++;

    }
    else if(s[2][0]=='o'&&s[2][2]=='o'&&s[2][1]!='x'&&s[2][1]!='o')
    {
      s[2][1]='x';
      gotoxy(22,10);
      cout<<"x";
      q++;

    }

    else if(s[2][1]=='o'&&s[2][2]=='o'&&s[2][0]!='x'&&s[2][0]!='o')
    {
      s[2][0]='x';
      gotoxy(20,10);
      cout<<"x";
      q++;

    }
   else
   {
    abc=4;
   }
   }
  if(abc==4)
  {
    if(s[0][0]=='o'&&s[1][0]=='o'&&s[2][0]!='x'&&s[2][0]!='o')
    {
      s[2][0]='x';
      gotoxy(20,10);
      cout<<"x";
      q++;

    }
    else if(s[1][0]=='o'&&s[2][0]=='o'&&s[0][0]!='x'&&s[0][0]!='o')
    {
      s[0][0]='x';
      gotoxy(20,6);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='o'&&s[2][0]=='o'&&s[1][0]!='x'&&s[1][0]!='o')
    {
      s[1][0]='x';
      gotoxy(20,8);
      cout<<"x";
      q++;

    }

    else if(s[0][1]=='o'&&s[1][1]=='o'&&s[2][1]!='x'&&s[2][1]!='o')
    {
      s[2][1]='x';
      gotoxy(22,10);
      cout<<"x";
      q++;

    }
    else if(s[1][1]=='o'&&s[2][1]=='o'&&s[0][1]!='x'&&s[0][1]!='o')
    {
      s[0][1]='x';
      gotoxy(22,6);
      cout<<"x";
      q++;

    }

    else if(s[0][1]=='o'&&s[2][1]=='o'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }
    else if(s[0][2]=='o'&&s[1][2]=='o'&&s[2][2]!='x'&&s[2][2]!='o')
    {
      s[2][2]='x';
      gotoxy(24,10);
      cout<<"x";
      q++;

    }
    else if(s[1][2]=='o'&&s[2][2]=='o'&&s[0][2]!='x'&&s[0][2]!='o')
    {
      s[0][2]='x';
      gotoxy(24,6);
      cout<<"x";
      q++;

    }

    else if(s[0][2]=='o'&&s[2][2]=='o'&&s[1][2]!='x'&&s[1][2]!='o')
    {
      s[1][1]='x';
      gotoxy(24,8);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='o'&&s[1][1]=='o'&&s[2][2]!='x'&&s[2][2]!='o')
    {
      s[2][2]='x';
      gotoxy(24,10);
      cout<<"x";
      q++;

    }
    else if(s[1][1]=='o'&&s[2][2]=='o'&&s[0][0]!='x'&&s[0][0]!='o')
    {
      s[0][0]='x';
      gotoxy(20,6);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='o'&&s[2][2]=='o'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }
    else if(s[0][2]=='o'&&s[1][1]=='o'&&s[2][0]!='x'&&s[2][0]!='o')
    {
      s[2][0]='x';
      gotoxy(20,10);
      cout<<"x";
      q++;

    }
    else if(s[1][1]=='o'&&s[2][0]=='o'&&s[0][2]!='x'&&s[0][2]!='o')
    {
      s[0][2]='x';
      gotoxy(24,6);
      cout<<"x";
      q++;

    }

    else if(s[0][0]=='o'&&s[2][2]=='o'&&s[1][1]!='x'&&s[1][1]!='o')
    {
      s[1][1]='x';
      gotoxy(22,8);
      cout<<"x";
      q++;

    }
   else
   {
    abc=0;

   }


   }
   if(abc==0)
   {
    goto ag;
   }




 }
  if(q>=3)
  {
  if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][2]=='x'||s[1][0]==s[1][1]&&s[1][1]==s[1][2]&&s[1][2]=='x'||s[2][0]==s[2][1]&&s[2][1]==s[2][2]&&s[2][2]=='x'||s[0][0]==s[1][0]&&s[1][0]==s[2][0]&&s[2][0]=='x'||s[0][1]==s[1][1]&&s[1][1]==s[2][1]&&s[2][1]=='x'||s[0][2]==s[1][2]&&s[1][2]==s[2][2]&&s[2][2]=='x'||s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[2][2]=='x'||s[0][2]==s[1][1]&&s[1][1]==s[2][0]&&s[2][0]=='x')
  {  gotoxy(24,16);
  cout<<"Computer Wins.";
  delay(1000);
  exit(1);
  }
 }

 if(qu<=5)
 {
  goto again;
 }

}
gotoxy(30,12);
/*for(int lp=0;lp<=2;lp++)
{
 for(int pl=0;pl<=2;pl++)
 cout<<s[lp][pl];
 cout<<"\n";

} */
getch();

}