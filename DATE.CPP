#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
#include<process.h>
class date
{
int dd,mm,yyyy;
char ch,dt[10];
public :
 void accept();
 int caze(char);
}d;
void date::accept()
 {
  cout<<"\n\n\n\t\t";
  cout<<"> DATE:  |  |    <";
  cout<<"\b\b\b\b\b\b\b\b\b\b\b";
  for(int i=0;i<=8;i++)
  { ch=0;
  if(i!=8)
   {
    while((caze(ch)==100)&&((int)ch!=8))    //validation
    ch=getch();
    cout<<ch;
   }
  else
   while(((int)ch!=13)&&((int)ch!=8))          //validation
   ch=getch();

   if((int)ch==13)
   return;

   if((int)ch!=8)
   {dt[i]=ch;
    if((i==1)||(i==3))
    cout<<"|";
    else if(i==7)
    cout<<"<";
   }
   else
   {
   if(i==0)
   break;
   i-=2;
   cout<<"\b \b";
   if((i==2)||(i==4)||(i==8))
   cout<<"\b\b \b";
   }
  }

  dd=caze(dt[0])*10+caze(dt[1]);
  mm=caze(dt[2])*10+caze(dt[3]);
  yyyy=caze(dt[4])*1000+caze(dt[5])*100+caze(dt[6])*10+caze(dt[7]);
  /*
  ch=getche();
  dd=10*caze(ch);
  ch=getche();
  dd+=caze(ch);
  cout<<"|";
  ch=getche();
  mm=10*caze(ch);
  ch=getche();
  mm+=caze(ch);
  cout<<"|";
  ch=getche();
  yyyy=1000*caze(ch);
  ch=getche();
  yyyy+=100*caze(ch);
  ch=getche();
  yyyy+=10*caze(ch);
  ch=getche();
  yyyy+=caze(ch);
  */
  cout<<"<\n\t\tThe date  is :"<<dd<<"|"<<mm<<"|"<<yyyy;
 }
int date::caze(char a)
 {
 switch(a)
 {
 case '1':return 1;

 case '2':return 2;

 case '3':return 3;

 case '4':return 4;

 case '5':return 5;

 case '6':return 6;

 case '7':return 7;

 case '8':return 8;

 case '9':return 9;
 case '0':return 0;
 default :return 100;
 }
}
void main()
{
clrscr();
d.accept();
getch();
}