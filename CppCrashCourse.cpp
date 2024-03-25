
#include <iostream>
using namespace std;

int main()
{

    string username = "Kausa Changaya";

    cout << "Hello World! from \n";

    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    system("pause>0");

}

