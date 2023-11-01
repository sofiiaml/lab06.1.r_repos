#include <iostream>
using namespace std;
//рекурсивний 
void generateRandomr(int r[], int k, int minValue, int maxValue) {
    for (int i = 0; i < k; ++i) {
        r[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
}

void printArray(const int r[], int k) {
    for (int i = 0; i < k; ++i) {
        cout << r[i] << ' ';
    }
    cout << endl;
}

void countElements(int r[], int k, int& count, int i) {
    if (i == k) {
        return; 
    }
    if (r[i] % 6 == 0 || i % 5 != 0) {
        count++;
    }
    countElements(r, k, count,i+1); 
}

void sumElements(int r[], int k, int& sum, int i) {
    if (i == k) {
        return; 
    }
    if (r[i] % 6 == 0 || i % 5 != 0) {
        sum += r[i];
    }
    sumElements(r, k, sum, i + 1); 
}

void replaceElements(int r[], int k,  int i) {
    if (i == k) {
        return; 
    }
    if (r[i] % 6 == 0 || i % 5 != 0) {
        r[i] = 0;
    }
    replaceElements(r, k, i + 1); 
}

int main() {
    srand(time(0));
    const int k = 25;
    int r[k];
    int minValue = 4;
    int maxValue = 73;
    generateRandomr(r, k, minValue, maxValue);
    int count = 0, sum = 0;
    printArray(r, k);
    countElements(r, k, count,0);
    sumElements(r, k, sum, 0);
    replaceElements(r, k, 0);
    cout << "Amount= " << count << endl;
    cout << "Sum= " << sum << endl;
    cout << "Changed array= ";
    printArray(r, k);

    return 0;
}