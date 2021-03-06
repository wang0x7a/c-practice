#include <iostream>

using namespace std;

int solve(int s, int d);

int main() {
  int s, d;

  while (cin >> s >> d) {
    int res = solve(s, d);

    if (res < 0)
      cout << "Deficit" << endl;
    else
      cout << res << endl;
  }
}

int solve(int s, int d) {
  int earning  = s * 5;

  int cnt = 0;
  while (earning > 0) {
    earning -= (s + d);
    cnt++;
  }

  int res;
  if (cnt < 4)
    res = earning * 2 + s * 2;
  else if (cnt == 4)
    res = earning * 2 + s - d;
  else
    res = earning - 2 * d;

  return res;
}
