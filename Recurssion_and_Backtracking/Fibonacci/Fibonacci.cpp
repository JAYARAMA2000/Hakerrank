#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Complete the function.
    int first=0,second=1;
    int sum;
    for(int i=2;i<=n;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
    }
  return sum;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
