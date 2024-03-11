
// sign of Input/Output
// answe: ប្រឡេពីប៉ែតកែង

// sign of process
// answer: Rectangle

// sign of Condition
// answer: 11111111111111111111111                     
    //     11                   11
    //     11                   11
    //     11111111111111111111111

// sign of flow
// answer: --------------->



// Exercise :  S = 2 + 4 + ... + 2n 
// Algorithms
// 1. Start 
// 2. Input n
// 3. Set S = 0
// 4. Set i = 2
// 5. Repeat step 6 and 7 while i <= n 
// 6. Set S = S + i
// 7. Set i = i + 2
// 8. Print S
// 9. End


// Program
#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int S = 0;
    for(int i = 2; i <= n; i += 2) {
        S += i;
        cout << "i = " << i << " => S = " << S << endl;
    }
    return 0;
}


// Flowchart
// 1. Start
// 2. Input n
// 3. Set S = 0
// 4. Set i = 2
// 5. i <= n
// 6. S = S + i
// 7. i = i + 2
// 8. Print S
// 9. End


// Exercise S = 1 + 3 + ... + (2n + 1)
// Algorithms
// 1. Start
// 2. Input n
// 3. Set S = 0
// 4. Set i = 1
// 5. Repeat step 6 and 7 while i <= 2n + 1
// 6. Set S = S + i
// 7. Set i = i + 2
// 8. Print S
// 9. End


// Program
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     int S = 0;
//     for(int i = 1; i <= 2 * n + 1; i += 2) {
//         S += i;
//         cout << "i = " << i << " => S = " << S << endl;
//     }
//     return 0;
// }