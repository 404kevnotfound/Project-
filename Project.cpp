//This program will give information about the well-being of a infant. 
//Created by Kevin Puga on September 5th, 2016.
#include <iostream>
#include <string> 
#include <fstream> 


using namespace std;

void gender (string &) ;
void age() ; 
void firstmonth() ; 
void displayMonthone () ;
void displayMonththree () ; 
void displayMonthseven () ;  
void displayMonthtdoce () ; 
void moreInfo1 () ; 
void moreInfo2 () ; 
void moreInfo3 () ; 
void moreInfo4 () ; 
void disclaimer () ; 
void Bonus () ; 
void Books () ; 
void ResourcesMenu () ; 
void Bandura () ; 
void Erik () ; 

int main(int argc, char *argv[])


{
		int menuOption = 0 ; 

	do
		{
			cout <<"\t WELCOME TO BABY STEPS" << endl ; 
			cout <<"\t Please Select one of our options." << endl ; 
			string gender1 = "" ; 
			cout << "\t 1) Development " << endl ; 
			cout << "\t 2) Bonus " << endl ; 
			cout << "\t 3) Press to stop" << endl ; 
			cin >> menuOption ; 
			cin.ignore() ; 
			if(menuOption == 1 )
			{
				gender(gender1) ;
				cout << endl ; 
				
			}
				
				else if (menuOption == 2)
					{
						Bonus() ; 
						cout << endl ;  
					}
			
		}
		while(menuOption != 3) ;
}

//------Void Functions---------

void gender(string &gender1)

{
	string Gender = "" ; 
	cout << "What is the gender?(F for Female, M for Male) : " << endl ; 
	getline(cin,Gender) ; 

	if(Gender == "M" || Gender == "m")
	{
		age() ; 
		cout << endl ; 
	}else 
		if(Gender == "f" || Gender == "F")
		{
			age() ;
			cout << endl ; 
		}
		else 
			{
				cout << "You will be rerouted to the Main Menu. " << endl ; 
				cout << endl ; 
			}
	 
}

void age() 
{
	int age1 ; 
	cout << "What is the current age(in months)? " << endl ; 
	cin >> age1 ; 
	cin.ignore() ; 
	cout << endl ; 
	bool loop = false ; 
	while(loop == false )
	{

		if(age1 == 1 || age1 == 2)
		{
			displayMonthone() ; 
			loop = true ; 
			cout << endl ; 
		}
		else if(age1 == 3)
		{
			displayMonththree() ;
			loop = true ; 
			cout << endl ; 
		}
		else if (age1 == 4 || age1 == 5 || age1 == 6 || age1 == 7)
		{
			displayMonthseven() ; 
			loop = true ;
			cout << endl ; 
		}
		else if(age1 == 8 || age1 == 9 ||  age1 == 10 || age1 == 11 || age1 == 12)
		{
			displayMonthtdoce() ; 
			loop = true ; 
			cout << endl ; 
		}else if(age1 > 13)
		{
			cout << "Sorry We haven't gone that far in our research. Please come back later. " << endl ; 
			loop = true ; 
		}
	}
	
}

void displayMonthone () 
{
	string firstInfo = "" ; 
	string flags = "" ; 

	ifstream in1Month ; 
	in1Month.open("1month.txt") ; 
	bool done = false; 
	if(in1Month.is_open() && done == false)
		
		{
			cout << endl ; 
			getline(in1Month, firstInfo, '#') ; 
			getline(in1Month,flags) ; 
			cout << "This is what your child can do : "<< endl ; 
			cout << firstInfo << endl ; 
			cout << "These are some red flags: " << endl ; 
			cout << flags << endl ;
			moreInfo1 () ; 
			cout << endl ; 
			 
			
			
		}else 
		{
			cout<< "There was a error please try again." << endl ; 
		}
	
}

void moreInfo1 ()
{
	int y = 0 ; 
	string moreInfo = "" ; 
	cout << endl ; 
	cout << "For more information about this please press 1.Anything else to go back to the main menu. " << endl ; 
	cin >> y ; 
	cin.ignore() ; 
	
	ifstream inMoreinfo1 ; 
	inMoreinfo1.open("moreInfo1.txt") ;
	bool open = false ; 
	
	if(y == 1 && inMoreinfo1.is_open() && open == false) 
	{
		cout << endl ; 
		getline(inMoreinfo1, moreInfo, '#') ; 
		cout << moreInfo << endl ; 
		open = true ; 
		cout << endl ; 
		disclaimer () ;
		
	}
	else 
		
		cout << "Error 404 not found" << endl ; 
	
}

void displayMonththree () 
{
	string firstInfo = "" ; 
	string flags = "" ; 

	ifstream in3Month ; 
	in3Month.open("moreInfo3.txt") ; 
	bool done = false; 
	if(in3Month.is_open() && done == false)
		
		{
			cout << endl ; 
			getline(in3Month, firstInfo, '#') ; 
			getline(in3Month,flags) ; 
			cout << "This is what your child can do : "<< endl ; 
			cout << firstInfo << endl ; 
			cout << "These are some red flags: " << endl ; 
			cout << flags << endl ;
			moreInfo2() ;
			cout << endl ;  
			
			
		}else 
		{
			cout<< "There was a error please try again." << endl ; 
			
		}
	
}

void moreInfo2 ()
{
	int y = 0 ; 
	string moreInfo = "" ; 
	cout << endl ; 
	cout << "For more information about this please press 1.Anything else to go back to the main menu. " << endl ; 
	cin >> y ; 
	cin.ignore() ; 
	
	ifstream inMoreinfo2 ; 
	inMoreinfo2.open("skillBuilder1.txt") ;
	bool open = false ; 
	
	if(y == 1 && inMoreinfo2.is_open() && open == false) 
	{
		cout << endl ; 
		getline(inMoreinfo2, moreInfo, '#') ; 
		cout << moreInfo << endl ; 
		open = true ; 
		disclaimer () ;
	}
	else 
		
		cout << "Error 404 not found" << endl ; 
		cout << endl ; 
}

void displayMonthseven () 
{

	string firstInfo = "" ; 
	string flags = "" ; 

	ifstream in47month ; 
	in47month.open("moreInfo47.txt") ; 
	bool done = false; 
	if(in47month.is_open() && done == false)
		
		{
			cout << endl ; 
			getline(in47month, firstInfo, '#') ; 
			getline(in47month,flags) ; 
			cout << "This is what your child can do : "<< endl ; 
			cout << firstInfo << endl ; 
			cout << "These are some red flags: " << endl ; 
			cout << flags << endl ;
			moreInfo3() ;
			cout << endl ;  
			
			
		}else 

			cout<< "There was a error please try again." << endl ; 
			
		
}

void moreInfo3 () 

{
	int y = 0 ; 
	string moreInfo = "" ; 
	cout << endl ; 
	cout << "For more information about this please press 1.Anything else to go back to the main menu. " << endl ; 
	cin >> y ; 
	cin.ignore() ; 
		
	ifstream inMoreinfo3 ; 
	inMoreinfo3.open("skillBuilder2.txt") ;
	bool open = false ; 
		
	if(y == 1 && inMoreinfo3.is_open() && open == false) 
		{
			cout << endl ; 
			getline(inMoreinfo3, moreInfo, '#') ; 
			cout << moreInfo << endl ; 
			open = true ; 
			disclaimer () ;
			
		}
		else 
		{
			cout << "Error 404 not found" << endl ; 
			cout << endl ; 
		}
	
}

void displayMonthtdoce () 
{
	string firstInfo = "" ; 
	string flags = "" ; 

	ifstream in12month ; 
	in12month.open("moreInfo712.txt") ; 
	bool done = false; 
	if(in12month.is_open() && done == false)
		
		{
			cout << endl ; 
			getline(in12month, firstInfo, '#') ; 
			getline(in12month,flags) ; 
			cout << "This is what your child can do : "<< endl ; 
			cout << firstInfo << endl ; 
			cout << "These are some red flags: " << endl ; 
			cout << flags << endl ;
			moreInfo4() ;
			cout << endl ;  
			
			
		}else 

			cout<< "There was a error please try again." << endl ; 
}

void moreInfo4 () 
{
	int y = 0 ; 
	string moreInfo = "" ; 
	cout << endl ; 
	cout << "For more information about this please press 1.Anything else to go back to the main menu. " << endl ; 
	cin >> y ; 
	cin.ignore() ; 
		
	ifstream inMoreinfo4 ; 
	inMoreinfo4.open("skillBuilder4.txt") ;
	bool open = false ; 
		
	if(y == 1 && inMoreinfo4.is_open() && open == false) 
		{
			cout << endl ; 
			getline(inMoreinfo4, moreInfo, '#') ; 
			cout << moreInfo << endl ; 
			open = true ; 
			disclaimer () ;
			
		}
		else 
		{
			cout << "Error 404 not found" << endl ; 
			cout << endl ; 
		}
}

void disclaimer () 
{
	string disclosure = "" ; 
	
	ifstream inDis ; 
	inDis.open("dis.txt") ; 
	
	bool open = false ; 
	
	if(inDis.is_open()) 
	{
		getline(inDis, disclosure, '#') ;
		cout << endl ; 
		cout << disclosure << endl ; 
		cout << endl ;

		
		
	}else 
	cout << "Error Occurred Please try again" << endl ; 
	
}

void Bonus ()
{
	int menu = 0 ;
	 
	cout << "1) Childrens Books" << endl ;
	cout << "2) Resources for children" << endl ; 
	cout << "What would you like to go into? " << endl ; 
	cin >> menu ; 
	cin.ignore() ; 
	bool stop = false ; 
	
	while(menu < 3 && menu >0 && stop == false)
	{
		if(menu == 1) 
		{
			Books() ; 
			stop = true ; 
		}else if(menu == 2)
		{
			ResourcesMenu() ; 
			stop = true ; 
		}
	}
}

void Books () 
{
	cout << "This is are some great books to read with children." << endl ; 
	string books = "" ; 
	
	ifstream inBook ;
	inBook.open("books.txt") ; 
 	bool stop = false ; 
	
	if(inBook.is_open() && stop == false)
	{
		getline(inBook, books, '#') ;
		cout << endl ; 
		cout << books << endl ; 
		stop = true ; 
	}else 
	cout << "File wasn't open correctly. Please try again." << endl ; 
		


}

void ResourcesMenu() 
{
	int menu = 0 ; 
	cout << "Here are some of the great Theories for Behavior, and learning." << endl ; 
	cout << "Please select one for more information. : " << endl ; 
	cout << endl ; 
	cout << "1)Erik Erikson" << endl ; 
	cout << "2)Albert Bandura" << endl ; 
	cin >> menu ; 
	cin.ignore() ; 
	
	if(menu == 1) 
	{
		cout << "Here are some of Erik's Ideas :" << endl ;
		Erik () ; 
		cout << endl ; 

	}else if (menu == 2)
	{
		cout << "Here are some of Badura's Ideas : " << endl ; 
		Bandura() ; 
		cout << endl ; 
		
	}
	else 
	{
		cout << "Incorrect Number. Please try again." << endl ; 
	}
	
}

void Bandura () 

{
	string Bard = "" ; 
	ifstream inBardo ; 
	inBardo.open("bandura.txt") ;
	bool stop = false ; 
	if(inBardo.is_open() && stop == false) 
	{
		getline(inBardo,Bard, '#') ; 
		cout << endl ; 
		cout << Bard << endl ; 
		cout << endl ; 
		stop = true ; 
	}else 
	cout << "404 Link Not Found" << endl ;
	
	
}


void Erik () 
{
	string ericko = "" ; 
	ifstream inErik ; 
	inErik.open("erik.txt") ; 
	bool stop = false ; 
	if(inErik.is_open() && stop == false )
	{
		getline(inErik, ericko, '#') ; 
		cout << endl ; 
		cout << ericko << endl ; 
		stop = true ; 
		
	}else 
		cout<< "404 Not Found" << endl ; 	
}