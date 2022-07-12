#include<iostream>
#include<string.h>
#include "DiemThi.h" 

#define MAX_MASV 15
 

using namespace std;

//DANH SACH LIEN KET DON
//KHAI BAO
struct SinhVien{
	char MASV[MAX_MASV];		
	char HO[MAX_HO];
	char TEN[MAX_TEN];
	char PHAI[MAX_PHAI];
	char password[MAX_PASS];
	PTRDiemThi first=null;
};
struct nodeSV{
	SinhVien infoSV;
	struct nodeSV *next;
};
typedef nodeSV *PTRSV;
//HAM

