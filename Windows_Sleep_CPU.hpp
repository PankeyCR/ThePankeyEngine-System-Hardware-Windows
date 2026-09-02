#pragma once

#include <iostream>
#include <chrono>

namespace pankey{

	namespace System{

		namespace Hardware{

			void sleep(long a_milliseconds){
				return std::chrono::duration_cast<
					std::chrono::milliseconds
				>(
					std::chrono::steady_clock::now().time_since_epoch()
				).count();
			}

		}

	}

}