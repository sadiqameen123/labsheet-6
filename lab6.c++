// Q1. Write a program to input and display elements of a 1D array..............................01
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// Q2. Write a program to find the sum of all elements in a 1D array[cite: 1, 2].....................02
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum;
    return 0;
}

// Q3. Write a program to find the maximum and minimum element in a 1D array[cite: 1, 2, 3].
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maximum = arr[0];
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum)
            maximum = arr[i];
        if (arr[i] < minimum)
            minimum = arr[i];
    }
    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum;
    return 0;
}

// Q4. Write a program to reverse a 1D array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    return 0;
}

// Q5. Write a program to input 10 numbers in an array and count how many are even and odd[cite: 1, 3].
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Even = " << evenCount << endl;
    cout << "Odd = " << oddCount;
    return 0;
}

// Q6. Write a program to search an element in a 1D array (without using functions)[cite: 1, 3].
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}

// Q7. Write a program to input and display elements of a 2D array (matrix).
#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cin >> rows >> columns;
    int matrix[rows][columns];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}

// Q8. Write a program to add two matrices[cite: 1, 4].
#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cin >> rows >> columns;
    int A[rows][columns], B[rows][columns];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> A[i][j];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> B[i][j];
    cout << "Sum Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << A[i][j] + B[i][j] << " ";
        cout << endl;
    }
    return 0;
}

// Q9. Write a program to subtract two matrices.
#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cin >> rows >> columns;
    int A[rows][columns], B[rows][columns];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> A[i][j];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> B[i][j];
    cout << "Difference Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << A[i][j] - B[i][j] << " ";
        cout << endl;
    }
    return 0;
}

// Q10. Write a program to multiply two matrices[cite: 1, 5].
#include <iostream>
using namespace std;
int main() {
    int rowsA, columnsA, rowsB, columnsB;
    cin >> rowsA >> columnsA;
    cin >> rowsB >> columnsB;
    if (columnsA != rowsB) {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    int A[rowsA][columnsA];
    int B[rowsB][columnsB];
    int C[rowsA][columnsB] = {0};
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < columnsA; j++)
            cin >> A[i][j];
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < columnsB; j++)
            cin >> B[i][j];
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < columnsB; j++)
            for (int k = 0; k < columnsA; k++)
                C[i][j] += A[i][k] * B[k][j];
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}

// Q11. Write a program to sort an array using Bubble Sort in ascending order.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// Q12. Write a program to sort an array using Bubble Sort in descending order[cite: 1, 6].
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// Q13. Write a program to sort names of students using Bubble Sort[cite: 1, 6].
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++)
        cin >> names[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1])
                swap(names[j], names[j + 1]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;
    return 0;
}

// Q14. Write a program to search an element in a 1D array using Linear Search.
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            return 0;
        }
    }
    cout << "Element not found";
    return 0;
}

// Q15. Write a program to search an element in a 1D array using Binary Search[cite: 1, 7].
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    int left = 0, right = n - 1;
    bool found = false;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == key) {
            found = true;
            break;
        }
        if (arr[middle] < key)
            left = middle + 1;
        else
            right = middle - 1;
    }
    if (found)
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}

// Q16. Write a program to count the number of occurrences of a given element in an array (Linear Search).
#include <iostream>
using namespace std;
int main() {
    int n, key, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }
    cout << "Occurrences = " << count;
    return 0;
}

// Q17. Write a program to check if a given number is present in the array or not (Linear Search)[cite: 1, 8].
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    bool present = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            present = true;
            break;
        }
    }
    if (present)
        cout << "Number is present";
    else
        cout << "Number is not present";
    return 0;
}

// Q18. Write a program to implement Binary Search for an array of integers.
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    int left = 0, right = n - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == key) {
            cout << "Element found";
            return 0;
        }
        if (arr[middle] < key)
            left = middle + 1;
        else
            right = middle - 1;
    }
    cout << "Element not found";
    return 0;
}


// Q19. Write a program to implement Binary Search for an array of floating-point numbers[cite: 1, 9].
#include <iostream>
using namespace std;
int main() {
    int n;
    float key;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    int left = 0, right = n - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == key) {
            cout << "Element found";
            return 0;
        }
        if (arr[middle] < key)
            left = middle + 1;
        else
            right = middle - 1;
    }
    cout << "Element not found";
    return 0;
}

// Q20. Write a program to search the largest element in a sorted array using Binary Search[cite: 1, 10].
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int left = 0, right = n - 1;
    while (left < right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] < arr[right])
            left = middle + 1;
        else
            right = middle;
    }
    cout << "Largest element = " << arr[left];
    return 0;
}
