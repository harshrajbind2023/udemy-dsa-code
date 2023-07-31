#include <bits/stdc++.h>
using namespace std;
int funA(int);
void funB(int t){
     if(t>0){
        cout<<"t of funB ="<<t<<endl;
      //  funA(t);
        t--;
     }
}

int funA(int x)
{
    if (x > 0)
    {
        cout<<"X of funA ="<<x<<endl;
        funB(x);
        funA(x-1);
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    funA(n); 
}
