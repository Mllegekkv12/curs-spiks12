#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;
const int InitialCount=100;
int Count,Num,Player;
bool Correct;
int main (){
  srand(time(0));
  system ("cls");
  Player=1;
  Count=InitialCount;
  do{
  
    if (Player==1){
    do{
        cout<<"Vash hod, na stole "<<Count<<" spichek.\n";
        cout<<"Skolko spichek vi berete?\n";
        cin>>Num;
        if(Num>=1&&Num<=10&&Num<=Count)
            Correct=true;
        else
        {
            cout<<"Ne Verno, davaite esho!\n";
            Correct=false;
        } 
    }
    while (!Correct);
   }
    else
    {
    do{
      Num=rand()%10+1;
      if (Num>Count)
        Num=Count;
      cout<<"moy hod > ya vzyal "<<Num<<" spichek\n";}
        while (!Correct);   
    }
    Count-=Num;
    if (Player==1) 
        Player=2;
    else 
        Player=1;
    }
  while (Count>0);
  if (Player=1)
    cout<<"You won!";
  else cout<<"You louse!";
return 0;
}
