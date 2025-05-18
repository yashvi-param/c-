int main(){

    Studentlist list;
    int choice;
    

    while(choice != 0){
        cout << endl << "--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl ;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:             
                  list.addStudent(); 
            break;
            case 2: 
                    list.displayStudents(); 
            break;
            case 3: 
                    list.removeStudentId(); 
             break;
            case 4: 
                
                   list.searchStudentId(); 
            break;
            case 5: 
                    cout << "Exiting program." << endl; 
            break;
            default: 
                    cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
   
    return 0;
}