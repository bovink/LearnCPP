#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Link {
    string value;
    Link *prev;
    Link *succ;

    Link(const string &v, Link *p = nullptr, Link *s = nullptr) : value(v), prev(p), succ(s) {}
};

Link *insert(Link *p, Link *n) {// insert n before p,return n
    if (n == nullptr)return p;
    if (p == nullptr)return n;
    n->succ = p;
    if (p->prev) p->prev->succ = n;
    n->prev = p->prev;
    p->prev = n;
    return n;
}

Link *erase(Link *p) {
    if (p == 0) return 0;
    if (p->succ) p->succ->prev = p->prev;
    if (p->prev) p->prev->succ = p->succ;
    return p->succ;
}

Link *find(Link *p, const string &s) {
    while (p != nullptr) {
        if (p->value == s)return p;
        p = p->succ;
    }
    return nullptr;
}

void print_all(Link *p) {
    cout << "{";
    while (p) {
        cout << p->value;
        if ((p = p->succ)) cout << ",";

    }
    cout << "}";

}

void print_all_reverse(Link *p) {
    while (p->succ) {
        p = p->succ;
    }
    cout << "{";
    while (p) {
        cout << p->value;
        if ((p = p->prev)) cout << ",";

    }
    cout << "}";

}

void test (){


    Link *norse_gods = new Link("Thor");
    norse_gods = insert(norse_gods, new Link("Odin"));
    norse_gods = insert(norse_gods, new Link("Zeus"));
    norse_gods = insert(norse_gods, new Link("Freia"));

    Link *greek_gods = new Link("Hera");
    greek_gods = insert(greek_gods, new Link("Athena"));
    greek_gods = insert(greek_gods, new Link("Mars"));
    greek_gods = insert(greek_gods, new Link("Poseidon"));

    Link *p = find(norse_gods, "Freia");
    if (p) {
        if (p == norse_gods) norse_gods = p->succ;
        erase(p);
        greek_gods = insert(greek_gods, p);
    }
    print_all_reverse(norse_gods);
    cout << "\n";

    print_all(norse_gods);
    cout << "\n";

    print_all(greek_gods);
    cout << "\n";

}
int main() {
    try {

        vector<string> strings(5, "1");
        string s = strings.at(2);
        cout << s << endl;
    } catch (exception &e) {

        cerr << e.what();
        return 1;
    }
    return 0;
}

