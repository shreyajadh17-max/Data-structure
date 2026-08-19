#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class BrowserHistory {
private:
    string history[MAX];
    int top;

public:
    BrowserHistory() {
        top = -1;
    }

    // Visit a new webpage
    void visit(string page) {
        if (top == MAX - 1) {
            cout << "History is full!" << endl;
            return;
        }

        history[++top] = page;
        cout << "Visited: " << page << endl;
    }

    // Go back to the previous webpage
    void back() {
        if (top <= 0) {
            cout << "No previous page available." << endl;
            return;
        }

        cout << "Going back from: " << history[top] << endl;
        top--;

        cout << "Current page: " << history[top] << endl;
    }

    // Display browser history
    void display() {
        cout << "\nBrowser History:\n";

        for (int i = top; i >= 0; i--) {
            cout << history[i] << endl;
        }
    }
};

int main() {
    BrowserHistory browser;

    browser.visit("Google");
    browser.visit("YouTube");
    browser.visit("Wikipedia");
    browser.visit("GitHub");

    browser.display();

    cout << "\n--- Back Operation ---\n";
    browser.back();

    cout << "\n--- Back Operation ---\n";
    browser.back();

    return 0;
}
