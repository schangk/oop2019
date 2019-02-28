#include <iostream>
using namespace std;

char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

class Grade {
    char letter;
    int percent;

    public:

void setByPercent(int percent){
    this->percent = percent;
    this->letter = GRADE_MAP[percent / 10];
}

void setByLetter(char letter){
    this->letter = letter;
    this->percent = 100 - (letter - 'A') * 10 - 5;
}

void print(){
    cout << ("Grade: %d: %c\n", this->percent, this->letter) << endl;
}

};

int main ()
{
Grade g;
    int percent;
    std::cout << "Enter one grade. Use a percentage:\n";
    std::cin >> percent;
    g.setByPercent(percent);
    g.print();
    cin.get();
    g.setByLetter(std::cin.get());
    g.print();

return 0;
}
