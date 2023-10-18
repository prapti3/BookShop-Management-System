#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>

using namespace std;

class book_data{
    private:
    char Books_number[30];
    char Book_Name[50];
    char Author_Name[20];
    int No_Copies;

    public:
    // function for getting the details of book
    void Get_BookDetails(){
        cout<<"\nENTER DETAILS OF YOUR DESIRED BOOK WHICH YOU WANT TO PURCHASE\n";
        cout<<"\nEnter The Book's Number: ";
        cin>>Books_number;
        cout<<"\nEnter Book's Name: ";
        cin.getline(Book_Name,50);
        //after taking number as input using cin it ignores the next getline line
        //to overcome this and get out of the buffer we using .ignore() to read getline string 
        cin.ignore();
        cin.getline(Author_Name,50);
        // used to flush or clear the (stream) output buffer of the stream
        // used to clear the buffer 
        // and accept the next string 
        fflush(stdin);
        cout<<"\nEnter No. Of Copies of the desired book:"
        cin>>No_Copies;
    }

    void Show_Book_Data(){
        cout<<"\nBook Number: "<<books_number;
        cout<<"\nBook Name: "<<Book_Name;
        cout<<"\nAuthor's Name: "<<Author_Name;
        cout<<"\nCOPIES: "<<No_Copies;
                
        
            }
}

int main(){


    return 0;
}