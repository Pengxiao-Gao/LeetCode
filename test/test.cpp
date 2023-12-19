#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> v1 = {1, 3, 5, 7, 9, 12};
  vector<int> v2 = {1, 3, 9};
  vector<int> v3 = {1, 3, 5, 7};
  vector<int> v4 = {1, 3, 5, 7, 9, 12};

  int sum = accumulate(v1.begin(), v1.end(), 0);
  std::cout << 1 / 2 << std::endl;
  return 0;
}
