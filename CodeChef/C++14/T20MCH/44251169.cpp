#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int r, o, c;
      cin >> r >> o >> c;
      if ((20 - o) * 6 * 6 > r - c) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
	return 0;
}
