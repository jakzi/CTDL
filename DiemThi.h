#include<iostream>
#include<string.h>
#define MAX_MAMH 15 
using namespace std;
//DANH SACH LIEN KET DON
//KHAI BAO
struct DiemThi{
	float diem;
	char MAMH[MAX_MAMH];
};

struct nodeDiemThi{
	DiemThi infoDiem;			
	struct nodeDiemThi *next;
};
typedef nodeDiemThi *PTRDiemThi;
//HAM



