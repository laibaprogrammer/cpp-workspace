# include <iostream>
using namespace std;
int main () {
int age;
cout<<"Enter your age:";
cin>>age;
if (age<=12) {
	cout<<"Your ticket is of child category:"<<endl;
	
}
	else if(age>=12) {
		cout<<"Your ticket is of adult category:"<<endl;
	}
	return 0;
	
	
	
	
}
