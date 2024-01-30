#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;



int main()
{


    //funktion baseret ud fra tiden i virkeligheden
    
    srand(time(0));

    cout << "Terninge spil\n\n";

    //spørger hvor mange terninger der skal spilles med og indsætter værdien i en variabel kaldet AntalT

    int AntalT;
    cout << "Hvor mange terninger vil du spille med? ";
    cin >> AntalT;

     // Bruger en vektor til at gemme resultaterne af hvert terningkast

    vector<int> resultater;

     // Genererer tilfældige tal for hvert kast og gemmer dem i vektoren resultater

    for (int i = 0; i < AntalT; i++)
    {
        
        int random = (rand() % 6) + 1; // Genererer tilfældigt tal mellem 1 og 6
        resultater.push_back(random);
    }
    
    // Sorterer resultaterne i stigende rækkefølge ved hjælp af for loopet

    for (int i = 1; i < resultater.size(); i++)
    {
        
        int current = resultater[i];
        
        int j = i - 1;

        // Flytter værdier større end current til højre
        while (j >= 0 && resultater[j] > current)
        {

            resultater[j + 1] = resultater[j];
            j--;
        }

        resultater[j + 1] = current;
    }

    // her vises resultaterne

    for (int resul : resultater) {
        cout << resul << "\n";
    }

}