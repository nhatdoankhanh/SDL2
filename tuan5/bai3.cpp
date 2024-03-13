#include<bits/stdc++.h>

using namespace std;

int main()
{
char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};
char daytab2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};

for(int i = 0; i < 2; i++){
    for(int j = 0; j < 12; j++)
    {
        cout << daytab1[i][j];
    }
    cout << endl;
}

cout << endl;

for(int i = 0; i < 2; i++){
    for(int j = 0; j < 12; j++)
    {
        cout << daytab2[i][j];
    }
    cout << endl;
}
cout << endl;

char daytab3[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30
};

for(int i = 0; i < 2; i++){
    for(int j = 0; j < 12; j++)
    {
        cout << daytab3[i][j];
    }
    cout << endl;
}
//char daytab4[][] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,
//  31,29,31,30,31,30,31,31,30,31,30,31
//};

//for(int i = 0; i < 2; i++){
//    for(int j = 0; j < 12; j++)
//    {
//        cout << daytab4[i][j];
//    }
//    cout << endl;
//}
//cout << end;

//char daytab5[2][] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,
//  31,29,31,30,31,30,31,31,30,31,30,31
//};

//for(int i = 0; i < 2; i++){
//    for(int j = 0; j < 12; j++)
//    {
//        cout << daytab5[i][j];
//    }
//    cout << endl;
//}
//cout << endl;

char daytab6[][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};

for(int i = 0; i < 2; i++){
    for(int j = 0; j < 12; j++)
    {
        cout << daytab6[i][j];
    }
    cout << endl;
}
cout << endl;







}
