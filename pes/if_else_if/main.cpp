#include <iostream>

using namespace std;

int main() {
  int num=0;

  while (num != 99) {
    cout << "Anna luku (1-4)" << endl;
    cin >> num;

    if (num == 1) {
      cout << "luku on yksi" << endl;
    } else if (num == 2) {
      cout << "luku on kaksi" << endl;
    } else if (num == 3) {
      cout << "lukun on kolme" << endl;
    } else if (num == 4) {
      cout << "lukun on nelja" << endl;
    } else {
      cout << "antamasi luku ei ollut 1-4" << endl;
    }
  }

  return 0;
}
