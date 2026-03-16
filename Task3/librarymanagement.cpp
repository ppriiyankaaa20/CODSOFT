#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Book{
    string title;
    string author;
    int id;
};
vector<Book>library;
void addBook() {
    Book b;
    cout<<"enter Book id:";
    cin>>b.id;
    cin.ignore();

    cout<<"enter title:";
    getline(cin,b.title);

    cout<<"enter Author:";
    getline(cin,b.author);

    library.push_back(b);
}
void viewBooks(){
    cout<<"\nLibrary Books\n";
    for(auto b:library){
        cout<<"id:"<<b.id
        <<"|"<<b.title
        <<"|"<<b.author<<endl;

    }
}
int main(){
    int choice;
    while(true){
        cout<<"\n1.Add Book\n2.View Books\n3.Exit\n";
        cin>>choice;

        if(choice==1)
        addBook();

        else if(choice==2)
        viewBooks();

        else if(choice==3)
        break;

    }
}