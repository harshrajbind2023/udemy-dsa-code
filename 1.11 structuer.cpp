// M -1   error

// #include<bits/stdc++.h>
// using namespace std;
// struct reactangle
// {
//     int len;
//     int bre;
   
// };
// void initialize(struct reactangle *r,int l,int b){
//       r->len=l;
//       r->bre=b;
// }
// void display(struct reactangle r){
//     cout<< r->len;
//     cout<< r->bre;
// }

//  int main(){

//     struct reactangle r;
//     initialize(&r , 12 , 5);
//     display(r);

// }

    
// M - 2   error
// #include <stdio.h>

// struct reactangle
// {
//     int len;
//     int bre;
   
// };
// void initialize(struct reactangle *r,int l,int b){
//       r->len=l;
//       r->bre=b;
// }
// void display(struct reactangle r){
//   printf("%d", r.len);
//     printf(" %d", r.bre);

   
// }

//  int main(){

//     struct reactangle r;
//     r.initialize( 12 , 5);  //error
//     initialize(&r , 12 , 5); 
//     r.display();  // error 

// }







//   M-3
// Online C compiler to run C program online
#include <stdio.h>

struct reactangle
{
    int len;
    int bre;
   
};
void initialize(struct reactangle *r,int l,int b){
      r->len=l;
      r->bre=b;
}
void display(struct reactangle r){
  printf("%d", r.len);
    printf(" %d", r.bre);

   
}

 int main(){

    struct reactangle r;
    initialize(&r , 12 , 5);
    display(r);

}
