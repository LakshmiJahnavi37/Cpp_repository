#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    Employee() {
        id = 0;
        name = "NotAssigned";
        salary = 0.0;
    }
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }
    void getData();
    inline void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
    friend bool isHigherSalary(Employee e1, Employee e2);

    float getSalary() {
        return salary;
    }
};

void Employee::getData() {
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Salary: ";
    cin >> salary;
}

bool isHigherSalary(Employee e1, Employee e2) {
    return e1.salary > e2.salary;
}
int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        emp[i].getData();
    }
    Employee maxEmp = emp[0];
    for (int i = 1; i < n; i++) {
        if (isHigherSalary(emp[i], maxEmp)) {
            maxEmp = emp[i]; 
        }
    }

    cout << "\nEmployee with the highest salary:\n";
    maxEmp.display();

    return 0;
}

