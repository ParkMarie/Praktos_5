#include <iostream>
#include <string>
#include <Windows.h>
#include <random>
using namespace std;

void Reverse(const string& word)
{
    string Reverse = word;
    reverse(Reverse.begin(), Reverse.end());
    cout << "Вывод слова задом наперед: " << Reverse << endl;
}

void RemoveGlasn(const string& word)
{
    string result = "";
    for (char simbolik : word)
    {
        if (string("хихихаха").find(simbolik) == string::npos)
        {
            result += simbolik;
        }
    }
    cout << "Вывод слова без гласных: " << result << endl;
}

void RemoveSogl(const string& word)
{
    string result = "";
    for (char simbolik : word)
    {
        if (string("абвгдеёжзий").find(simbolik == string::npos))
        {
            result += simbolik;
        }
    }
    cout << "Слово без согласных: " << result << endl;
}

void Peremesh(const string& word)
{
    string Peremesh = word;
    random_device rd;
    mt19937 g(rd());
    shuffle(Peremesh.begin(), Peremesh.end(), g);
    cout << "Рандомно раскиданное по буквам слово: " << Peremesh << endl;
}

int main()

{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");

    string word;
    cout << "Введите слово: ";
    cin >> word;
    int choice;
    do
    {     
        cout << "\tМеню: \n 1.Вывести слово задом наперед.\n 2.Вывести слово без гласных.\n 3.Вывести слово без согласных.\n 4.Рандомно раскидать буквы введенного слова.\n 5.Выйти из программы.";
        cout << "(вводите цифорки!)\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Reverse(word);
            break;
        case 2:
            RemoveGlasn(word);
            break;
        case 3:
            RemoveSogl(word);
            break;
        case 4:
            Peremesh(word);
            break;
        default:
            cout << "До новых встреч!" << endl;
        }
    } while (choice != 5);

    return 0;
}
