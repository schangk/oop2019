#include <iostream>
using namespace std;

int asd = 2;

class LetterPrinter
{

    public:

    LetterPrinter()
    {
        cout << "A";
    };
    ~LetterPrinter()
    {
        cout << "B";
    };
};

int main ()
{
    LetterPrinter();

return 0;
}
