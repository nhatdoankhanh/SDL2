#include <iostream>
#include <string>
#include <vector>

using namespace std;

string oneToNineteen[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                          "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                          "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string convertToWords(int n) {
    if (n == 0) {
        return "zero";
    }
    if (n < 0) {
        return "negative " + convertToWords(-n);
    }

    if (n < 20) {
        return oneToNineteen[n];
    } else if (n < 100) {
        return tens[n / 10] + (n % 10 ? " " + oneToNineteen[n % 10] : "");
    } else if (n < 1000) {
        return oneToNineteen[n / 100] + " hundred" + (n % 100 ? " " + convertToWords(n % 100) : "");
    } else if (n < 1000000) {
        return convertToWords(n / 1000) + " thousand" + (n % 1000 ? " " + convertToWords(n % 1000) : "");
    } else {
        return convertToWords(n / 1000000) + " million" + (n % 1000000 ? " " + convertToWords(n % 1000000) : "");
    }
}

int main() {
    int number;
    cin >> number;

    cout << "Number in English: " << convertToWords(number) << endl;
    return 0;
}
