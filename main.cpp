#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int reverseNum(int n){
    int rev = n;
    n = 0;
    while(rev){
        n += rev % 10;
        n *= 10;
        rev /= 10;
    }
    n /= 10;
    return n;
}

int binoct(int n){
    int nOct = 0;
    int i = 0;
    while(n) {
        if (i == 3) {
            i = 0;
            nOct *= 10;
        }
        if (n % 10 == 1 || n == 1) {
            nOct += pow(2, i);
        }
        i++;
        n /= 10;
    }
    return reverseNum(nOct);
}

int bindec(int n){
    int nDec = 0;
    int i = 0;
    while(n){
        if(n%10 == 1){
            nDec += pow(2, i);
        }
        n /= 10;
        ++i;
    }
    return nDec;
}
/* *****************************************   IN PROGRESS  *********************************************************
void binhex(int n){
    while(n){
        cout << bindec(n%10000);
        n /= 10000;
    }
}
*******************************************************************************************************************/
long long octbin(int n){
    long long nBin = 1;
    while(n){
        switch(n%10){
            case 0: nBin += 000;
                    break;
            case 1: nBin += 001;
                    break;
            case 2: nBin += 010;
                    break;
            case 3: nBin += 011;
                    break;
            case 4: nBin += 100;
                    break;
            case 5: nBin += 101;
                    break;
            case 6: nBin += 110;
                    break;
            case 7: nBin += 111;
                    break;
        }
        nBin *= 1000;
        n /= 10;
    }
    return reverseNum(nBin);
}

long long decbin(int n){
    long long nBin = 0;
    while(n){
        nBin += n%2;
        nBin*=10;
        n/=2;
    }
    nBin /= 10;
    return nBin;
}

int decoct(int n){
    int nBin = decbin(n);
    n = binoct(nBin);
    return n;
}

int main()
{
    string type;
    int n;
    cout << "Insert what type of conversion you want to make(binoct, bindec, binhex, octbin, octdec, octhex, decbin, decoct, dechex, hexbin, hexoct, hexdec): ";
    cin >> type;
    cout << "Insert the number you want to convert: ";
    cin >> n;
    if(type == "binoct"){
        cout << binoct(n);
    } else if(type == "bindec"){
        cout << bindec(n);
    }else if(type == "binhex"){
        cout << "Ai ales binhex";
    }else if(type == "octbin"){
        cout << octbin(n);
    }else if(type == "octdec"){
        cout << "Ai ales octdec";
    }else if(type == "octhex"){
        cout << "Ai ales octhex";
    }else if(type == "decbin"){
        cout << decbin(n);
    } else if(type == "decoct"){
        cout << decoct(n);
    }else if(type == "dechex"){
        cout << "Ai ales dechex";
    }else if(type == "hexbin"){
        cout << "Ai ales hexbin";
    }else if(type == "hexoct"){
        cout << "Ai ales hexoct";
    }else if(type == "hexdec"){
        cout << "Ai ales hexdec";
    }
    return 0;

}
