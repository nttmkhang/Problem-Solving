#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int toInt(char ch)
{
    return int(ch - '0');
}

string timeConversion(string s) {
    string temp = "";
    int hour = toInt(s[0]) * 10 + toInt(s[1]);
    if (s[8] == 'P')
    {
        if (!(s[0] == '1' && s[1] == '2'))
            hour += 12;
        if (hour < 10)
            temp += '0';
        temp += to_string(hour);
    }
    else
    {
        if (s[0] == '1' && s[1] == '2')
        {
            temp += "00";
        }
        else
        {
            if (hour < 10)
                temp += '0';
            temp += to_string(hour);
        }
    }

    for (int i = 2; i <= 7; i++)
        temp.push_back(s[i]);
    return temp;
}

int main()
{
    string time;
    cin >> time;
    time = timeConversion(time);
    cout << time;
    return 0;
}
