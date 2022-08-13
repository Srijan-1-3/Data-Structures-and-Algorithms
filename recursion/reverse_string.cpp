#include <iostream>

using namespace std;


string reverse_string(string str){

  if(str.length() < 2)
  return str;

  return str.substr(str.length()-1) + reverse_string(str.substr(0,str.length()-1));
}

int main(){

	string s;
	cout<<"Enter the string : ";
	cin>>s;

	cout<<"The reverse of the string is : "<<endl;
    cout<<reverse_string(s)<<endl;


    return 0;
}