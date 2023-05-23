#include "C:\Users\ceniu\Documents\Arduino\Snake\BoardUtil.h"
#include "C:\Users\ceniu\Documents\Arduino\Snake\Direction.h"
#include "C:\Users\ceniu\Documents\Arduino\Snake\List.h"
#include "C:\Users\ceniu\Documents\Arduino\Snake\IO.h"

#define GetIndexFromXY(x, y) (x + y * BoardWidth)
#define SetDot(x, y, val) Board[x + y * BoardWidth] = val
#define GetDot(x, y) Board[x + y * BoardWidth]

constexpr int Empty = 0;
constexpr int Body = 1;
constexpr int Apple = 2;

int HeadX = 0;
int HeadY = 0;

List Snake;

Direction SnakeDirection;

int Board[BoardWidth * BoardHeight];

int AppleX;
int AppleY;

// Slow to update the board everytime but it is what it is
void UpdateBoard() {
  for (int i = 0; i < 16; i++) {
    Board[i] = 0;
  }

  for (int i = 0; i < Snake.GetCount(); i++) {
    Board[Snake[i]] = Body;
  }

  SetDot(AppleX, AppleY, Apple);
}

void setup() {
  UpdateBoard();
}

void loop() {
  int b1 = Button1();
  int b2 = Button2();
  


  UpdateBoard();
  DislayBoard();
}
