#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
   return   m*39.37;
}


int main()
{
    cout<< " ~~~~PROGRAM KTORY PRZELICA METRY NA CALE~~~~\n\nPodaj ile metrow mam przeliczyc:" ;
    cin>> metry;

    cout<< "To bedzie :" <<ile_cali(metry) <<" cali" << endl;
    return 0;

}
