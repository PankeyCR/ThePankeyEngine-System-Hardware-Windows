#pragma once

#include <windows.h>

namespace pankey{

	namespace System{

		namespace Hardware{

			void sleep(long a_milliseconds){
				if (a_milliseconds > 0) {
					::Sleep(static_cast<DWORD>(a_milliseconds));
				}
			}

		}

	}

}