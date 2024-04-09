#include <iostream>

using namespace std;

int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}


void reverse(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; ++i) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

void delete_char(char a[], char c) {
    int length = strlen(a);
    int j = 0;
    for (int i = 0; i < length; ++i) {
        if (a[i] != c) {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
}

void pad_right(char a[], int n) {
    int length = strlen(a);
    if (length < n) {
        for (int i = length; i < n; ++i) {
            a[i] = ' ';
        }
        a[n] = '\0';
    }
}
void pad_left(char a[], int n) {
    int length = strlen(a);
    if (length < n) {
        for (int i = length; i < n; ++i) {
            for (int j = length; j > 0; --j) {
                a[j] = a[j - 1];
            }
            a[0] = ' ';
        }
        a[n] = '\0';
    }
}

void truncate(char a[], int n) {
    int length = strlen(a);
    if (length > n) {
        a[n] = '\0';
    }
}

bool is_palindrome(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; ++i) {
        if (a[i] != a[length - i - 1]) {
            return false;
        }
    }
    return true;
}
void trim_left(char a[]) {
    int length = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        ++i;
    }
    for (int j = 0; j <= length - i; ++j) {
        a[j] = a[i + j];
    }
}
void trim_right(char a[]) {
    int length = strlen(a);
    int i = length - 1;
    while (a[i] == ' ') {
        --i;
    }
    a[i + 1] = '\0';
}

int main() {
    char str[] = "hello world";
    reverse(str);
    cout << "Reverse: " << str << endl;

    delete_char(str, 'l');
    cout << "Delete 'l': " << str << endl;

    pad_right(str, 15);
    cout << "Pad right: " << str << endl;

    pad_left(str, 20);
    cout << "Pad left: " << str << endl;

    truncate(str, 5);
    cout << "Truncate: " << str << endl;

    char palindrome[] = "level";
    cout << "Is palindrome: " << boolalpha << is_palindrome(palindrome) << endl;

    char trimLeft[] = "   hello";
    trim_left(trimLeft);
    cout << "Trim left: " << trimLeft << endl;


    char trimRight[] = "world    ";
    trim_right(trimRight);
    cout << "Trim right: " << trimRight << endl;

    return 0;
}
/*Tất cả các câu trong bài này đều phải dùng con trỏ để xử lý mảng/xâu, KHÔNG dùng thư viện C++string, hay cstring, hãy tự viết lấy các hàm bạn cần sử dụng, chẳng hạn strlen, strcpy...
Viết các hàm sau đây, demo việc sử dụng chúng trong hàm main() của một chương trình.
Đảo xâu. Viết một hàm reverse(char a[]) với nhiệm vụ đảo ngược thứ tự của a).
Xóa kí tự. Viết hàm delete_char(char a[], char c) với nhiệm vụ xóa hết các kí tự c trong xâu a.
Độn phải. Viết hàm pad_right(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào cuối xâu a để a có độ dài bằng n. Nếu a đã dài quá n thì không phải làm gì cả.
Độn trái. Viết hàm pad_left(char a[], int n) với nhiệm vụ độn thêm các kí tự space vào đầu xâu a để a có độ dài bằng n. Nếu a đã dài quá n thì không phải làm gì cả.
Cắt xâu. Viết hàm truncate(char a[], int n) với nhiệm vụ cắt bớt đoạn cuối của xâu a để a có độ dài n nếu như a đang dài quá n kí tự.
Đối gương. Viết hàm bool is_palindrome(char a[]) với nhiệm vụ kiểm tra xem xâu a có đối xứng hay không. Trả về true nếu đối xứng, false nếu không.
Lọc trái. Viết hàm trim_left(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở đầu xâu a, nếu có.
Lọc phải. Viết hàm trim_right(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở cuối xâu a, nếu có.
*/
