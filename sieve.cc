#include <iostream>
const int len = 200;
int main() {
   int arr[200] = {0};
   for (int i = 2; i < 200; i++) {
      for (int j = i * i; j < 200; j+=i) {
         arr[j - 1] = 1;
      }
   }
   for (int i = 1; i < 200; i++) {
      if (arr[i - 1] == 0)
         std::cout << i << "\t";
   }
}
