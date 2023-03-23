
/*
Meta Perm Spoofer by tagged#1337
Thank you for boosting!
*/


#include <iostream>
#include <Windows.h>
#include <string>
#include "color.hpp"
#include "driver.hpp"
#include "xorstr.h"
#include <thread>
#include "other.h"
#include "auth.hpp"

std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);

// LeProxy has been here
#define LeProxy 0xSelfLeaker

DWORD fortnitechkk(LPVOID in) {

	while (1) {
		if (GetAsyncKeyState(NULL) & 1) {

		}
		else
		{
			fortnitechk();
		}



	}
}

struct slowly_printing_string {
	std::string data;
	long int delay;
};

std::ostream& operator<<(std::ostream& out, const slowly_printing_string& s) {
	for (const auto& c : s.data) {
		out << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
	}
	return out;
}

void clear()
{
	system(E("cls"));
}

using namespace std;

int main()
{

	ShowWindow(GetConsoleWindow(), SW_SHOW);
	system(E("color 6"));
	SetConsoleTitle(E(L"Meta Permanent Unban"));
	CreateThread(NULL, NULL, fortnitechkk, NULL, NULL, NULL);

    mainn:
	ShowWindow(GetConsoleWindow(), SW_SHOW);
	clear();
	std::cout << dye::purple("\n Meta Permanent Unban");
	std::cout << dye::purple("\n tagged#1337");
	cout << dye::white("\n\n");
	std::cout << dye::purple("\n Press F4 To Spoof - Random Serials");
	std::cout << dye::purple("\n Press F5 To Spoof - Custom Serials");
	std::cout << dye::purple("\n Press F6 To Check Serials");
	cout << dye::white("\n\n");
	std::cout << dye::purple("\n Process can take some minutes");
	std::cout << dye::purple("\n Be patient...");

	while (true)
	{
		if (GetAsyncKeyState(VK_F4) & 1) {
			Beep(500, 500);
			Spoof::Random();
			system(E("start https://discord.gg/notdtc"));
			std::cout << dye::purple("\n Your PC Will Auto Restart in 10 Seconds");
			std::cout << dye::purple("\n DON'T CLICK ANYTHING");;
			system("C:\\Windows\\System32\\shutdown /r /t 10");
		}

		if (GetAsyncKeyState(VK_F5) & 1) {
			Beep(500, 500);
			Spoof::Custom();
			system(E("start https://discord.gg/notdtc"));
			std::cout << dye::purple("\n Your PC Will Auto Restart in 10 Seconds");;
			std::cout << dye::purple("\n DON'T CLICK ANYTHING");;
			system("C:\\Windows\\System32\\shutdown /r /t 10");
		}

		if (GetAsyncKeyState(VK_F6) & 1) {
			Beep(500, 500);
			Check::checker();
			system(E("start https://discord.gg/notdtc"));
			goto mainn;
		}
	}

	return main();
}
