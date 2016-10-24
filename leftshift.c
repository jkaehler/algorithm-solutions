/*Code by John Kaehler*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {//n is # of integers, k is # of shifts
    vector<int> temp(k);                    //create temp vector to store 1 2 3 4

    for(int i = 0; i < k; i++){             //loops 4 times
        temp[i] = a[i];                     //temp = 1 2 3 4
    }

    int difference = n-k;                   //difference = 1

    for(int i = 0; i < difference; i++){    //this should loop once
        a[i] = a[k+i];                      //ex: a[0] = a[3], a[1] = a[4]
    }                                       //now a[0] = 8, a[1] = 2, a[2] = 3, a[3] = 8, a[4] = 2

    for(int i = 0; i < k; i++){
        a[difference+i] = temp[i];
    }

    return a;
}

int main(){
    int n;
    int k;

    cout << "Please enter how many elements you'd like to be in the array" << endl;
    cin >> n;
    cout << "Please enter how many elements you'd like to left-shift" << endl;
    cin >> k;

    cout << "Now please enter the elements into the array, one by one" << endl;

    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];//ex: 1 2 3 4 5
        a[a_i] = a_i+1;
    }

    cout << "After shifting the array " << k << " times, here's what we've got..." << endl;
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";//output should be 5 1 2 3 4
    cout << endl;
    return 0;
}