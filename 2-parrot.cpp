#include <iostream>

int main() {
    /*while (true)
    {
        int number = 0;
        std::cin >> number;
        std::cout << "Craow " << number << "!" << std::endl;

        if (number == -1)
        { break; }
    }*/

    /*int number = 0;
    do
    {
        std::cin >> number;
        std::cout << "Craow " << number << " !" << std::endl;
    }
    while (number != -1);
    return 0;*/

    /*for (int i = 0; i < 10; ++i)
    {
        int number = 0;
        std::cin >> number;
        std::cout << "Craow " << number << "!" << std::endl;
    }*/

    /*
    for (int i = 0; i < 10; ++i)
    {
        std::string word;
        std::cin >> word;
        std::cout << "Craow " << word << "!" << std::endl;
    }*/

    using namespace std;
    for (int i = 0; i < 10; ++i)
    {
        string word;
        cin >> word;
        cout << "Craow " << word << "!" << endl;
    }
}