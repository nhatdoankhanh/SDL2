#include<bits/stdc++.h>

using namespace std;

int soLan(char* str1,char* str2) {
    int Count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i <= len2 - len1; ++i) {
        if (strncmp(str1, str2 + i, len1) == 0) {
            ++Count;
        }
    }
    return Count;
}

int main() {
  char* s1 = "dadaadaad";
  char* s2 = "asdaadaaddadaadaad";
  cout << soLan(s1, s2);

  return 0;
}
