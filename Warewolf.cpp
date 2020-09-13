/*Stwórz klasê bazow¹ Human i klasê bazow¹ Wolf. Obie klasy zawieraj¹ w sobie publiczn¹ metodê Speak która drukuje na ekran
dŸwiêk odpowiedni dla cz³owieka i dla wilka. Stwórz klasê Werewolf, która równie¿ ma w sobie metodê Speak, a jej wywo³anie
spowoduje wyœwietlenie na ekran zarówno dŸwiêku cz³owieka, jak i wilka. Uwaga! trzeba w odpowiedni sposób wywo³aæ te metody,
nie chodzi tutaj o przepisanie ich zawartoœci */

#include <iostream>

using namespace std;

class Human
{
int wzrost;
string kolor_oczu;

public:
   void Speak()
   {
      cout<< "Hello World!";
   }

   Human(int wzrost_ = 0, string kolor_oczu_= "brazowy")
   {
       wzrost = wzrost_;
       kolor_oczu = kolor_oczu_;
   }

};


class Wolf
{
    string kolor_siersci;
    float dlugosc_klow;

public:
    void Speak()
   {
      cout<< "Auuuuuu!";
   }

 Wolf (string kolor_siersci_ = "bialy", float dlugosc_klow_ = 6.7)
    {
     kolor_siersci = kolor_siersci_;
     dlugosc_klow = dlugosc_klow_;
    }

};

class Warewolf : public Human, public Wolf
{
int wiek_transformacji;

public:
    Warewolf (int _wzrost = 0, string _kolor_oczu= "brazowy", string _kolor_siersci = "bialy", float _dlugosc_klow = 6.7, int _wiek_transformacji = 28)
    :Human (_wzrost, _kolor_oczu),
    Wolf (_kolor_siersci, _dlugosc_klow)
    {
       wiek_transformacji = _wiek_transformacji;
    }

    void Speak()
    {
        Human::Speak();
        Wolf::Speak();
    }

};

int main()
{
   Warewolf Lupus;

   Lupus.Speak();

    return 0;
}
