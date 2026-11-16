#include <iostream>

using namespace std;


int main()
{
    string employee_name;
    string department_name;

    int Employee_ID;
    int departments;
    int performance_rating;
    int years_of_service;

    double BounsRating;
    double total_bouns;
    double Total_salary;
    double basic_salary;

    int numEmployees;

    cout<<"################## PAYROLL SYSTEM #####################"<<endl;
    cout<<"How many employees PAYSLIPS/PAYROLLS do you want to process? ";
    cin>>numEmployees;

    // THIS A LOOP THAT REPEATS THE THE PAYROLL/PAYSLIP SYSTEM HOWEVER MANY TIMES YOU WANT

    for (int i = 1; i <= numEmployees; i++)
    {
        cout<<" ############## EMPLOYEE " << i << " OF " << numEmployees << " ###############"<<endl;

        cout<<"Enter your Employee ID" <<endl;
        cin>>Employee_ID;

        cout<<"Enter Full Employee Name and Surname"<<endl;
        getline(cin >> ws, employee_name);

        cout<<"Enter your Basic Salary / Monthly Salary"<<endl;
        cin>>basic_salary;

        cout<<"Which department do you work in ?"<<endl;
        cout<<"Enter 1 for Engineering"<<endl;
        cout<<"Enter 2 for System Development"<<endl;
        cout<<"Enter 3 for Finance"<<endl;
        cout<<"Enter 4 for Human Resources"<<endl;
        cin>>departments;

        switch (departments)
        {
            case 1:
                department_name = "Engineering";
                break;
            case 2:
                department_name = "System Development";
                break;
            case 3:
                department_name = "Finance";
                break;
            case 4:
                department_name = "Human Resources";
                break;
            default:
                department_name = "Invalid";
             break;
        }

        cout << "Enter your performance rating 1 - 6!!" << endl;
        cin >> performance_rating;

        //PERFORMANCE RATING CALCULATIONS

        if (performance_rating >= 1 && performance_rating <= 3)
            BounsRating = 0.07;
        else if (performance_rating >= 4 && performance_rating <= 6)
            BounsRating = 0.14;
        else {
            cout << "Invalid Rating! Using 0% bonus." << endl;
            BounsRating = 0.0;
        }

        total_bouns = basic_salary * BounsRating;
        Total_salary = basic_salary + total_bouns;

        cout<< "How many years have you worked at the company " <<endl;
        cin>> years_of_service;

        cout<<"\n######################## EMPLOYEE PAYSLIP ########################"<<endl;
        cout<<"Employee ID : "<< Employee_ID <<endl;
        cout<<"Employee name and surname : "<<employee_name <<endl;
        cout<<"Basic salary : R"<< basic_salary <<endl;
        cout<<"Department : "<< department_name <<endl;
        cout<<"Rating : "<< performance_rating <<endl;
        cout<<"Years worked : "<< years_of_service <<endl;
        cout<<"Bonus % : "<< (BounsRating * 100) << "%" <<endl;
        cout<<"Total Bonus : R"<< total_bouns <<endl;
        cout<<"Total salary + Bonus : R"<< Total_salary <<endl;
        cout<<"##################################################################"<<endl;
    }

    cout<<"You Have Processed "<< numEmployees <<" Employees Is Payslips"<<endl;
    return 0;
}
