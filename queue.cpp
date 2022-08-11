#include <iostream>
#include <string>
using namespace std;
int main(){

int total, time, i, j;
cin>>total>>time;
string s;
char temp;
cin>>s;


while(time--){
		for(i=0; i<s.length(); i++){
	if(s[i]=='B' && s[i+1]=='G'){
		swap(s[i],s[i+1]);
		i++;
	}
}
}
cout<<s<<endl;
}

