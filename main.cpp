#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "TennisWinners.h"

using namespace std;

int main() {
    vector<TennisWinners> tWinners;
    getTennisWinnersFromFile("TennisWins2000.csv", tWinners);
    cout << "The number of tWinners is " << tWinners.size() << endl;

    for(int i = 0; i < tWinners.size(); i++){
        cout << tWinners[i] << endl;
    }

    int average;
    average = averageAge(tWinners);

    cout << "The average age of the winners is: " << average << endl;

    // returning 0 means there were no errors in the run any other number means error
    return 0;
}
