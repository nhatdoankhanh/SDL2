#include<bits/stdc++.h>

using namespace std;

char* weird_string() {
  char c[] = "12345";
  return c;
}

int main() {
  char* s = weird_string();
  for(int i = 0; i < int(sizeof(s) / sizeof(s[0])); i++)
  {
      cout << s[i];
  }

  return 0;
}
//Không nên trả về địa chỉ của biến cục bộ trong hàm.
//Chỉ trả về địa chỉ của vùng nhớ hợp lệ và đảm bảo vùng nhớ đó sẽ tồn tại khi sử dụng địa chỉ đó.
//Sử dụng con trỏ cẩn thận và giải phóng vùng nhớ khi không sử dụng để tránh rò rỉ bộ nhớ và lỗi truy cập vùng nhớ không hợp lệ.
