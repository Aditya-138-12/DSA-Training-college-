#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    // pair
    unordered_map<string, string> stateLanguages;
    stateLanguages.insert(pair<string,string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string, string>("Andhra Pradesh", "Telugu"));
    stateLanguages.insert(pair<string, string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string, string>("Maharashtra", "Marathi"));
    stateLanguages.insert(pair<string, string>("West Bengal", "Bengali"));
    stateLanguages["Assam"] = "Assamese";
    // stateLanguages.clear(); // Deletes everything
    stateLanguages.erase("West Bengal");
    // Traverse ???
    // pair<first, second>
    for(auto pair : stateLanguages){
        cout << "State: " << pair.first << ", Language: " << pair.second << endl; 
    }
    return 0;
}