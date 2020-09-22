#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system ("chcp 1251");
	//Режим работы
	int mode = -1;
	//Шкафы
	vector<Bookshelf> bshelfs;
	BookShelf bshelf; //Пустой шкаф
	while(mode!=0){//mode = 0 - Выход
	   cout<<"-=МЕНЮ =- "<<end1;
	   cout<<"1.Добавить шкаф."<<end1;
	   cout<<"2.Добавить полку в шкаф."<<end1;
	   cout<<"3.Добавить книгу."<<end1;
	   cout<<"4.Вывод на экран."<<end1;
	   cout<<"o. Выход."<<end1;
	   cout<<"Введите номер и нажмите <ENTER:";
	   	cin>>mode;
	   	switch(mode){
	   		case 0 continue; //Прекращает имерацию цикла
	   		case 1: //Добавить шкаф
	   		
	   		bshelfs.push_back(bshelf);
	   		cout<<"Шкаф добавлен!"<<end1<<end1;
	   		break;
	   	    case 2://Добавить полку в шкаф
	   		if(bshelfs.size(>0)){//Проверка на наличие шкафов
	   		    cout<<"Доступно "<<bshelfs.size()<<"шкафов "<<end1;
	   		    cout<<"Введите номер шкафа (от 1 до "<<bshelfs.size()<<"):";
	   		    int n = 0;
	   		    cin>>n;
	   		    if(n>0 && n<=bshelfs.size()){//Проверка на допустимость значения
	   		    bshelfs[n-1].addShelf();
	   		    cout<<"Полка добавлена"<<end1<<end1;
	   		    }else{
	   		    	cout<<"Ошибка в номере шкафаю Повторите "<<end1<<end1;
				   }else{
				   	cout<<"Доступные шкафы отсуствуют!"<<end1<<end1:
				   }
				   break;
				   case 3: //Добавить книгу
				   break;
	   		    
				   }
				   
	   		    
			   }
			   cout<<"Пока!";
			   return 0;
		   }
	}
	

}
