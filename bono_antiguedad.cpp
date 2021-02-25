#include <iostream>
using namespace std;

int main() {

    float years=0, salary=0, bonoYears=0, bonoSalary=0, result=0;

    cout << "Ingresé la antigüedad en la empresa"<<endl;
    cin >> years;

    cout << "¿Cuál es su salario actual?"<<endl;
    cin >> salary;

    if( years > 2 && years < 5 ){
        bonoYears = salary * 0.20;
    }
    if( years >= 5 ){
        bonoYears = salary * 0.30;
    }

    if(salary < 1000){
        bonoSalary = salary * 0.25;
    }
    if( salary >= 1000 && salary <= 3500){
        bonoSalary = salary * 0.15;
    }
    if( salary > 3500 ){
        bonoSalary = salary * 0.10;
    }

    if(bonoYears > bonoSalary){
        cout << "El sueldo más el bono es de: $"<< salary + bonoYears << ".00 MXN"<<endl;
        cout << "El bono aplicado es por años de antigüedad"<<endl;
    }else{
        cout << "El sueldo más el bono es de: $"<< salary + bonoSalary << ".00 MXN"<<endl;
        cout << "El bono aplicado es por sueldo"<<endl;
    }

    return 0;
}