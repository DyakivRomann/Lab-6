#include <iostream>
#include <string>
using namespace std;

template<typename T>
void Sort(T* array, int length)
{

    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }

        swap(array[startIndex], array[smallestIndex]);
    }
}
int stateMenu;
void Menu()
{
    cout << "Зробiть вибiр" << endl
        << "(1)  bool" << endl
        << "(2)  char" << endl
        << "(3)  signed char" << endl
        << "(4)  unsigned char" << endl
        << "(5)  wchar_t" << endl
        << "(6)  char16_t" << endl
        << "(7)  char32_t" << endl
        << "(8)  short" << endl
        << "(9)  unsigned short" << endl
        << "(10) int" << endl
        << "(11) unsigned int" << endl
        << "(12) long" << endl
        << "(13) unsigned long" << endl
        << "(14) float" << endl
        << "(15) doubole" << endl
        << "(16) long double" << endl
        << "(0)  для того, щоб вийти з програми" << endl
        << "Ваш вибiр: ";
    cin >> stateMenu;
}
template<class T>
class A
{
    T value;
public:
    void getSize(string b)
    {
        int size;
        int sizeBin;
        int c;
        size = sizeof(value);
        sizeBin = size;
        string a;

        while (sizeBin != 0) {
            c = sizeBin % 2;
            a += to_string(c);
            sizeBin /= 2;
        }
        reverse(a.begin(), a.end());
        cout << endl;
        cout << "Розмiр типу " << b << " " << size << endl;
        cout << "Розмiр типу " << b << " у двiйковiй системi " << a << endl << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    cout << "Завдадання 1" << endl;
    int length;
    cout << "Введiть розмiр масива: " << endl;
    cin >> length;
    int* array = new int[length];
    cout << "Зповнiть масив:" << endl;
    for (int index = 0; index < length; ++index)
    {
        cin >> array[index];
    }
    Sort(array, length);

    cout << "Вiдсортований масив" << endl;
    for (int index = 0; index < length; ++index)
    {
        cout << array[index] << ' ';
    }
    cout << endl << endl;

    cout << "Завдання 2" << endl;
    cout << "Виберiть тип даних, розмiр якого ви хочете дiзнатися" << endl;
    Menu();
    while (stateMenu != 0)
    {
        switch (stateMenu)
        {
        case 1:
            A<bool> num1;
            num1.getSize("bool");
            Menu();
            break;
        case 2:
            A<char> num2;
            cout << endl;
            num2.getSize("char");
            Menu();
            break;
        case 3:
            A<signed char> num3;
            num3.getSize("signed char");
            Menu();
            break;
        case 4:
            A<unsigned char> num4;
            num4.getSize("unsigned char");
            Menu();
            break;
        case 5:
            A<wchar_t> num5;
            num5.getSize("wchar_t");
            Menu();
            break;
        case 6:
            A<char16_t> num6;
            num6.getSize("char16_t");
            Menu();
            break;
        case 7:
            A<char32_t> num7;
            num7.getSize("char32_t");
            Menu();
            break;
        case 8:
            A<short> num8;
            num8.getSize("short");
            Menu();
            break;
        case 9:
            A<unsigned short> num9;
            num9.getSize("unsigned short");
            Menu();
            break;
        case 10:
            A<int> num10;
            num10.getSize("int");
            Menu();
            break;
        case 11:
            A<unsigned int> num11;
            num11.getSize("unsigned int");
            Menu();
            break;
        case 12:
            A<long> num12;
            num12.getSize("long");
            Menu();
            break;
        case 13:
            A<unsigned long> num13;
            num13.getSize("unsigned long");
            Menu();
            break;
        case 14:
            A<float> num14;
            num14.getSize("float");
            Menu();
            break;
        case 15:
            A<double> num15;
            num15.getSize("double");
            Menu();
            break;
        case 16:
            A<long double> num16;
            num16.getSize("long double");
            Menu();
            break;
        default:
            cout << "Ви ввели невiрне значення. Повторiть спробу" << endl;
            Menu();
        }
    }
}

