#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;

    struct hitung{
    	char check[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    	int jumlah[52]={0};
    };
	
	hitung alphabeth;

	cout<<"Sang Putu Febri Wira Pratama"<<endl;
    cout<<"1808561012"<<endl;
    cout<<"============================\n"<<endl;
	char x;
    file.open("string.txt");
	
    int i=0;
    while(!file.eof()){
        file.get(x);
        for(int a=0;a<52;a++){
            if(x == alphabeth.check[a]){
                alphabeth.jumlah[a]++;
            }
        }
        i++;
    }
	
    for(int i=0;i<52;i++){
        if(alphabeth.jumlah[i]!=0){
            cout<<"Huruf "<<alphabeth.check[i]<<" = "<<alphabeth.jumlah[i]<<endl;
        }
    }

    return 0;
}
