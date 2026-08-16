#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cout << "===== VECTOR SORTING =====" << endl;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
	sort(numbers.begin(), numbers.end());

    cout << "\nSorted elements: ";

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
