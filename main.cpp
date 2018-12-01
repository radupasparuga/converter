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
        cout << "Ai ales octbin";
    }else if(type == "octdec"){
        cout << "Ai ales octdec";
    }else if(type == "octhex"){
        cout << "Ai ales octhex";
    }else if(type == "decbin"){
        cout << "Ai ales decbin";
    } else if(type == "decoct"){
        cout << "Ai ales decoct";
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
