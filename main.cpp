//ordinare gli array e stampare prima e dopo averli ordinati
#include <iostream>

using namespace std;


void stampaArray(string arNamem[], int arLung[], int MAX){

    cout << "--------------------------------------------" << endl;
    for(int i=0;i<MAX;i++){
        cout << "fiume " << arNamem[i] << " mt=" << arLung[i] << endl;
    }
}

int main()
{


    string arrayName[] = {"Tevere","Po","Arno","Topino","Rubicone"};
    int arrayLunghezza[] = {580,630,460,120,80};
    int MAX_ARRAY = sizeof (arrayName)/ sizeof (string);
    cout << "Ordinamento array" << endl;
    //stampo prima di averli ordinati
    stampaArray(arrayName,arrayLunghezza,MAX_ARRAY);

    //ordina array
    for(int i=0;i<MAX_ARRAY;i++){
        for(int i2=0;i2<MAX_ARRAY;i2++){
            if(arrayLunghezza[i]<arrayLunghezza[i2]){
                int tmp = arrayLunghezza[i];
                arrayLunghezza[i] = arrayLunghezza[i2];
                arrayLunghezza[i2] = tmp;
                string tmp1 = arrayName[i];
                arrayName[i] = arrayName[i2];
                arrayName[i2] = tmp1;
            }
        }
    }

    stampaArray(arrayName,arrayLunghezza,MAX_ARRAY);
    return 0;
}

