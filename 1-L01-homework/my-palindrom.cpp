#include<iostream>
#include<string>
#include<boost/algorithm/string.hpp>

using namespace std;

bool is_palindrom(string wyraz)
        {
        boost::to_lower(wyraz);
        wyraz.erase(remove_if(wyraz.begin(), wyraz.end(), ::isspace), wyraz.end());
        int dlugosc = wyraz.length();
        int flag = 0;
        for (int i = 0; i < dlugosc; i++)
                {
                if (wyraz[i] != wyraz[dlugosc-1-i]) flag += 1;
                }
        if (flag == 0) return true;
        else return false;
        }

int main()
        {
        string w;
        cout << "Wpisz wyraz: " << endl;
        getline(cin,w);
        if (is_palindrom(w) == true) cout << "Wyraz jest palindromem!" << endl;
        else cout << "Wyraz NIE jest palindromem" << endl;
        return 0;
        }
