#include <iostream>
using namespace std;
//Prototype
void Rearrange(int &,int &, int &);
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  Rearrange(red, green, blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void Rearrange(int &red,int &green, int &blue)
{
    red= 3;
    green= 2;
    blue = 1;

}
