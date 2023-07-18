#include <iostream>
#include <Windows.h>

//You need some basic knowledge of programming to get this to work.
//You also need some basic knowledge of memory editing to get this to work.

using namespace std;

int hacking_template()
{
  HWND twin = FindWindowA(NULL, "Window to hack");
  if (twin == NULL)
  {
    cout << "ERROR! Window not found!" << endl;
    hacking_template();
  }
  else
  {
    DWORD pId;
    GetWindowThreadProcessId(twin, &pId);
    HANDLE hwin = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pId);
    if (pId == NULL)
    {
      cout << "ERROR! Process not found!" << endl;
      hacking_template();
    }
    else
    {
      int newvalue = PUT NEW VALUE FOR MEMORY ADDRESS HERE;
      WriteProcessMemory(hwin, (LPVOID)0x00PUTYOURMEMORYADDRESSHERE, &newvalue, sizeof(newvalue), 0);
    }
  }
  
  return 0;
}

int main()
{
  hacking_template();
  
  return 0;
}
