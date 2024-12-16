#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    // Constructors
    Student() : roll_no(0), age(0) {}
    Student(int roll_no, string name, int age, string address, string phone_no) :
        roll_no(roll_no), name(name), age(age), address(address), phone_no(phone_no) {}

    // Destructor
    ~Student() {}

    // Accessors
    int getRollNo() const { return roll_no; }
    string getName() const { return name; }
    int getAge() const { return age; }
    string getAddress() const { return address; }
    string getPhoneNo() const { return phone_no; }

    // Mutators
    void setRollNo(int roll_no) { this->roll_no = roll_no; }
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setAddress(string address) { this->address = address; }
    void setPhoneNo(string phone_no) { this->phone_no = phone_no; }

    // Display student information
    void display() const {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone No: " << phone_no << endl;
    }

private:
    int roll_no;
    string name;
    int age;
    string address;
    string phone_no;
};

class StudentDatabase {
public:
    void addStudent() {
        Student student;
        cout << "Enter student details:\n";
        cout << "Roll No: ";
        cin >> student.roll_no;
        // ... other input fields
        students.push_back(student);
    }

    void displayAllStudents() {
        for (const auto& student : students) {
            student.display();
            cout << endl;
        }
    }

private:
    vector<Student> students;
};

int main() {
    StudentDatabase database;

    int choice;
    do {
        cout << "\n1. Add Student\n2. Display All Students\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                database.addStudent();
                break;
            case 2:
                database.displayAllStudents();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}
