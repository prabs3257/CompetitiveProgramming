#include <iostream>
#include <string>

using namespace std;

class Publication{
    public:
    string title;
    float price;

};

class Book: public Publication{
    public:
    int pageCount;

    void get_data()
    {
        cout<<"Enter the title of the book"<<endl;
        getline(cin,this->title);
        

        cout<<"Enter the price of the book"<<endl;
        cin>>this->price;

        cout<<"enter the page count"<<endl;
        cin>>this->pageCount;

        cin.clear();
        cin.sync();
    }

    void put_data()
    {
        cout<<"The title of the book is "<<title<<endl;
        cout<<"The price of the book is "<<price<<endl;
        cout<<"The page count of the book is "<<pageCount<<endl;
    }
};

class Audio: public Publication{
    public:
    float playTime;

    void get_data()
    {
        cout<<"Enter the title of the cassette"<<endl;
        getline(cin,this->title);

        cout<<"Enter the price of the cassette"<<endl;
        cin>>this->price;

        cout<<"Enter the play time in minutes"<<endl;
        cin>>this->playTime;

        cin.clear();
        cin.sync();
    }
    void put_data()
    {
        cout<<"The title of the cassette is "<<title<<endl;
        cout<<"The price of the cassette is "<<price<<endl;
        cout<<"The play time of the cassette is "<<playTime<<endl;
    }
};

int main()
{
    Book b1;
    b1.get_data();
    b1.put_data();

    Audio c1;
    c1.get_data();
    c1.put_data();

    b1.put_data();

    // string a;
    // getline(cin, a);
    // cout<<a;
    // getline(cin, a);
    // cout<<a;
    
}