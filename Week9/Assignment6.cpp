//The Book class needs to store the book title, authors, and date of publication as strings.
//Implement parametric constructors depending on which attributes are inputted; anything not inputted is set to “n/a.”

#include <iostream>
using namespace std;


class Book
{
    private:
    string title, authors, date;
    
    public:
    Book(string intitle, string inauthors, string indate)
    //Initializes the title, authors, and date
    {
        cout << "Constructor with everything inputted\n";
        title = intitle;
        authors = inauthors;
        date = indate;
    }

    Book(string intitle, string inauthors)
    //Initializes the title, authors
    //Date kept as n/a
    {
        cout << "Constructor with title and authors inputted\n";
        title = intitle;
        authors = inauthors;
        date = "n/a";
    }

    Book(string intitle)
    //Initialize the title
    //Author and date as n/a
    {
        cout << "Constructor with title inputted\n";
        title = intitle;
        authors = "n/a";
        date = "n/a";
    }

    Book()
    //Default, everything initialized as n/a
    {
        cout << "Default constructor: no inputs\n";
        title = "n/a";
        authors = "n/a";
        date = "n/a";
    }
    
    void display(){
        cout << "Book Title: " << title << endl << "Authors: " << authors << endl << "Publication Date: " << date << endl << endl;
    }

};

int main()
{
    Book firstbook("FirstTitle", "Bob deMorgan", "1970");
    firstbook.display();

    Book secondbook("Music Theory", "Beethovan");
    secondbook.display();

    Book thirdbook("The Dictionary");
    thirdbook.display();

    Book fourthbook;
    fourthbook.display();

    return 0;
}