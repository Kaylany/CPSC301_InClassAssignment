#include <iostream>

using namespace std;

int main() {
  int *ptr1;
  int *ptr2;

  ptr1 = new int;
  *ptr1 = 42;

  ptr2 = ptr1;

  cout << *ptr1 << " " << *ptr2 << endl;

  *ptr2 = 53;

  cout << *ptr1 << " " << *ptr2 << endl;

  ptr1 = new int; // make ptr1 point to new int variable
  *ptr1 = 88;
  cout << *ptr1 << " " << *ptr2 << endl;

  delete ptr1;
  delete ptr2;
  ptr1 = nullptr; // avoids crashes on double deletes
  ptr2 = nullptr;
}
