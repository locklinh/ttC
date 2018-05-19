#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct phone_entry {
	char name[20];
	char address[32];
	long home;
	long mobile;
	
};
struct phone_book{
	struct phone_entry* entries [100];
	int home;
	
};
typedef struct phone_entry PHONEENTRY;
typedef struct phone_book BOOK;
int main()
{
	BOOK pb;
	printf("\n %5s %10s %20s %10s %10s","STT","Ten","DiaChi","DTNha","DTMobile");
	printf("\nNhap vao so luong danh ba:"); scanf("%d",&pb.home);
	for(int i=1;i<=pb.home;i++){
	pb.entries[i]=(PHONEENTRY*)malloc(sizeof(PHONEENTRY));	
	printf("\nTen entry(%d):",i);fflush(stdin); gets(pb.entries[i]->name);
	printf("\nDia chi %s:",pb.entries[i]->name); fflush(stdin);gets(pb.entries[i]->address);
	
}
for(int i=1;i<=pb.home;i++){
	printf("\n %-10s %-10s",pb.entries[i]->name,pb.entries[i]->address);
}

	return 0;
}
