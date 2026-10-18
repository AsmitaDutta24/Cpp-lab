
#include <iostream>
#include <cstring>
using namespace std;

class Media {
protected:
    char title[64];
    char publication[64];

public:
    virtual void read() {
        cout << "Enter title: ";
        cin.ignore();
        cin.getline(title, 64);

        cout << "Enter publication: ";
        cin.getline(publication, 64);
    }

    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }

    virtual ~Media() {}
};

class Book : public Media {
private:
    int pages;

public:
    void read() override {
        Media::read();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void show() override {
        cout << "\nBook Details\n";
        Media::show();
        cout << "Number of pages: " << pages << endl;
    }
};

class Tape : public Media {
private:
    float playingTime;

public:
    void read() override {
        Media::read();
        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
    }

    void show() override {
        cout << "\nTape Details\n";
        Media::show();
        cout << "Playing time: " << playingTime
             << " minutes" << endl;
    }
};

int main() {
    Media *media[10];
    int n, choice;

    cout << "Enter number of items (maximum 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Invalid number of items." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n1. Book\n2. Tape\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            media[i] = new Book();
        } else if (choice == 2) {
            media[i] = new Tape();
        } else {
            cout << "Invalid choice. Try again.\n";
            i--;
            continue;
        }

        media[i]->read();
    }

    cout << "\n========== MEDIA DETAILS ==========\n";

    for (int i = 0; i < n; i++) {
        media[i]->show();
    }

    for (int i = 0; i < n; i++) {
        delete media[i];
    }

    return 0;
}
