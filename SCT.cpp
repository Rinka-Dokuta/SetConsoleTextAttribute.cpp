#include<iostream>
#include<Windows.h>
using namespace std;
#

void TextColor(int val); //prototype

int main() {
    int num;
    cout << "Please type a number between 1-15" << endl;
    cin >> num;
    TextColor(num);
    cout << "HELLO!" << endl;
}


void TextColor(int val) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), val);
}
