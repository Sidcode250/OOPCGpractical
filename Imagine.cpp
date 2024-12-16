#include <iostream>
#include <string>

using namespace std;

class Publication {
public:
    string title;
    float price;

    Publication(string title, float price) {
        this->title = title;
        this->price = price;
    }
};

class Book : public Publication {
public:
    int pages;

    Book(string title, float price, int pages) : Publication(title, price) {
        this->pages = pages;
    }
};

class Tape : public Publication {
public:
    float play_time;

    Tape(string title, float price, float play_time) : Publication(title, price) {
        this->play_time = play_time;
    }
};

int main() {
    string title;
    float price;
    int pages;
    float play_time;

    try {
        cout << "Enter book title, price, and number of pages: ";
        cin >> title >> price >> pages;

        Book book(title, price, pages);

        cout << "Enter tape title, price, and play time: ";
        cin >> title >> price >> play_time;

        Tape tape(title, price, play_time);

        cout << "\nBook Details:\n";
        cout << "Title: " << book.title << endl;
        cout << "Price: $" << book.price << endl;
        cout << "Pages: " << book.pages << endl;

        cout << "\nTape Details:\n";
        cout << "Title: " << tape.title << endl;
        cout << "Price: $" << tape.price << endl;
        cout << "Play Time: " << tape.play_time << " minutes\n";
    } catch (exception& e) {
        cout << "An error occurred: " << e.what() << endl;
        cout << "All data members set to zero.\n";

        Book book("", 0, 0);
        Tape tape("", 0, 0);

        book.display();
        tape.display();
    }

    return 0;
}
