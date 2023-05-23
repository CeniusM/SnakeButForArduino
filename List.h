

class List {
public:
  void Add(int val);
  int GetCount();
  void Clear();

  int operator[](int);

private:
  int _capacity = 16;
  int _count = 0;
  int _arr[16]{ 0 };
};

int List::operator[](int index)
{
  return _arr[index];
}

void List::Add(int val) {
  if (_count != _capacity) {
    _arr[_count++] = val;
  }
}

int List::GetCount() {
  return _count;
}

void List::Clear() {
  for (int i = 0; _count > i; i++) {
    _arr[i] = 0;
  }
  _count = 0;
}