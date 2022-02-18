#include <iostream>
#include <string>

using namespace std;

class Person {
    int birth_year;
    string first_name;
    string last_name;
public:
    Person(int birth_year, string first_name, string last_name)
    {
        this->birth_year = birth_year;
        this->first_name = first_name;
        this->last_name = last_name;
    }

    string get_first_name()
    {
        return first_name;
    }

    string get_last_name()
    {
        return last_name;
    }

    int get_birth_year()
    {
        return birth_year;
    }

    void set_birth_year(int year)
    {
        birth_year = year;
    }

    int get_age()
    {
        int current_year = 2022;
        return current_year - birth_year;
    }

    string get_full_name()
    {
        return first_name + ' ' + last_name;
    }
};

int main()
{
    Person ishai = Person(2003, "ishai", "masada");
    cout << ishai.get_first_name() << endl;
    ishai.set_birth_year(2001);
    cout << ishai.get_birth_year() << endl;
    cout << ishai.get_full_name() << endl;
}

