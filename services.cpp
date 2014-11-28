#include "services.h"

Services::Services()
{
    //cout << "Service constructed." << endl;
    d = Database();
    d.start();
}

Services::~Services()
{
    //dtor
    d.finish();
}
void Services::display()
{
    cout << left << setw(15) << "First name" << setw(15) << "Last name" << setw(8) << "Gender" << setw(6) << "Born"
         << "Dead" << endl;
    for(int i = 0; i < 48; i++)
    {
        cout << "-";
    }
    cout << endl;
    d.display();
}
void Services::add(Man m1)
{
    d.add(m1);
}
void Services::sort(int choice)
{
    switch(choice)
    {
    case 1: {d.sortFirstName(); break;}
    case 2: {d.sortLastName(); break;}
    case 3: {d.sortBirthYear(); break;}
    case 4: {d.sortDeathYear(); break;}
    }
}
