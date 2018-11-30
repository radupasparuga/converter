#include <iostream>
#include <string>
using namespace std;

int binoct(int n){
    n = n % 1000;
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
        cout << "Ai ales bindec";
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
