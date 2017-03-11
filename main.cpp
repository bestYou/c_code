#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    Employee(string name,string surname,int money){
        this->name = name;
        this->surname = surname;
        this->money = money;
    }

    void set_name(string name){
        this->name = name;
    }
    string get_name(){
        return name;
    }

    void set_surname(string surname){
        this->surname = surname;
    }
    string get_surname(){
        return surname;
    }

    void set_money(int money){
        if(money>0)
            this->money = money;
        else {
            money = 0;
            cout << "error!Please input money again";
        }
    }
    int get_money(){
        return money;
    }

private:
    string name;
    string surname;
    int money;
};

int main()
{
    Employee employee_1("Daming","You",80000);
    Employee employee_2("Tom","You",90000);

    cout << "employee 1 :" << "\n"
         << "   Name:" << employee_1.get_surname() <<" "<< employee_1.get_name() << "\n"
         << "   Annual salary:" << employee_1.get_money() * 12 << endl;
    cout << "employee 2 :" << "\n"
         << "   Name:" << employee_2.get_surname() <<" "<< employee_2.get_name() << "\n"
         << "   Annual salary:" << employee_2.get_money() * 12 << "\n" <<endl;

    cout << "What? Boss wants a raise!" << "\n" << endl;

    cout << "employee 1 :" << "\n"
         << "   Name:" << employee_1.get_surname() <<" "<< employee_1.get_name() << "\n"
         << "   Annual salary:" << employee_1.get_money() * 12 + employee_1.get_money() * 12 * 0.1 << endl;
    cout << "employee 2 :" << "\n"
         << "   Name:" << employee_2.get_surname() <<" "<< employee_2.get_name() << "\n"
         << "   Annual salary:" << employee_2.get_money() * 12 + employee_1.get_money() * 12 * 0.1 << endl;

    //cout << "Hello world!" << endl;
    return 0;
}
