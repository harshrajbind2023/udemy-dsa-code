// M-1  run

#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0||n==1){
        return 1;
    }
    return fun(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
}


// M -2 run
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,fact=1;
    cin>>n;
     if(n==0||n==1){
        fact=1;
    }
    for (int i = 2; i <= n; i++)
    {
       fact=fact*i;
        /* code */
    }
    
    cout<<fact;
}