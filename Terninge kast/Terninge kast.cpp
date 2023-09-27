#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;



int main()
{

    srand(time(0));

    cout << "Terninge spil\n\n";

    int AntalT;
    cout << "Hvor mange terninger vil du spille med? ";
    cin >> AntalT;

    vector<int> resultater;

    for (int i = 0; i < AntalT; i++)
    {
        int random = (rand() % 6) + 1;
        resultater.push_back(random);
    }

    for (int i = 1; i < resultater.size(); i++)
    {
        int current = resultater[i];
        int j = i - 1;

        while (j >= 0 && resultater[j] > current)
        {
            resultater[j + 1] = resultater[j];
            j--;
        }

        resultater[j + 1] = current;
    }

    for (int resul : resultater) {
        cout << resul << "\n";
    }

}