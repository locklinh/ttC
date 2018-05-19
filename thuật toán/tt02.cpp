#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int S[100];
	int top=-1;
	int n=0;
		cout<<"moi nhap vao so phan tu can chen :";
		cin>>n;
	for (int i=0;i<n;i++){
		int tg=0;
		cout<<"moi nhap vao phan tu can chen :";
		cin>>tg;
		//chan tung phan tu vao mang
		if(top==-1){
			S[0]=tg;//truong hop stack rong
			top=0;
		}
		else{
			//stack ko tong
			S[top+1]=tg;
			top=top+1;
			
		}
	}
	//in stack
	int const_top=top;
	
	cout<<"top <-- {";
	for(int i=top;i>=0;i--){
		cout<<S[i];
		// xu ly hinh thuc in ra
	if(i>0){
		cout<<";";
		
	}
	
	}
	cout <<"}";
	/*whlie (top>=0){
		cout<<S[top];
		if(top>0){
			cout<<";";
		}
		top--;
}
*/
//xoa phan tu
const_top=top;
tt:
cout<<"\nmoi nhap vao vi tri can xoa ";
int a;
cin>>a;
//kiem tra tinh hop le cua phan tu cna xoa
if (a>top||a<0){
	cout<<"vi tri can xoa ko hop le\n";
	goto tt;
  } else {
	// truong hop hop le
	if(a=top){
		top--;
	}
	else {
		int A[100];
		int j=0;
		while(top>a){
			A[j]=S[top];
			top--;
			j++;
			//cout<<"123"<<top;
	}
	for(int k=j-1;k>=0;k--){
			S[top]=A[k];
			top++;
		}
		top--;}
		//cout<<"5671"<<top;
	}
	

	
	
   

//stacksau khi xoa phan tu thu i
    cout<<"stack sau khi xoa phan tu thu " <<a<< "\n";
	cout<<"top <-- {";
	for(int a=top;a>=0;a--){
		cout<<S[a];
		// xu ly hinh thuc in ra
	if(a>0){
		cout<<";";
		
	}
	
	}
	cout <<"}";
		top = const_top;
	system("pause");
	return 0;
}
