#include <iostream>
using namespace std;

class Microorganisms{
    public:
     Microorganisms(char* name){
        this->name = name;
     }
     void introduction(){
        cout << "名前：" << this->name << endl;
     }
    private:
     char* name;
};

class Prokaryotes: public Microorganisms{
    public:
     Prokaryotes(char* name, bool gram_positive): Microorganisms(name){
        this->gram_positive = gram_positive;
     }
     void about_nuclear(){
        if(this->gram_positive){
            cout << "gram_positive" << endl;
            cout << "no_nuclear" << endl;
            cout << "bacteria" << endl;
        }
        else{
            cout << "gram_negative" << endl;
            cout << "no_nuclear" << endl;
            cout << "bacteria" << endl;
        }
     }
    private:
     bool gram_positive;
};

class Eukaryotes: public Microorganisms{
    public:
     Eukaryotes(char* name, bool gram_positive): Microorganisms(name){
        this->gram_positive = gram_positive;
     }
     void about_nuclear(){
        if(this->gram_positive){
            cout << "gram_positive" << endl;
            cout << "have_nuclear" << endl;
            cout << "eukaryotes" << endl;
        }
        else{
            cout << "gram_negative" << endl;
            cout << "have_nuclear" << endl;
            cout << "eukaryotes" << endl;
        }
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