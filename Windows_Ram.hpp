
#pragma once

#include <windows.h>

namespace pankey{

	namespace System{

		namespace Hardware{

			long long getFreeRam() {
				MEMORYSTATUSEX memInfo{};
				memInfo.dwLength = sizeof(memInfo);

				if (!GlobalMemoryStatusEx(&memInfo)) {
					return -1;
				}

				return static_cast<long long>(memInfo.ullAvailPhys);
			}

			long long getTotalRam() {
				MEMORYSTATUSEX memInfo{};
				memInfo.dwLength = sizeof(memInfo);

				if (!GlobalMemoryStatusEx(&memInfo)) {
					return -1;
				}

				return static_cast<long long>(memInfo.ullTotalPhys);
			}
		}

	}

}