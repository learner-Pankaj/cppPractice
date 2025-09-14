#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) { // check till sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter a number N: ";
    cin >> N;
    int count = 0;

    cout << "Prime numbers up to " << N << " are: ";
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << count << " numbers are Prime number till " << N << endl ;

    return 0;
}
