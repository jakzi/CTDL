#pragma once
#include<iostream>
#include<string.h>
#include "GiaoDien.h"
#include "XuLyDoHoa.h"

using namespace std;
void chayCT();
char * dangnhap() {
  int x = -1, y = -1;
  char nguoidung[30];
  char matkhau[30];
  memset(nguoidung, 0, 30);
  memset(matkhau, 0, 30);
  giaodiendangnhap();
  while (1) {
    delay(1);
    if (ismouseclick(WM_LBUTTONDOWN)) {
      getmouseclick(WM_LBUTTONDOWN, x, y);
      clearmouseclick(WM_LBUTTONDOWN);
    }
    if (x == -1 && y == -1) continue;
    int key = MID[x][y];
    trolaidn:
      switch (key) {
      case 1001: {
        ScannerMa(nguoidung, 13, 390, 175, key, key);
        goto trolaidn;
        break;
      }
      case 1002: {
        ScannerPass(matkhau, 13, 390, 215, key, key);
        goto trolaidn;
        break;
      }
      case 1003: {
        if (nguoidung[0] * matkhau[0] == 0) {
          x = y = -1;
          break;
        }
        if (strcmp(nguoidung, "GV") == 0 && strcmp(matkhau, "GV") == 0) {
          x = y= -1;
          return "GV";
          break;
        }
        x = y = -1;
        break;
      }
      }
  }
}
int thiTN(){
	int x = -1, y = -1,key = 0;
	nhapttthi();
  	while (1) {
	    delay(1);
	    if (ismouseclick(WM_LBUTTONDOWN)) {
	      getmouseclick(WM_LBUTTONDOWN, x, y);
	      clearmouseclick(WM_LBUTTONDOWN);
	    }
	    if (x == -1 && y == -1) continue;
	    int key = MID[x][y];
	    xuly4:
	      switch (key) {
	      case 1401: {
	
	        goto xuly4;
	        break;
	      }
	      case 1402: {
			
	        goto xuly4;
	        break;
	      }
	      case 1403: {
			
	        goto xuly4;
	        break;
	      }
	    default:{
			if(key==1||key==2||key==3||key==4||key==5||key==6)
			return key;
		  }
		}	
	}
}
int quanlilophoc(){
	int x = -1, y = -1,key = 0;
	giaodienlophoc();
  	while (1) {
	    delay(1);
	    if (ismouseclick(WM_LBUTTONDOWN)) {
	      getmouseclick(WM_LBUTTONDOWN, x, y);
	      clearmouseclick(WM_LBUTTONDOWN);
	    }
	    if (x == -1 && y == -1) continue;
	    int key = MID[x][y];
	    xuly4:
	      switch (key) {
	      case 1401: {
	
	        goto xuly4;
	        break;
	      }
	      case 1402: {
			
	        goto xuly4;
	        break;
	      }
	      case 1403: {
			
	        goto xuly4;
	        break;
	      }
	    default:{
			if(key==1||key==2||key==3||key==4||key==5||key==6)
			return key;
		  }
		}	
	}
}
int quanlisinhvien(){
	
}
int quanlicauhoi(){
	int x = -1, y = -1,key = 0;
	giaodiencauhoi();
  	while (1) {
	    delay(1);
	    if (ismouseclick(WM_LBUTTONDOWN)) {
	      getmouseclick(WM_LBUTTONDOWN, x, y);
	      clearmouseclick(WM_LBUTTONDOWN);
	    }
	    if (x == -1 && y == -1) continue;
	    int key = MID[x][y];
	    xuly4:
	      switch (key) {
	      case 1401: {
	
	        goto xuly4;
	        break;
	      }
	      case 1402: {
			
	        goto xuly4;
	        break;
	      }
	      case 1403: {
			
	        goto xuly4;
	        break;
	      }
	    default:{
			if(key==1||key==2||key==3||key==4||key==5||key==6)
			return key;
		  }
		}	
	}
}
int quanlimonhoc(){
	int x = -1, y = -1,key = 0;
	giaodienmonhoc();
  	while (1) {
	    delay(1);
	    if (ismouseclick(WM_LBUTTONDOWN)) {
	      getmouseclick(WM_LBUTTONDOWN, x, y);
	      clearmouseclick(WM_LBUTTONDOWN);
	    }
	    if (x == -1 && y == -1) continue;
	    int key = MID[x][y];
	    xuly4:
	      switch (key) {
	      case 1401: {
	
	        goto xuly4;
	        break;
	      }
	      case 1402: {
			
	        goto xuly4;
	        break;
	      }
	      case 1403: {
			
	        goto xuly4;
	        break;
	      }
	    default:{
			if(key==1||key==2||key==3||key==4||key==5||key==6)
			return key;
		  }
		}	
	}
}
void luufile(){
}
void runGV() {
  int x = -1, y = -1;
  while (1) {
    delay(1);
    if (ismouseclick(WM_LBUTTONDOWN)) {
      getmouseclick(WM_LBUTTONDOWN, x, y);
      clearmouseclick(WM_LBUTTONDOWN);
    }
    if (x == -1 && y == -1) continue;
    int key = MID[x][y];
    trolai:
      switch (key) {
      case 1: {
		key=quanlilophoc();
        goto trolai;
        break;
      }
      case 2: {
		key=quanlimonhoc();
        goto trolai;
        break;
      }
      case 3: {
		key=quanlicauhoi();
        goto trolai;
        break;
      }
      case 4: {
		key=thiTN();
        goto trolai;
        break;
      }
      case 5: {
		
        goto trolai;
        break;
      }
      case 6: {
        chayCT();
        break;
      }
      }
  }
}
void runSV() {}
void chayCT() {
  char * nguoidung = new char;
  strcpy(nguoidung, dangnhap());
  if (strncmp(nguoidung, "GV", 2) == 0) {
    cout << nguoidung << "\n";
    giaodiendau();

    runGV();
  }

}
