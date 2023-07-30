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
};
 reactangle::reactangle(int l,int b){
    len=l;
    bre=b;
 }
int reactangle::area(){
    return len;
}
int reactangle::getlen(){
  return len;
}

int main(){
   
}
