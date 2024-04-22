#include<iostream>

using namespace std;

int length(const char* a)
{
    int Count = 0;
    while(*(a + Count) != '\0')
    {
        Count++;
    }
    return Count;
}

char* Reverse(const char* a)
{
    int n = length(a);
    char* arr1 = new char[n + 1];
    int i = 0;
    while(i < n)
    {
        *(arr1 + i) = *(a + n - i - 1);
        i++;
    }
    arr1[i] = '\0';
    return arr1;
}

char* delete_char(const char* a, char c)
{
    int n = length(a);
    char* arr2 = new char[n + 1];
    int i = 0, j = 0;
    while(a + i < a + n)
    {
        if(*(a + i) != c)
        {
            *(arr2 + j) = *(a + i);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    arr2[j] = '\0';
    return arr2;
}

char* pad_rigth(const char* a, int n)
{
    int Size = length(a);
    int i = 0;
    char* arr3 = new char[n + 1];
    while(a + i < a + Size)
    {
        *(arr3 + i) = *(a + i);
        i++;
    }
    while(i < n)
    {
        *(arr3 + i) = ' ';
        i++;
    }
    *(arr3 + i) = '\0';
    return arr3;
}

char* pad_left(const char* a, int n)
{
    int Size = length(a);
    int i = 0;
    char* arr7 = new char[n + 1];
    if(Size >= n)
    {
        while(i < Size)
        {
            *(arr7 + i) = *(a + i);
            i++;
        }
        arr7[i] = '\0';
        return arr7;
    }
    else{
    while(i < n - Size)
    {
        *(arr7 + i) = ' ';
        i++;
    }
    while(i < n)
    {
        *(arr7 + i) = *(a + i + Size - n);
        i++;
    }
    *(arr7 + i) = '\0';
    }
    return arr7;

}

char* truncate(const char* a, int n)
{
    int Size = length(a);
    char* arr4 = new char[n + 1];
    if(Size < n)
    {
        int j = 0;
        while(j < Size)
        {
            *(arr4 + j) = *(a + j);
            j++;
        }
        *(arr4 + j) = '\0';
        return arr4;
     }

    int i = 0;
    while(i < n)
    {
        *(arr4 + i) = *(a + i);
        i++;
    }
    *(arr4 + i) = '\0';
    return  arr4;
}

bool is_palindrome(const char* a)
{
    int n = length(a);
    int i = 0;
    while(i < n / 2)
    {
        if(*(a + i) != !(a + n - i))
            return false;
    }
    return true;
}

char* trim_left(const char* a)
{
    int n = length(a);
    char* arr5 = new char[n + 1];
    int i = 0, d = 0;
    bool ch = true;
    while(ch == true)
    {
        if(*(a + i) != ' ')
        {
            ch = false;
            break;
        }
        i++;
    }
    while(i < n)
    {
        *(arr5 + d) = *(a + i);
        d++;
        i++;
    }
    arr5[d] = '\0';
    return arr5;
}

char* trim_right(const char* a)
{
    int n = length(a);
    char* arr6 = new char[n + 1];
    int i = n - 1, d = 0;
    bool ch = false;
    while(ch == false)
    {
        if(*(a + i) != ' ')
            {
                ch = true;
                break;
            }
        i--;
    }
    while(d <= i)
    {
        *(arr6 + d) = *(a + d);
        d++;
    }
    *(arr6 + d) = '\0';
    return arr6;
}



int main()
{
    const char* a = "    hellloo ccc world    ";
    char *arr = Reverse(a);
    cout << length(a) << endl;
    cout << arr << endl;
    delete arr;
    arr = pad_rigth(a, 30);
    cout << arr << endl;
    delete arr;
    arr = delete_char(a, 'c');
    cout << arr << endl;
    delete arr;
    arr = pad_left(a, 30);
    cout << arr << endl;
    delete arr;
    arr = truncate(a, 23);
    cout << arr << endl;
    delete arr;
    cout << is_palindrome(a) << endl;
    arr = trim_right(a);
    cout << arr << endl;
    delete arr;
    arr = trim_left(a);
    cout << arr << endl;
    delete arr;
}
