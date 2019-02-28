#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    /*char input [100];
    cin >> input;
    ofstream fi ("file.txt");
    fi << input;
    fi.close();

    char output [100];

    ifstream fii ("file.txt");
    fii.getline(output,100);
    cout << output;
    fii.close();*/

    //cout << "[i]nput or [o]utput stream: ";
    //char stream;
    //cin >> stream;

    cout << "File name: ";
    char failneim [100];
    cin >> failneim;

    char fail [100] = "null";

    //if(stream == 'i')
    //{
        int cnt = 0;
        ifstream strim (failneim);
        /*strim.getline(fail,100);
        cout << fail;*/
        while(fail != "\0")
        {
            strim.read(fail,100);
            cout << fail;
            cnt++;
        }

        strim.close();

        cout << cnt;
    //}
    /*else if(stream == 'i')
    {
        ofstream strim (failneim);
    }*/
    /*else
    {
        cout << "Is this UI so hard for you ?";
    }*/

    return 0;
}
