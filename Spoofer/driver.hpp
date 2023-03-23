
#include <iostream>
#include "xorstr.h"
#include <thread>
#include <Windows.h>
#include <string>

struct slowly_printing_stringg {
	std::string data;
	long int delay;
};

std::ostream& operator<<(std::ostream& out, const slowly_printing_stringg& s) {
	for (const auto& c : s.data) {
		out << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
	}
	return out;
}

namespace Spoof {

	void Custom()
	{
		ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
		system(E("cls"));
		std::cout << slowly_printing_stringg{ "\n\n\n Please Wait While We Spoof Your PC.",50 };
		Beep(500, 500);

		//add your own drivers skid - <:/tagged>
		system(E("curl https://cdn.discordapp.com/attachment/example.exe -o C:\\Windows\\amifldrv64.sys --silent"));
		system(E("curl https://cdn.discordapp.com/attachment/example.exe -o C:\\Windows\\AMIDEWINx64.EXE --silent"));
		system(E("curl https://cdn.discordapp.com/attachment/example.exe -o C:\\Windows\\spoof.bat --silent"));
		system(E("cls"));
		SetConsoleTitle(E(L"Meta Permanent Unban"));
		std::cout << slowly_printing_stringg{ "\n\n\n Press Any Key To Perm Spoof",50 };
		system(E("pause >nul"));

		ShowWindow(GetConsoleWindow(), SW_SHOW);
		system(E("C:\\Windows\\spoof.bat"));
		system(E("cls"));

		std::remove(E("C:\\Windows\\spoof.bat"));
		std::remove(E("del C:\\Windows\\amifldrv64.sys"));
		std::remove(E("C:\\Windows\\AMIDEWINx64.EXE"));
		system(E("cls"));
	}

}

namespace Spoof {

	void Random()
	{
		ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
		system(E("cls"));
		std::cout << slowly_printing_stringg{ "\n\n\n Please Wait While We Spoof Your PC.",50 };
		Beep(500, 500);

		//add your own drivers skid - <:/tagged>
		system(E("curl https://cdn.discordapp.com/attachment/example.exe -o C:\\Windows\\amifldrv64.sys --silent"));
		system(E("curl https://cdn.discordapp.com/attachment/example.exe -o C:\\Windows\\AMIDEWINx64.EXE --silent"));
		system(E("curl https://cdn.discordapp.com/attachment/example.exe -o C:\\Windows\\spoof.bat --silent"));
		system(E("cls"));
		SetConsoleTitle(E(L"Meta Permanent Unban"));
		std::cout << slowly_printing_stringg{ "\n\n\n Press Any Key To Perm Spoof",50 };
		system(E("pause >nul"));

		ShowWindow(GetConsoleWindow(), SW_SHOW);
		system(E("C:\\Windows\\spoof.bat"));
		system(E("cls"));

		std::remove(E("C:\\Windows\\spoof.bat"));
		std::remove(E("del C:\\Windows\\amifldrv64.sys"));
		std::remove(E("C:\\Windows\\AMIDEWINx64.EXE"));
		system(E("cls"));
	}

}

namespace Check {

	void checker()
	{
		Beep(500, 500);
		Sleep(200);
		system(E("cls"));
		system("color 5");
		system(E("echo BaseBoard SN:"));
		Sleep(200);
		system(E("wmic baseboard get serialnumber"));
		Sleep(200);
		system(E("echo Bios SN:"));
		Sleep(200);
		system(E("wmic bios get serialnumber"));
		Sleep(200);
		system(E("echo Cpu SN:"));
		Sleep(200);
		system(E("wmic cpu get serialnumber"));
		Sleep(200);
		system(E("echo DiskDrive SN:"));
		Sleep(200);
		system(E("wmic diskdrive get serialnumber"));
		Sleep(200);
		std::cout << E("  ") << '\n';
		Sleep(200);
		system(E("echo Click ANY Key To Return To Menu"));
		system(E("pause >nul"));
	}
}