// Пacmp1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


//задача 693
/*#include <iostream>
#include <string>
using namespace std; 
int main()
{
    int a, x[50];

}

//задача 66
 #include <iostream>
#include <string>
using namespace std;
main() {
    string a;
    cin >> a;
    if (a == "q") cout << "w";
    else if (a == "w") cout << "e";
    else if (a == "e") cout << "r";
    else if (a == "r") cout << "t";
    else if (a == "t") cout << "y";
    else if (a == "y") cout << "u";
    else if (a == "u") cout << "i";
    else if (a == "i") cout << "o";
    else if (a == "o") cout << "p";
    else if (a == "p") cout << "a";
    else if (a == "a") cout << "s";
    else if (a == "s") cout << "d";
    else if (a == "d") cout << "f";
    else if (a == "f") cout << "g";
    else if (a == "g") cout << "h";
    else if (a == "h") cout << "j";
    else if (a == "j") cout << "k";
    else if (a == "k") cout << "l";
    else if (a == "l") cout << "z";
    else if (a == "z") cout << "x";
    else if (a == "x") cout << "c";
    else if (a == "c") cout << "v";
    else if (a == "v") cout << "b";
    else if (a == "b") cout << "n";
    else if (a == "n") cout << "m";
    else if (a == "m") cout << "q";
}

//задача324
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if ((N / 1000) == (N % 10) & ((N / 100) % 10 == (N / 10) % 10)) {
        cout << "YES";
    }
    else { cout << "NO"; }
    return 0;
}

//задача 52
#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cin >> a;
    b = a / 1000;
    c = a % 1000;
    if (b / 100 + (b / 10) % 10 + b % 10 == c / 100 + (c / 10) % 10 + c % 10)cout << "YES";
    else cout << "NO";
}

//задача 44
#include <iostream>
using namespace std;
int main()
{
    int k = 0;
    string str;
    cin>>str;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] == '>' && str[i + 1] == '>' && str[i + 2] == '-' && str[i + 3] == '-' && str[i + 4] == '>')
            || (str[i] == '<' && str[i + 1] == '-' && str[i + 2] == '-' && str[i + 3] == '<' && str[i + 4] == '<'))
            k = k + 1;
    }
    cout<<k;
    return 0;
}*/

//задача 7
#include <iostream>
using namespace std;

int main()
{
    int a, b, c,d;
    cin >> a >> b >> c;
    d = max(a, max(b, c));
    cout <<d;
    return 0;
}