
#include <iostream>
#include <string>
using namespace std;

class IStringable {
public:
    virtual string toString() const = 0;
    virtual ~IStringable() = default;
};

class Printable {
public:
    void print(const IStringable& obj) {
        cout << obj.toString() << endl;
    }
};

class Book : public IStringable {
    string title, author;
public:
    Book(string t, string a) : title(t), author(a) {}
    string toString() const override { return "'" + title + "' by " + author; }
};

int main() {
    Book b("1984", "George Orwell");
    Printable p;
    p.print(b);
    return 0;
}

// Q2: Mixins/interfaces add features without inheritance chain
// Q3: Java’s `default` methods = reusable behavior in interfaces
// Q4: inheritance = tight coupling, composition/mixins = flexible reuse
