// // M-1  error   not print answer

// #include <bits/stdc++.h>
// using namespace std;

// int fun(int x)
// {
//     return fun(x - 1) + x;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << fun(n);
// }






// M-2  run
#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    if (x > 0)
    {
        return fun(x - 1) + x;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n);
}



// M - 3     run
#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    static int t = 0;
    if (x > 0)
    {
        t++;
        cout << t << endl;
        return fun(x - 1) + x + t;
        // int sum=0;    sum is useless becouse have after return keyword
        // sum=sum+t;
        // cout<<"sum of t is : "<<sum;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << "fun=" << fun(n);
}