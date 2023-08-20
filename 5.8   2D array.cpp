#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,**A;
    A=new int*[3];
    cin>>n;

    // A[0]=new int[3];
    // A[1]=new int[3];
    // A[2]=new int[3]; 
        //  OR
    for (int i = 0; i <n; i++)
    {
        A[i]=new int[3];
       // cin>>A[i];   //   error ??    
      
    }
    

    for(int i=0;i<n;i++){
        for (int j = 0; j <n; j++)
        {
               cout<<A[0]<<" - ";
            /* code */
        }
        cout<<endl;
    }
    

}