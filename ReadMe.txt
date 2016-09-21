Synopsis
——————————————————
This Program is to provide simple information about a childs well being. 

Code Example
——————————————————
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

Motivation
——————————————————
It was to inspire parent to look knowledge else where int he world. Books are amazing, but what if we can just have the information with a few clicks?


Installation
———————————————————
Get CodeRunner. Unzip the files, select the one name project.cpp, and open it up. Then hit run. 
Additional: Please move all txt file into the same folder you will be running the .cpp in. Otherwise program will not run. 


API Reference
———————————————————

None for now. 


Tests
————————————————————
We ran multiple times with different information, to make sure we got the same conclusion.


Contributors
————————————————————

None for now. 



