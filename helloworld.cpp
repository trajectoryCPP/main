#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    {
        cout << "Enter a random word next." << '\n';
        string inp;
        cin >> inp;
        cout << "You inputed " << inp;
    }
    cout << endl;

    cout << "something" << endl;


}