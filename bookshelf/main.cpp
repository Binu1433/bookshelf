#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system ("chcp 1251");
	//����� ������
	int mode = -1;
	//�����
	vector<Bookshelf> bshelfs;
	BookShelf bshelf; //������ ����
	while(mode!=0){//mode = 0 - �����
	   cout<<"-=���� =- "<<end1;
	   cout<<"1.�������� ����."<<end1;
	   cout<<"2.�������� ����� � ����."<<end1;
	   cout<<"3.�������� �����."<<end1;
	   cout<<"4.����� �� �����."<<end1;
	   cout<<"o. �����."<<end1;
	   cout<<"������� ����� � ������� <ENTER:";
	   	cin>>mode;
	   	switch(mode){
	   		case 0 continue; //���������� �������� �����
	   		case 1: //�������� ����
	   		
	   		bshelfs.push_back(bshelf);
	   		cout<<"���� ��������!"<<end1<<end1;
	   		break;
	   	    case 2://�������� ����� � ����
	   		if(bshelfs.size(>0)){//�������� �� ������� ������
	   		    cout<<"�������� "<<bshelfs.size()<<"������ "<<end1;
	   		    cout<<"������� ����� ����� (�� 1 �� "<<bshelfs.size()<<"):";
	   		    int n = 0;
	   		    cin>>n;
	   		    if(n>0 && n<=bshelfs.size()){//�������� �� ������������ ��������
	   		    bshelfs[n-1].addShelf();
	   		    cout<<"����� ���������"<<end1<<end1;
	   		    }else{
	   		    	cout<<"������ � ������ ������ ��������� "<<end1<<end1;
				   }else{
				   	cout<<"��������� ����� ����������!"<<end1<<end1:
				   }
				   break;
				   case 3: //�������� �����
				   break;
	   		    
				   }
				   
	   		    
			   }
			   cout<<"����!";
			   return 0;
		   }
	}
	

}
