#include<bits/stdc++.h>
using namespace std;


class reactangle{
    private :
      int len;
      int bre;
    public:
        reactangle(){ len=bre=1;}
         reactangle(int l,int b);
         int area();
         int getlen(){return len;}
         void setlen(int l){len=l;}
         ~reactangle();
         void setbre(int b){bre=b;}
         int getbre(){return bre;}
};
 reactangle::reactangle(int l,int b){
    len=l;
    bre=b;
 }
int reactangle::area(){
    return len*bre;
}
// int reactangle::getlen(){
//   return len;
// }


reactangle::~reactangle(){}

int main(){
  reactangle r(20,10);
  cout<<r.area()<<endl;
  r.setlen(30);
  cout<<r.area()<<endl;
  cout<<r.getlen()<<endl;
   r.setbre(40);
   cout<<r.getbre();
   
}
