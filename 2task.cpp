#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
  double x;
  double y;
    cout<<"Enter x and y for a dot:";
  cin>>x>>y;

  double lineEquation1 = -x+1;
  double lineEquation2 = x-1;
  double lineEquation3 = x+1;
  

  if ((x>=-1 &&  x>=0 && y<=1 && y>= lineEquation1) || (y<=1 && x<=1 && y>=0 && y>= lineEquation2) || (y<=-1 && x<=1 && y>=0 && y>= lineEquation3)  ){
    cout<< "All is good";
  }
  else{
    cout<< "All is not GOOD";
  }
  
}
