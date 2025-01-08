#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows, cols: ";
    cin >> rows >> cols;

    int **table = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        table[i] = new int [cols];
    }
    
    /* in de-allocation of memory the last allocated is deleted first
    and the first is deleted last*/
    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;

    return 0;
}