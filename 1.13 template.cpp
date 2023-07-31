// // M - 1   error
// #include<bits/stdc++.h>
// using namespace std;
// template<class t>
// class arithmetics{
//      private
//         t a1;
//         t b1;
//      public
//        arithmetics(){a=b=1;}
//        arithmetics(t a, t b);
//        t add(t a,t b);
//        t multi(t a,t b);
//        void seta1(t a){a=a1;}
//        t geta1(){return a1;}   
// };
// template<class t>
// arithmetics<t>::arithmetics(t a,t b){
//      a1=a;
//      b1=b;
// }
// template<class t>
// t arithmetics<t>::add(t a,t b){
//     return a+b;  
// }

// template<class t>
// t arithmetics<t>::multi(t a,t b){
//     return a*b;
// }
// int main(){
//     arithmetics<int> r(10,20);
//     cout<<r.add()<<endl;
//     cout<<r.multi()<<endl;
//     r.seta1(50);
//     cout<<r.geta1()<<endl;
//     cout<<r.add()<<endl;
    

// }




// M - 2   run
#include<bits/stdc++.h>
using namespace std;
template<class t>
class arithmetics{
     private:
        t a1;
        t b1;
     public:
       arithmetics(){a1=b1=1;}
       arithmetics(t a, t b);
       t add();
       t multi();
       void seta1(t a){a1=a;}
       t geta1(){return a1;}   
};
template<class t>
arithmetics<t>::arithmetics(t a,t b){
    this->a1=a;
    this->b1=b;
}
template<class t>
t arithmetics<t>::add(){
    return a1+b1;  
}

template<class t>
t arithmetics<t>::multi(){
    return a1*b1;
}
int main(){
    arithmetics<int> r(10,20);
    cout<<r.add()<<endl;
    cout<<r.multi()<<endl;
    r.seta1(50);
    cout<<r.geta1()<<endl;
    cout<<r.add()<<endl;
    

}

