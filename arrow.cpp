#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
  while(1)
  {

    char ch;
    ch=getch();
    system("cls");
    cout<<(int)ch<<endl;
    if((int)ch ==27)
    break;
    else
    ch=getch();
    cout<<(int)ch<<endl;
  }
  return 0;
}
//
// up   -72
// down -80
// right-77
// left -75
//
