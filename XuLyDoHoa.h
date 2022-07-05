#pragma once
#include <iostream>
#include <string.h>
#include <winbgim.h>
#include "GiaoDien.h"
using namespace std;
void ScannerMa(char s[], int max, int px, int py, int ID, int & IDnext) {
  setcolor(0);
  setbkcolor(15);
  settextstyle(1, 0, 1);
  int mx = -1;
  int my = -1;
  unsigned int l = strlen(s);
  s[l] = '|';
  s[l + 1] = 0;
  outtextxy(px, py, s);
  while (1) {
    getmouseclick(WM_LBUTTONDOWN, mx, my); //bat su kien chuot lay x,y
    clearmouseclick(WM_LBUTTONDOWN); // xoa bo nho dem click chuot
    delay(1); // bang -1 chua click
    if (!(((mx == -1) && (my == -1)) || (MID[my][mx] == ID))) {
      s[l] = ' ';
      s[l + 1] = 0;
      outtextxy(px, py, s);
      s[l] = '\0';
      break;
    }
    if (kbhit()) //bat phim [ bam phim rt true !!)
    {
      char c = getch();
      if (l < max) {

        if (c == '-') {
          s[l] = c;
          l++;
          s[l] = 0;
        }
        if (c >= 'A' && c <= 'Z') {
          s[l] = c;
          l++;
          s[l] = 0;
        }
        if (c >= 'a' && c <= 'z') {
          c = c + 'A' - 'a';
          s[l] = c;
          l++;
          s[l] = 0;
          //	continue;
        }

        if (c >= '0' && c <= '9') {
          s[l] = c;
          l++;
          s[l] = 0;
        }
        outtextxy(px, py, s);
      }
      if (c == ENTER) { //hoan thanh nhap
        s[l] = ' ';
        s[l + 1] = 0;
        outtextxy(px, py, s);
        s[l] = '\0';
        break;
      }
      if (c == BACKSPACE && l > 0) // xoa ki tu 
      {
        s[l] = ' ';
        s[l + 1] = 0;
        outtextxy(px, py, s);
        s[l - 1] = ' ';
        l--;
      }
      s[l] = '|';
      s[l + 1] = ' ';
      s[l + 2] = ' ';
      s[l + 3] = 0;
      outtextxy(px, py, s);
      if (s[l] == ' ') s[l] = 0;

    }
  }
  if ((mx != -1) && (my != -1)) {
    IDnext = MID[mx][my];
  }
}

int ScannerPass(char s[], int max, int px, int py, int ID, int & IDnext) {
  setcolor(0);
  setbkcolor(15);
  settextstyle(1, 0, 1);

  char pass[100] = "";

  int mx = -1;
  int my = -1;
  unsigned int l = strlen(s);
  for (int i = 0; i < l; i++) {
    pass[i] = '*';
  }
  s[l] = '|';
  pass[l] = '|';
  s[l + 1] = 0;
  pass[l + 1] = 0;
  outtextxy(px, py, s);
  outtextxy(px, py, pass);
  while (1) {
    getmouseclick(WM_LBUTTONDOWN, mx, my);
    clearmouseclick(WM_LBUTTONDOWN);
    delay(1);
    if (!(((mx == -1) && (my == -1)) || (MID[my][mx] == ID))) {

      s[l] = ' ';
      s[l + 1] = 0;
      pass[l] = ' ';
      pass[l + 1] = 0;
      outtextxy(px, py, s);
      outtextxy(px, py, pass);
      s[l] = '\0';
      pass[l] = 0;
      break;
    }
    if (kbhit()) {
      char c = getch();
      if (l < max) {
        if (c >= 'A' && c <= 'Z') {
          s[l] = c;
          s[l + 1] = 0;
          outtextxy(px, py, s);
          pass[l] = '*';
          pass[l + 1] = 0;
          outtextxy(px, py, pass);
          l++;
        }
        if (c >= 'a' && c <= 'z') {
          s[l] = c;
          s[l + 1] = 0;
          outtextxy(px, py, s);
          pass[l] = '*';
          pass[l + 1] = 0;
          outtextxy(px, py, pass);
          l++;
        }
        if (c >= '0' && c <= '9') {
          s[l] = c;
          s[l + 1] = 0;
          outtextxy(px, py, s);
          pass[l] = '*';
          pass[l + 1] = 0;
          outtextxy(px, py, pass);
          l++;
        }
      }
      if (c == ENTER) {
        s[l] = ' ';
        s[l + 1] = 0;
        outtextxy(px, py, s);
        s[l] = '\0';
        pass[l] = ' ';
        pass[l + 1] = 0;
        outtextxy(px, py, pass);
        pass[l] = '\0';
        break;
      }
      if (c == BACKSPACE && l > 0) {
        s[l] = ' ';
        s[l + 1] = 0;
        outtextxy(px, py, s);
        s[l - 1] = ' ';
        pass[l] = ' ';
        pass[l + 1] = 0;
        outtextxy(px, py, pass);
        pass[l - 1] = ' ';
        l--;
      }
      s[l] = '|';
      s[l + 1] = ' ';
      s[l + 2] = 0;
      outtextxy(px, py, s);
      if (s[l] == ' ') s[l] = '\0';
      pass[l] = '|';
      pass[l + 1] = ' ';
      pass[l + 2] = ' ';
      pass[l + 3] = 0;
      outtextxy(px, py, pass);
      if (pass[l] == ' ') pass[l] = '\0';
    }
  }
  if ((mx != -1) && (my != -1))
    IDnext = MID[mx][my];
}
