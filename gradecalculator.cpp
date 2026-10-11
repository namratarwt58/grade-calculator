
#include <iostream>
using namespace std;

int main() {
    int n;
    int marks[100];
    int total = 0;
    float average;

    cout << "Enter number of subjects (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of subjects!\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter marks for subject "
             << i + 1 << " (0-100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Try again.\n";
            i--;
            continue;
        }

        total += marks[i];
    }

    average = static_cast<float>(total) / n;

    cout << "\n--- RESULT ---\n";
    cout << "Total marks: " << total
         << " / " << n * 100 << endl;
    cout << "Average: " << average << "%\n";

    if (average >= 90) {
        cout << "Grade: A\n";
    }
    else if (average >= 80) {
        cout << "Grade: B\n";
    }
    else if (average >= 70) {
        cout << "Grade: C\n";
    }
    else if (average >= 60) {
        cout << "Grade: D\n";
    }
    else {
        cout << "Grade: F\n";
    }

    return 0;
}
