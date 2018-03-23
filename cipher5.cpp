//FCI - Programming1- 2018 - Assignment 2
//program name: simple substitution cipher.cpp
//Last modification date: February 27,2018
//Hanan Mohamed, 20170375, G14
//Teaching Assistant: Eng.Dosoki
//purpose: cipher and decipher by getting a key from user that consists of 5 characters and exchange them with the first 5 characters in plain alphabet, then list down the remaining letters in order.
#include <iostream>

using namespace std;

int main()
{
    string plain = "abcdefghijklmnopqrstuvwxyz";
    string cipher;
    string key;
    string text;
    int choice;
    cout<< "what do you want to do?"<<endl<<"1. cipher"<<endl<<"2.Decipher"<<endl;
    cin>>choice;
    if (choice == 1){
        cout<<"Enter your key"<<endl;
        cin>>key;
        cout<<key<<"";
        for(int i = 0; i<26; i++){
            for(int j = 0 ; j<26; j++){
                if (i == j){
                   if (plain[i] !=key[0] && plain[i] != key[1] && plain[i] != key[2] && plain[i] != key[3] && plain[i] != key[4]){
                     cipher[j] = plain[i];
                     cout<<cipher[j];
                  }
                }
            }
        }
    }


        for(int i = 0; i<26; i++){
            for(int j =0; j<26; j++){
              if (i == j){
                if(plain[i] !=key[0] && plain[i] != key[1] && plain[i] != key[2] && plain[i] != key[3] && plain[i] != key[4]){
                  cipher[0] = key[0];
                  cipher[1] = key[1];
                  cipher[2] = key[2];
                  cipher[3] = key[3];
                  cipher[4] = key[4];
                  cipher[j]=plain[i];
                  cout<<endl;
                  cout<<endl<<"please enter your text"<<endl;
                  cin.get();
                  getline(cin, text);
                  for(int z = 0; z<=text.length()-1;z++){
                     text[z] = cipher[z];
                     cout<<text[z];
	                }
                }
		}
              }
            }

   if (choice ==2){
        cout<<"Enter your key"<<endl;
        cin>>key;
        for(int i = 0; i<26; i++){
            for(int j =0; j<26; j++){
              if (i == j){
                plain[0] = key[0];
                plain[1] = key[1];
                plain[2] = key[2];
                plain[3] = key[3];
                plain[4] = key[4];
                plain[i] = cipher[j];
                cout<<endl<<"please enter your text"<<endl;
                cin.get();
                getline(cin, text);
                for(int z = 0; z<=text.length()-1;z++){
                    text[z] = cipher[z];
                    cout<<text[z];
              }
            }
        }


    }
   }

}








