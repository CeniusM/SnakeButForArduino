

constexpr int BoardWidth = 16;
constexpr int BoardHeight = 2;

int ClampInclusiv(int value, int min, int max)
{
  if (min > max)
    return value;

  if (value < min)
    value = min;
  else if (value > max)
    value = max;

  return value;
}

void ClampInclusivXY(int* x, int* y)
{
  *x = ClampInclusiv(*x, 0, BoardWidth);
  *y = ClampInclusiv(*y, 0, BoardHeight);
}

