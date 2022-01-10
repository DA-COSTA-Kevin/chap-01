#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {
    // 1
    /*int array[] = { 0, 1, 2, 3 };*/

    /*for (int i = 0; i < 4; ++i)
    { std::cout << array[i] << std::endl; }*/

    // 2
    /*for (int value : array)
    { std::cout << value << std::endl; }*/

    // 3
    /*int array[50] = {};

    for (int i = 0; i < 50; i++)
    { array[i] = i + 1; }

    for (int value : array)
    { std::cout << value << std::endl; }*/

    // 4

    using namespace std;
    /*if (argc < 2)
    {
        cerr << "Expected argument for array size." << endl;
        return -1;
    }

    cout << argv[1] << endl;

    int length = stoi(argv[1]);
    if (length <= 0)
    {
        cerr << "Expected strictly positive value for array size." << endl;
        return -1;
    }
    cout << length << endl;*/

    vector<int> array;

    for (int i = 0; i < 50; i++)
    { array.emplace_back(i + 1); }

    for (int value : array)
    { cout << value << endl; }

    return 0;
}