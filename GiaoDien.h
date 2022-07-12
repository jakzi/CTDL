#pragma once
#include <winbgim.h>

const int ENTER = 13;
const int BACKSPACE = 8;
const int H = 600;
const int W = 900;
short int MID[W][H];
/*list id
1001 o user
1002 o pass
1003 nut login
1
2
3
4
6 Thoat ra man hinh dang nhap
*/
//set toan bo mang ve 0(Mang dung de xac dinh chuc nang)
void khoitaoID() {
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++)
      MID[i][j] = 0;
  }
}
//set id cho mang hai chieu(Vung chon chuc nang thanh ID)
void taoID(int x1, int y1, int x2, int y2, int ID) {
  for (int i = x1; i < x2; i++) {
    for (int j = y1; j < y2; j++)
      MID[i][j] = ID;
  }
}
//Khung hinh chinh de lam viec
void khungChinh() {
  setbkcolor(11); // set background
  cleardevice();
  setfillstyle(1, 15); // man
  bar(2, 2, W - 2, H - 2);
  setcolor(0); //Doi mau ve Mau Den 
  rectangle(2, 2, W - 2, H - 2);
  rectangle(2, 2, 200, H - 2);
}
//Tao nut
void button(int x1, int y1, int x2, int y2, int ID, char * s, int cochu, int clbar, int clw) {
  setfillstyle(1, clbar);
  bar(x1, y1, x2, y2);
  setcolor(clw); //mau chu
  setbkcolor(clbar); //mau cua button
  settextstyle(0, 0, cochu);
  outtextxy(x1 + 10, y1 + 10, s);
  taoID(x1, y1, x2, y2, ID);
}
//Tao O^
void taoo(int x1, int y1, int x2, int y2, int ID, int mau, int mauvien) {
  setfillstyle(1, mau);
  bar(x1, y1, x2, y2);
  setcolor(mauvien);
  rectangle(x1, y1, x2, y2);
  taoID(x1, y1, x2, y2, ID);
}
//Giao dien chuc nang ben trai 
void giaodiendau() {
  khungChinh();
  button(5, 5, 195, 40, 1, "QL Lop", 2, 8, 15);//Id 1
  button(5, 45, 195, 80, 2, "QL Mon Hoc", 2, 8, 15);//Id 2
  button(5, 85, 195, 120, 3, "QL Cau Hoi", 2, 8, 15);//Id 3
  button(5, 125, 195, 160, 4, "THI TN", 2, 8, 15);//Id 4
  button(5, 165, 195, 200, 5, "LUU FILE", 2, 8, 15);//Id 5
  button(5, 205, 195, 240, 6, "LOGOUT", 2, 8, 15);//Id 0
}
//Giao dien sau chon chuc nang
void menuchon(int i){
	giaodiendau();
	if(i==1) button(5, 5, 195, 40, 1, "QL Lop", 2, 3, 0);//Id 1
	if(i==2) button(5, 45, 195, 80, 2, "QL Mon Hoc", 2, 3, 0);//Id 2
	if(i==3) button(5, 85, 195, 120, 3, "QL Cau Hoi", 2, 3, 0);//Id 3
	if(i==4) button(5, 125, 195, 160, 4, "THI TN", 2, 3, 0);//Id 4
}
//Dang nhap
void giaodiendangnhap() {
  setbkcolor(9); // set background
  cleardevice();
  settextstyle(0, 0, 3); //kieu chu
  outtextxy(275, 50, "THI TRAC NGHIEM");
  taoo(275, 150, 635, 320, 0, 9, 14); //vien ngoai
  settextstyle(0, 0, 2); //kieu chu
  outtextxy(295, 180, "USER:");
  taoo(385, 170, 615, 205, 1001, 15, 14); //o nhap user Id 1001
  outtextxy(295, 220, "PASS:");
  taoo(385, 210, 615, 245, 1002, 15, 14); //o nhap pass Id 1002
  button(400, 260, 520, 300, 1003, "LOGIN", 2, 14, 0);//id 1003
}
//
void giaodienlophoc(){
	menuchon(1);
}
//
void giaodienmonhoc(){
	menuchon(2);
}
//
void giaodiencauhoi(){
	menuchon(3);
}
//
void nhapttthi(){
  menuchon(4);
  outtextxy(205, 5, "CAU :");
  taoo(295, 5, 895, 40, 1401, 7, 4); //o nhap user Id 1001
  outtextxy(205, 45, "PHUT:");
  taoo(295, 45, 895, 80, 1402, 7, 4); //o nhap pass Id 1002
  button(205, 260, 520, 300, 1403, "THI", 2, 3, 4);//id 1003
}
