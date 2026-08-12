#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

void display(Student *s, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Roll: " << (s+i)->roll
             << "  Name: " << (s+i)->name
             << "  Marks: " << (s+i)->marks << endl;
    }
}

int main() {
    Student s[3] = {
        {1, "Rahul", 85},
        {2, "Priya", 90},
        {3, "Amit", 78}
    };

    display(s, 3);

    return 0;
}
