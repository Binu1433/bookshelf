#indef book_h
#define book_h

#include<iostream>
#include <string>
#include <vector>
#include "Shelf.h"
#include "PrintBook.h"

using namespace std;
class Bookshelf {
	protected:
		vector <shelf> shelfs;
		public:
			void addBook (PrintBook pb, int shelf_id)
			if (shelf_id<shelf.size()-1) {
				Shelfs[shelf_id].addBook (pb);
			}else {
				cout<<"Error in shelf ID \ n";
			}
			
PrintBook getBook(int shelf_id, int book_id){
	if (shelf_id<shelf.size()-1
	){
			shelfs[shelf_id].getBook (book_id);
				}else{
					cout<<"Error in shelf ID \n;";
					PrintBook pb;
					return pb;
				}
				void Addshelf(){
				Shelf shelf;
				Shelf.push_back(shelf);		
	
}	
void Print(){
	cout<<"BookShelf info: "<<shelfs.size()<<": \n"
	shelfs[i].Print(;)
}		
		
};
