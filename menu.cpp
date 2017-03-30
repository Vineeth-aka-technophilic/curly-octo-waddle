#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;

class menu {
private:
  int n,ptr,lmax;
  string opt[15],head;
public:
  menu (string a[15],int x,string header="")
  {
    cout<<setiosflags(ios::left);
    n=x;
    for(int i=0;i<n;i++)
    opt[i]=a[i];
    head=header;
    lmax=0;
    for(int i=0;i<n;i++)
    if(lmax<opt[i].length())
    lmax=opt[i].length();
    ptr=1;
  }

  void gui()
  {
    if(head!="")
    {
      cout<<"\t\t  "<<"________________________________________"<<endl;
      cout<<endl<<"\t\t  "<<setw((int)((40-head.length())/2))<<""<<head<<endl;
      cout<<"\t\t  "<<"________________________________________"<<endl;
    }
     cout<<endl<<"Enter your choice :-(Use arrow keys to navigate) "<<endl;

     for(int i=0;i<n;i++)
     {
       cout<<i+1<<setw(2)<<"."<<setw(lmax+5)<<opt[i];
       if((ptr-1)==i)
       {
         cout<<"<====";
       }
       cout<<endl;
     }

  }
  int build()
  {
    char ch='a';
    system("cls");
    gui();
    while((int)ch!=13)
		{ ch=getch();
      if((int)ch==13)
		  break;
      else if((int)ch<1)
      {
        ch=getch();
        if((int)ch==72)     //move arrow up
  		  { if(ptr==1)
  		    ptr=n;
  		    else
  		    ptr--;
  		  }
  		  if((int)ch==80)     //move arrow down
  		  { if(ptr==n)
  		    ptr=1;
  		    else
  		    ptr++;
  		  }
      }
      system("cls");
      gui();
    }
    return ptr;
  }

};

int main()
{
//  string t[]={"home","login","logout","exit"};
//  menu main_menu(t,4,"hello");
//  cout<<"Selected Option is :"<<main_menu.build();
  string t1[]={"eat","sleep","read","fap","repeat"};
  menu menu_atul(t1,5,"atul");
  menu_atul.build();
  return 0;
}
