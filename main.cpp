#include <iostream>
#include <string>

using namespace std;

class Microorganisms{
    public:
     Microorganisms(const string& name) : name(name) {}

     void introduction(){
        cout << "名前：" << this->name << endl;
     }

    private:
     string name;
};

class Prokaryotes: public Microorganisms{
    public:
     Prokaryotes(const string& name, bool gram_positive): Microorganisms(name), gram_positive(gram_positive) {}
     
     void about_nuclear(){
        if(this->gram_positive){
            cout << "gram_positive\n";
        }
        else{
            cout << "gram_negative\n";
        }
        cout << "no_nuclear\n";
        cout << "bacteria" << endl;
     }
    private:
     bool gram_positive;
};

class Eukaryotes: public Microorganisms{
    public:
     Eukaryotes(const string& name, bool gram_positive): Microorganisms(name), gram_positive(gram_positive) {}

     void about_nuclear(){
        if(this->gram_positive){
            cout << "gram_positive\n";
        }
        else{
            cout << "gram_negative\n";
        }
        cout << "have_nuclear\n";
        cout << "eukaryotes" << endl;
     }
    private:
     bool gram_positive;
};

int main(){
    Prokaryotes microorganisms1 = Prokaryotes("E.coli", false);
    microorganisms1.introduction();
    microorganisms1.about_nuclear();
    Prokaryotes microorganisms2 = Prokaryotes("Lactobacillus", true);
    microorganisms2.introduction();
    microorganisms2.about_nuclear();
    Eukaryotes microorganisms3 = Eukaryotes("S.cerevisiae", true);
    microorganisms3.introduction();
    microorganisms3.about_nuclear();

    return 0;
}