#include <iostream>
#include <random>

using namespace std;

int main()
{

random_device rd;

mt 19937  eng1 (rd());
mt 19937  eng2 (1001);

int min = 10;
int max = 100;

uniform_int_distribution<int> un(min, max);

for (int = 0; i<10; i++)

cout << un(eng1) << " ";

for (int i = 0; i<10; i++)

cout << un(eng2) << " ";

}

