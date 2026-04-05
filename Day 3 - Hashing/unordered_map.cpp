#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
    unordered_map<string, string> contacts;

    contacts["Rizwan"] = "7972751248";
    contacts["Mom"] = "8308732678";

    cout << "Rizwan's Number: " << contacts["Rizwan"] << endl;
}