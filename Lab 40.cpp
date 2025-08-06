//File Name: Lab 40
//Author: Eng. Hana Hesham
//Version: 1
//purpose: program in C++ to find the sum of all elements of the array
//Date: 8/5


#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    int* arr = new int[num];  

    int sum = 0;

 
    cout << "Enter " << num << " elements in the array:\n";
    for (int i = 0; i < num; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
        sum += arr[i]; 
    }

 
    cout << "\nThe sum of the elements is : " << sum << endl;

    return 0;
}
