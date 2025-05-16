#include <iostream>
#include <string>
#include<vector>

using namespace std;

class student{

	public:
	int id;
	string name;
	
	student(int id, string name)
	{
		this->id = id;
		this->name =  name;
	}
};


class studentlist
{
	public:

	vector<student>list;
	
	void addstudent(int id, string name)
	{
		student st(id, name);
		list.push_back(st);
	}
	
	void display()
	{
		for(student ele : list){
			cout << "id: " << ele.id << " name: " << ele.name << endl;
		}
	}
	
	void findstudent(int id )
	{
		for(student ele : list)
		{
			if(ele.id == id)
			{
				cout << "student id: " << id << "name: " << ele.name;
			}
		}
	}


	void removeid(int id )
	{
		for(int i=0; i<list.size(); i++)
		{
			if(list[i].id == id)
			{
				list.erase(list.begin()+i);
			}
		}
		
		cout << "STudent REmoved" << endl;
	}
};


int main(){
	int choice, id;
	string name;
	
	studentlist list;
	
		while(choice != 0){

			cout << endl << endl;
			cout << "press 1 for add students...!" << endl;
			cout << "press 2 for display students....!" << endl;
			cout << "press 3 for find students....!" << endl;
			cout << "press 4 for remove students...!" << endl;
			cout <<" choice ";
			cin >> choice;
			
			switch(choice)
			{
				case 1 : cout <<"id: ";
						 cin >> id;
						 cout << "name: ";
						 cin >> name;
						 list.addstudent(id, name);
						 break;
				case 2 : 
						list.display();
						 break;
				case 3 : 
						cout << "id: ";
						cin >> id;
						list.findstudent(id);
						break;
				case 4 : 
						cout << "remove id: ";
						cin >> id;
						list.removeid(id);
						break;
				default : 
						cout << "invalid...!";
						break;
			}
		}

return 0; 
}