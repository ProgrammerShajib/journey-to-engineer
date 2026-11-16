#include<bits/stdc++.h>
using namespace std;

class Cricketer{

    public:
        string country;
        int jersey;

    Cricketer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;
    }
};


int main(){

    Cricketer* Sakib = new Cricketer("Sakib", 75);
    Cricketer* Mushfiq = new Cricketer("Bangladesh", 15);
    
    // Mushfiq = Sakib; // it will show the segmentation error .

    // Mushfiq->country = Sakib->country;
    // Mushfiq->jersey = Sakib->jersey;
    delete Sakib;

    cout <<Mushfiq->country << " " << Mushfiq->jersey;
    

    return 0;
}