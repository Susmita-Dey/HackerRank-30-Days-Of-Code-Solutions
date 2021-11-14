/* Question Link:- https://www.hackerrank.com/challenges/30-abstract-classes/problem */

#include <bits\stdc++.h>

using namespace std;

class Book
{
protected:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0;
};

// Write your MyBook class here
class MyBook : public Book
{
public:
    int Price;
    MyBook(string title, string author, int price) : Book(title, author) { Price = price; }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << Price << endl;
    }
};

int main()
{
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
