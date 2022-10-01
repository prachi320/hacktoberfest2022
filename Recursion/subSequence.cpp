#include <iostream>

using namespace std;

void subSequences(string input, string output, int index)
{
    if (index == input.size())
    {
        cout << output << endl;
        return;
    }

    // nhi lene hai
    subSequences(input, output, index + 1);

    // lene hai
    output += input[index];
    subSequences(input, output, index + 1);
}

int main()
{
    string input;
    cout << "Enter the any string: ";
    cin >> input;
    string output = "";
    subSequences(input, output, 0);
}
