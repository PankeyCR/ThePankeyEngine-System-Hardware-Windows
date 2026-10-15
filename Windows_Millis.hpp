#pragma once

#include <chrono>

namespace pankey{

	namespace System{

		namespace Hardware{

			long long millis() {
			return std::chrono::duration_cast<
				std::chrono::milliseconds
			>(
				std::chrono::steady_clock::now().time_since_epoch()
			).count();
			}

		}

	}

}