#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "===== FILE READ AND WRITE =====" << endl;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    // Write data to file
    ofstream outFile("student.txt");
    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;
    outFile.close();
    cout << "\nData written to file successfully!" << endl;
    // Read data from file
    ifstream inFile("student.txt");
    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    string line;
    cout << "\n===== DATA READ FROM FILE =====" << endl;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
