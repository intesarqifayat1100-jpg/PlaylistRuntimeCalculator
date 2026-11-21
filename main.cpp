#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;

    fin.open("playlist.txt");
    if (!fin) {
        cerr << "Error: could not open playlist.txt" << endl;
        return 1;
    }

    string songName;
    double totalRuntime = 0.0;
    double currentRuntime = 0.0;
    double averageRuntime = 0.0;

    // Read first song
    fin >> songName >> currentRuntime;
    totalRuntime += currentRuntime;

    // Read second song
    fin >> songName >> currentRuntime;
    totalRuntime += currentRuntime;

    fin.close();

    averageRuntime = totalRuntime / 2.0;

    fout.open("summary.txt");
    fout << fixed << setprecision(2);
    fout << "Total runtime: " << totalRuntime << " minutes" << endl;
    fout << "Average duration: " << averageRuntime << " minutes" << endl;
    fout.close();

    return 0;
}
