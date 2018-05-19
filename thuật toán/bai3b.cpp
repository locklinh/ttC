#include<iostream>
#include<cstring>
#define MAX 30
using namespace std;
void input(int a[][MAX], int &n, int &m) {
	cout << "Nhap vao so hang cua ma tran : "; cin >> n;
	cout << "Nhap vao so cot cua ma tran : "; cin >> m;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
		}
		cout << endl;
	}
}}
void display(int a[][MAX], int n, int m) {
	cout << endl;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<m; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}
void insert(int a[][MAX], int n, int m) {
	int b[MAX][MAX], index = 0, c[MAX];
	char choose[20];
	cout << "Ban muon chen vao (hang/cot) ? "; cin >> choose;
	if (strcmp(choose, "hang") == 0) {
		cout << "Nhap vao vector chen : " << endl;
		for (int i = 0; i<m; i++) {
			cout << "c[" << i << "] = "; cin >> c[i];
		}
		cout << "Nhap vao vi tri hang can chen : "; cin >> index;
		for (int i = n; i >= 0; i--) {
			for (int j = 0; j<m; j++) b[index][j] = c[j];
			if (i>index) {
				for (int j = 0; j<m; j++) b[i][j] = a[i - 1][j];
			}
			if (i<index) {
				for (int j = 0; j<m; j++) b[i][j] = a[i][j];
			}
		}
		display(b, n + 1, m);
	}
	if (strcmp(choose, "cot") == 0) {
		cout << "Nhap vao vector chen : " << endl;
		for (int i = 0; i<n; i++) {
			cout << "c[" << i << "] = "; cin >> c[i];
		}
		cout << "Nhap vao vi tri cot can chen : "; cin >> index;
		for (int i = m; i >= 0; i--) {
			for (int j = 0; j<n; j++) b[j][index] = c[j];
			if (i>index) {
				for (int j = 0; j<n; j++) b[j][i] = a[j][i - 1];
			}
			if (i<index) {
				for (int j = 0; j<n; j++) b[j][i] = a[j][i];
			}
		}
		display(b, n, m + 1);
	}
}
void dele(int a[][MAX], int n, int m) {
	char xoa[10]; int c = 0, h = 0;
	cout << "Ban muon xoa hang hay cot (hang/cot) : "; cin >> xoa;
	if (strcmp(xoa, "cot") == 0) {
		cout << "Nhap vao cot muon xoa : "; cin >> c;
		for (int i = 0; i<n; i++)
			for (int j = 0; j<m; j++) {
				if (j>c) a[i][j - 1] = a[i][j];
				else if (j<c) a[i][j] = a[i][j];
			}
		display(a, n, m - 1);
	}
	if (strcmp(xoa, "hang") == 0) {
		cout << "Nhap vao hang can xoa : "; cin >> h;
		for (int i = 0; i<n; i++)
			for (int j = 0; j<m; j++) {
				if (i>h) a[i - 1][j] = a[i][j];
				else if (i<h) a[i][j] = a[i][j];
			}
		display(a, n - 1, m);
	}
}
int main() {
	int a[MAX][MAX], n = 0, m = 0;
	input(a, n, m);
	display(a, n, m);
	insert(a, n, m);
	dele(a, n, m);
	system("pause");
	return 0;
}
