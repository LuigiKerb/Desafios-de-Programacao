#include <iostream>

#include <string.h>

#include<bits/stdc++.h>

using namespace std;

int main() {
  string p1;
  string p2;

  cin >> p1;
  cin >> p2;

  int encontrou = 0;
  int pos[3];
  int j = 0;

  for (int i = 0; i < p2.size(); i++) {
    if (p2[i] == '*') {
      encontrou += 1;
      pos[j] = i;
      j += 1;
    }
  }

  if (encontrou != 0) {
    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());

    for (int i = 0; i < j; i++) {
      p2[i] = p1[i];
    }
    if (p1.compare(p2) == 0) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }
  } else {

    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());

    if (p1.compare(p2) == 0) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }
  }
}