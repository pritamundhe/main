#include<iostream>
#include<fstream>
using namespace std;

class Book{
    private:
    int BookID;
    char title[20];
    int price;

    public:
    void getBookRecord(){
        cout<<"Enter book ID : ";
        cin>>BookID;
        cin.ignore();
        cout<<"Enter the title of the book : ";
        cin.getline(title,19);
        cout<<"Enter Book Price : ";
        cin>>price;
    }
    void ShowRecord(){
        cout<<"\n"<<BookID<<"  "<<title<<"  "<<price;
    }
    void StoreRecord();
    void ReadRecord();
};
void Book::StoreRecord(){
    ofstream fout;
    fout.open("File.txt",ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void Book::ReadRecord(){
    ifstream fin;
    fin.open("File.txt",ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof()){
        ShowRecord();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}
int main(){
    Book B1;
    B1.getBookRecord();
    B1.ShowRecord();
    B1.StoreRecord();
    B1.ReadRecord();
    return 0;
}