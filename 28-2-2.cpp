#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
    char name [100];
    long long egn;
    long fn;
    long marks [10];
};

void initialize(Student& s)
{
    char neim [100];
    cin >> neim;
    strcpy(s.name,neim);
    long long data;
    cin >> data;
    s.egn = data;
    cin >> data;
    s.fn = data;
    for(int index = 0; index < 10; index++)
    {
        cin >> data;
        s.marks[index] = data;
    }
};

int main ()
{
    Student gosho;
    initialize(gosho);


    return 0;
}
