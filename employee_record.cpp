#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
struct Employee
{
    int id;
    string name;
    double salary;
};
int main()
{
    vector<Employee> employees;
    Employee emp1 = {101, "Anugrah", 30000};
    Employee emp2 = {102, "Rahul", 35000};
    employees.push_back(emp1);
    employees.push_back(emp2);
    cout << "===== EMPLOYEE RECORD SAVER =====" << endl;
    // Save records to file
    ofstream outFile("employees.txt");
    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    for (int i = 0; i < employees.size(); i++)
    {
        outFile << employees[i].id << " "
                << employees[i].name << " "
                << employees[i].salary << endl;
    }
    outFile.close();
    cout << "\nEmployee records saved successfully!" << endl;
    // Read records from file
    ifstream inFile("employees.txt");
    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    int id;
    string name;
    double salary;
    cout << "\n===== RECORDS READ FROM FILE =====" << endl;
    while (inFile >> id >> name >> salary)
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------------" << endl;
    }
    inFile.close();
    return 0;
}
