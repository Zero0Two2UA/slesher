#include <iostream>
using namespace std;



int f(int x){
cout << "int" << endl;
return x;
}
int f(double x){
cout << "double" << endl;
return x;
}






int main(){
int x =0;

f(static_cast<double>(x));






return 0;
}






   



