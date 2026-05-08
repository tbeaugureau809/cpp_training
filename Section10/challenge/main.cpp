#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string message {};
    string encrypted_message{};
    string cracked_message{};

    cout<<"Enter your super secret message: ";
    getline(cin,message);

    for (size_t i = 0; i <message.length(); i++)
    {
        //main idea is going to be cycling through the original message. It will then use the current character it is on to find
        //the proper character in the string alphabet, and depending on that place it will then subsitute the message into the same 
        //spot in the encription key. This way the same logic can also be used to revert to the old message as well. 

        //CURRENT PLACE, it works for simple one word messages. Must now calibrate it so that it works with sentences or spaces. 
        
        cout<<"interation: "<<alphabet.find(message[i])<<"."<<endl;
        int temp = alphabet.find(message[i]);
        encrypted_message = encrypted_message + key[temp];
        
    }
    for (size_t i = 0; i <encrypted_message.length(); i++)
    {   
        cout<<alphabet.find(encrypted_message[i])<<"."<<endl;
        int temp = key.find(encrypted_message[i]);
        cracked_message = cracked_message + alphabet[temp];
        
    }
    cout<<"\nRegular Message = "<<message<<endl;
    cout<<"Encrypted: "<<encrypted_message<<endl;
    cout<<"Cracked: "<<cracked_message<<endl;

}