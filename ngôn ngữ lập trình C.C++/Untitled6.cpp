#include<iostream>
using namespace std;

int GiaiThua(int n);
int main(){
	int n;
	cout << " nhap n = ";
	cin >> n;
	cout << n<< "! =" <<GiaiThua(n) << endl;
	
	return 0;
}
int GiaiThua(int n){
	int gt=1;
	
	for(int i=1; i <n; i++){
		gt*=i;
	}
	return gt;
}
