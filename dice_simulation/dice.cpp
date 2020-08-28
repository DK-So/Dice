#include<iostream>
#include<random>
#include<time.h>

using namespace std;

int main()
{
    // Variables 
    int dicnmb = 0; //decision Number
    int rndnmb; //random number

    /* initialize random seed */ 

    srand(time(NULL));

    do
    {
        /* generate dice number */
      rndnmb = rand() % 7;
      cout << "\033[1;36m" << rndnmb <<  "\033[0m"<< endl;
      cout << "Do you want to roll the dice again? 1/Yes 0/No" << endl;
      cin >>  dicnmb;
    }while (dicnmb == 1);
      cout << "Farewell!" << endl;
    return 0;


}
