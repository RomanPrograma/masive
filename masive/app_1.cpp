#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "������ ���� ��� �����: ";
    cin >>number ;
    string result;
    string number_string;
     
    number_string = to_string(number);
    for (char digit : number_string) {
        if (digit != '3' && digit != '6') {
            result += digit;
        }
    }
    cout << "���������: " << result << endl;
 
    
    return 0;
}
