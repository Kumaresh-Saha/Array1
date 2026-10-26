#include<iostream>
using namespace std;
int main(){
   
    for(int i=1;i<=4;i++){
         int k=1;
        for(int j=1;j<=i;j++){
            
            cout<<k<<" ";
              k=k+2;
        }
      
        cout <<""<<endl;
    }
    return 0;
}