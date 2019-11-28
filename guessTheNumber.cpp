#include <iostream>
#include <cstdlib>
#include <ctime>
#define random(a,b) (rand()%(b-a)+a+1)
//使用宏定义来替换rand()函数
using namespace std;

int main() {
    srand((int)time(0));
    //初始化随机数，产生随机种子，这里的0也可以换成NULL
    int lower, higher, number;
    cout  <<  "Please input the lower limit"<<endl;
    cin >> lower;
    cout << "Please input the upper limit"<<endl;
    cin >> higher;

    int random_number = random(lower,higher);

    do{
        cout << "Please input the number you guessed:";
        cin >> number;
        if(random_number < number ){
            cout << "Your number is too large."<<endl;
        }
        else if(random_number > number){
            cout << "Your Number is too small."<<endl;
        }
        else{
            cout << "You got the right number!"<<endl;
        }
    }while (number != random_number);

    return 0;
}