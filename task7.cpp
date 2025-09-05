#include <iostream>
#include <string>
using namespace std;

// Q1: Scoped enum and function
enum class Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

string recommendActivity(Season currentSeason) {
    switch (currentSeason) {
        case Season::SPRING: return "Plant flowers";
        case Season::SUMMER: return "Go to the beach";
        case Season::AUTUMN: return "Rake leaves";
        case Season::WINTER: return "Build a snowman";
        default: return "Rest";
    }
}

int main() {
    Season now = Season::AUTUMN;
    cout << "It's autumn! Let's: " << recommendActivity(now) << endl;
    return 0;
}

// Q2
// Clear, readable, prevents invalid values, avoids magic numbers/strings.

// Q3
// Compiler ensures only valid enum values are used. Code is easier to read.

// Q4
// Java enums can have methods, fields, constructors.
// C++ scoped enums are type-safe; older C enums are not.
// Java enums = full classes; C++ enums = named values.
