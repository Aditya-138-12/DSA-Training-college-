#include <iostream>
#include <vector>
using namespace std;
class Person {
public:
    string Name;
    int Age;
    Person(string name, int age){
        Name = name;
        Age = age;
    }
};
int main(){
    vector<Person> people;
    // push_back needs to mention the data type as well
    people.push_back(Person("Ashank", 27)); // Temporary copy
    // emplace back creates object, no data type needed
    // So, emplace_back is more efficient & saves memory
    people.emplace_back("Nirmal", 26); // Calls the constructor
    for(auto person : people){
        cout << person.Name << " is " << person.Age << " years old.\n";
    }
    return 0;
}