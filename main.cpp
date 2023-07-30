
#include <iostream>

using namespace std;


int main() {

//
//    int numbers[]{1, 2, 3, 4, 5};
//    // Traditional C style for loop
//    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
//        cout << numbers[i] << endl;
//
//    }

    cout << "--------------------- " << endl;

//    for (int number: numbers)
//        cout << number << endl;



    string name{"Aaron Janes"};

    for (char c: name) {
        cout << c << endl;
    };

    return 0;
}