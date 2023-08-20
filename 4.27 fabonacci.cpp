//M - 1  run 

#include <bits/stdc++.h>
using namespace std;
int fab(int n)
{
    int t0 = 0, t1 = 1, s;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i < n; i++)
    {
        s = t0 + t1;

        t0 = t1;
        t1 = s;
      
    }
      return s;

   
}
int main()
{
    int n;
    cin>>n;
    cout << fab(n)<<endl;
}



// m-2 run

#include <bits/stdc++.h>
using namespace std;
int fab(int n)
{
    int t0 = 0, t1 = 1, s,i;
    if (n <= 1)
    {
        return n;
    }
    for ( i = 2; i <= n; i++)
    {
        s = t0 + t1;

        t0 = t1;
        t1 = s;
      
    }
  return s;

   
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
         cout << fab(i)<<endl;
}


//  M-3 run
#include <bits/stdc++.h>
using namespace std;
int fab(int n)
{
    int t0 = 0, t1 = 1, s;
    if (n <= 1)
    {
        return n;
    }
    return fab(n-2)+fab(n-1);

   
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
         cout << fab(i)<<endl;
}
