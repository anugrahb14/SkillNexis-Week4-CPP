#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    int n;
    int roll;
    string name;
    cout << "===== STUDENT ROLL & NAME MAP =====" << endl;
    cout << "Enter number of students: ";
    cin >> n;
    map<int, string> students;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter student name: ";
        getline(cin, name);
        students[roll] = name;
    }
    cout << "\n===== STUDENT DETAILS =====" << endl;
    for (map<int, string>::iterator it = students.begin();
         it != students.end(); ++it)
    {
        cout << "Roll Number: " << it->first
             << " | Name: " << it->second << endl;
    }
    return 0;
}
