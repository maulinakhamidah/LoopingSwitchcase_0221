#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int counter;
    int i;
    int perulanganwhile = 0;
    int perulanganDo = 0;

    //loop with for
    //loop for ascending
    for(counter = 0; counter < 5; counter++){
        cout << "nilai counter = " << counter << " TI UMY " << endl;

    }
    cout << "nilai counter terakhir = " << counter << endl;
    cout << endl;

    //loop with while
    srand(time(0));
    i = rand() % 10;

    cout << "nilai awal i" << i << endl;
    while (i < 7)
{
    cout << "nilai i = " << i << " TI UMY" << endl;
    i = rand() % 10;
    perulanganwhile++;
}
    cout << "jumlah perulangan = " << "perulanganWhile" << endl;
    cout << "nilai akhir i = " << i << endl;

    cout << endl;

    //loop do while
    cout << "Perulangan Do While"<< endl;
    do
    {
        cout << "nilai i = " << i << " TI UMY" << endl;
        i = rand() % 10;
        perulanganDo++;
    } while (i < 7);
    cout << "jumlah perulangan = " << perulanganDo << endl;
    cout << "nilai akhir 1 = " << i << endl;

}



     
   
    

