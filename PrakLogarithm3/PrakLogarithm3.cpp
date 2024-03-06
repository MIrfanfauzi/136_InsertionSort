
#include <iostream>
using namespace std;

int arr[11];
int i, n, j, temp;

void input() {
    while (true) {
        cout << " Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 11)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";

        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << " Data ke-" << (i + 1) << ": ";
        cin >> arr[i];

    }

}

void insertionSort() {
  
    

    for (i = 1; i <= n - 1; i++) //step 1
    { 
        temp = arr[i]; //step 2
        j = i - 1; //step 3
        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; //step 4b
        }
        arr[j + 1] = temp; //step 5

    }

}

void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersusun " << endl;
    cout << "===================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << "Jumalah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    insertionSort();
    display();
    system("pause");

    return 0;
}

