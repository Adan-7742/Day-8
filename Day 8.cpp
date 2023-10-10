// Day 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
//we will use swithch statement 
int week(int a) {
    //now here a is the expration here that we get from user and we comparing those with all the cases 

    switch (a) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day of week" << endl;
        break;
    }

    return 0;
}
// in this statement we can only pass int values if we pass a string we wil get erroer from compiler 


// now we see the use of ternary operator here we will discuss it ..............
// ternary operator are used for only if and else statement
// result = (condition) ? option1 :option2;     // ternary exprission

//example of ternary operator

int max_fun() {
    cout << "=======================================" << endl;
    int max{};

    int a{ 3 };
    int b{ 20 };
    // type must be same for if and else mean we cant use b as a string with int a

    max = (a > b) ? a : b;
    cout << "max = " << max << endl;

    return 0;
}
// now we will learn the use of for loop and i will write its examples here 

int loop() {
    cout << "=======================================" << endl;

    for (int i = 1;i <= 10;i++) {

        cout << "This is my first pogram here as a loop ." << endl;

    }
    return 0;
}
int loop_2() {



    // Find the prime numbers between 1 and 100
    vector<int> primes;

    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(i);
        }
    }

    cout << "The prime numbers between 1 and 100 are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
	int c;
	cout << "Enter a number" << endl;
	cin >> c;
	week(c);
    max_fun();
    loop();
    loop_2();
}


