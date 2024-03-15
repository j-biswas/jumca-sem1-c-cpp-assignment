#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Record {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

void addRecord() {
    ofstream fout;
    fout.open("records.txt", ios::app);
    if (!fout) {
        cout << "Error opening file" << endl;
        return;
    }

    Record record;
    cout << "Enter name: ";
    cin >> record.name;
    cout << "Enter age: ";
    cin >> record.age;

    fout << record.name << "," << record.age << endl;

    fout.close();
}

void viewRecords() {
    ifstream fin;
    fin.open("records.txt");
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        Record record;
        int pos = line.find(",");
        record.name = line.substr(0, pos);
        record.age = stoi(line.substr(pos + 1));

        record.display();
    }

    fin.close();
}

void deleteRecord() {
    ifstream fin;
    fin.open("records.txt");
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

    string name;
    cout << "Enter name of record to delete: ";
    cin >> name;

    ofstream fout;
    fout.open("temp.txt");
    if (!fout) {
        cout << "Error opening file" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        Record record;
        int pos = line.find(",");
        record.name = line.substr(0, pos);
        record.age = stoi(line.substr(pos + 1));

        if (record.name != name) {
            fout << record.name << "," << record.age << endl;
        }
    }

    fin.close();
    fout.close();

    remove("records.txt");
    rename("temp.txt", "records.txt");
}

void searchRecord() {
    ifstream fin;
    fin.open("records.txt");
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

    string name;
    cout << "Enter name of record to search: ";
    cin >> name;

    bool found = false;
    string line;
    while (getline(fin, line)) {
        Record record;
        int pos = line.find(",");
        record.name = line.substr(0, pos);
        record.age = stoi(line.substr(pos + 1));

        if (record.name == name) {
            found = true;
            record.display();
            break;
        }
    }

    if (!found) {
        cout << "Record not found" << endl;
    }

    fin.close();
}

void updateRecord() {
    ifstream fin;
    fin.open("records.txt");
    if (!fin) {
        cout << "Error opening file" << endl;
        return;
    }

    string name;
    cout << "Enter name of record to update: ";
    cin >> name;

    ofstream fout;
    fout.open("temp.txt");
    if (!fout) {
        cout << "Error opening file" << endl;
        return;
    }

    string line;
    while (getline(fin, line)) {
        Record record;
        int pos = line.find(",");
        record.name = line.substr(0, pos);
        record.age = stoi(line.substr(pos + 1));

        if (record.name == name) {
            cout << "Enter new name: ";
            cin >> record.name;
            cout << "Enter new age: ";
            cin >> record.age;
        }

        fout << record.name << "," << record.age << endl;
    }

    fin.close();
    fout.close();

    remove("records.txt");
    rename("temp.txt", "records.txt");
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add new record" << endl;
        cout << "2. View all records" << endl;
        cout << "3. Delete particular record" << endl;
        cout << "4. Search record" << endl;
        cout << "5. Update record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                deleteRecord();
                break;
            case 4:
                searchRecord();
                break;
        case 5:
            updateRecord();
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
    }
}

return 0;
}