#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

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

        sort(resultater.begin(), resultater.end());

        for (int resul : resultater) {
            cout << resul << "\n";
        }

}