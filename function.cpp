#include<iostream>

using namespace std;

void check(){
  cout<<" hi so it is executing among all of em "<<endl;
}
float cube(float x){
  return x*x*x;
}
void name_age(string name , int age){
   cout<<"so your name will be "<<name<<"and your age will be "<<age;

}
int main(){

   cout<<"Check the main fucntion ";
   check();
   name_age("saikat",21);
   cout<<cube(7.2)<<"is the ans";

   return 0;
}
