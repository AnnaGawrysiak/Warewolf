/*Stw�rz klas� bazow� Human i klas� bazow� Wolf. Obie klasy zawieraj� w sobie publiczn� metod� Speak kt�ra drukuje na ekran
d�wi�k odpowiedni dla cz�owieka i dla wilka. Stw�rz klas� Werewolf, kt�ra r�wnie� ma w sobie metod� Speak, a jej wywo�anie
spowoduje wy�wietlenie na ekran zar�wno d�wi�ku cz�owieka, jak i wilka. Uwaga! trzeba w odpowiedni spos�b wywo�a� te metody,
nie chodzi tutaj o przepisanie ich zawarto�ci */

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
