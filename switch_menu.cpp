# include <iostream>
using namespace std;
int main() {
	int choice;
	cout<<"1.Withdraw\n2.checkbalance\n3.deposit\n:";
	cout<<"Apni choice enter krein(1-3):";
	cin>>choice;
	switch (choice) {
	
	case 1:
		cout<<"Ap ny Withdraw Select krliya h:"<<endl;
		break;
	case 2:
		cout<<"Ap ka balance check ho rha h:"<<endl;
		break;
	case 3:
		cout<<"Ap ny cash deposit kra li h:"<<endl;
		break;
		default:
		cout<<"Invalid! Meherbani farma kr darusat option select krein!:"<<endl;
		return 0;
}
	
}
