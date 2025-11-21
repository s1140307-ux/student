#include <iostream>
using namespace std;
int main()
{
    cout<<"請輸入你的年齡: " << endl;
    int age;
    cin >> age;
    if (age >= 18) {
      cout<<"你已經滿18,可以喝酒 " << endl;   
    }
    if (age < 18){
        cout << "未成年,喝水就好" << endl;
    }

    return 0;
}