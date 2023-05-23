

class Direction {
public:
  int GetXOffset();
  int GetYOffset();

  void TurnRight();
  void TurnLeft();

private:
  int xOffset = 0;
  int yOffset = 0;

  // 0 = Right
  // 1 = Down
  // 2 = Left
  // 3 = Up
  int direction = 0;

  void UpdateOffsets();
};

int Direction::GetXOffset() {
  return xOffset;
}
int Direction::GetYOffset() {
  return yOffset;
}

void Direction::TurnRight() {
  direction++;
  if (direction == 4)
    direction = 0;
  UpdateOffsets();
}
void Direction::TurnLeft() {
  if (direction == 0)
    direction = 3;
  else
    direciton--;
  UpdateOffsets();
}

void Direction::UpdateOffsets() {
  if (direction == 0) {
    xOffset = 1;
    yOffset = 0;
  } else if (direction == 1) {
    xOffset = 0;
    yOffset = 1;
  } else if (direction == 2) {
    xOffset = -1;
    yOffset = 0;
  } else if (direction == 3) {
    xOffset = -1;
    yOffset = 0;
  }
}