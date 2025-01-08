#include <iostream>
using namespace std;

int getLeast(int array[], int size) {
    int minVal = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < minVal)
            minVal = array[i];
    }
    return minVal;
}

int getHighest(int array[], int size) {
    int largestVal = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > largestVal)
            largestVal = array[i];
    }
    return largestVal;
}

void getMinAndMax(int numbers[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
            *max = numbers[i];
        if (numbers[i] < *min)
            *min = numbers[i];
    }
}

int main() {
    int numbers[5] = {3, -4, 45, 5, 6};

    // cout << "The min value is " << getLeast(numbers, 5)<< endl;
    // cout << "The largest value is " << getHighest(numbers, 5)<< endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "The min value is " << min << endl;
    cout << "The largest value is " << max << endl;

    return 0;
}