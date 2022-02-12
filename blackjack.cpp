#include <iostream>
#include <time.h>
using namespace std;

int main(){

  string A[] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","King","Queen"};
  string B[] = {"Clubs","Diamonds","Hearts","Spades"};
  int V[] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
  int temp;
  while(true){
    
    string cnd;
    cout<<"Want to draw a Card? (yes/no) ";
    cin>>cnd;
    srand (time(NULL));
    int rA = rand() % 12;
    int rB = rand() % 4;
    int ace;
    int acefor;
    if(cnd=="yes"){ 
      cout<<"Your card is "<<A[rA]<<" of "<<B[rB]<<endl;
      temp += V[rA];
      if(V[rA]==1){
        ace = V[rA];
      }
    }
    else {
      if(ace == 1){
        cout<<"Ace for 1 or 11?"<<endl;
        cin>>acefor;
      }
      if(acefor == 11){
        temp += 10;
      }
      cout<<"You've scored "<< temp<<endl;
      break;
    }
  }
  
  int plus;
  for(int i=0;i<2;i++){
    int rA = rand() % 12;
    int rB = rand() % 4;
    cout<<"Computer Draws "<<A[rA]<<" of "<<B[rB]<<endl;
    plus += V[rA];
    if(plus<12 && V[rA]==1){
      plus += 10;
    }
  }
  for(int i=0;i<2;i++){
  if(plus<17){
    int rA = rand() % 12;
    int rB = rand() % 4;
    cout<<"Computer Draws "<<A[rA]<<" of "<<B[rB]<<endl;
    plus += V[rA];
    }
  }
  
  cout<<"Computer Scored: "<<plus<<endl;
  
  if(plus>temp){
    if(plus<22)
    {
      cout<<"Computer Wins!!!";
    }
    else if(temp<22){
      cout<<"You Win!!";
    }
  }
  if(plus<temp){
    if(temp<22)
    {
      cout<<"You Win!!!";
    }
    else if(plus<22){
      cout<<"Computer Wins!!";
    }
  }

  if(plus>22 && temp>22){
    cout<<"Both Lost";
  }
  else if(temp == plus ){
    cout<<"Draw!";
  }

}
