//
// Version.hpp
//
//  Created on: Nov 29, 2017
//      Author: Alexander
//

#ifndef VERSION_HPP_
#define VERSION_HPP_

#include <DroneDevice/CoreTypes.hpp>

struct Version {
	Version() = delete;
	Version(const Version &) = delete;
	Version &operator=(const Version &) = delete;

	static constexpr uint8_t kHwMajor = 1;
	static constexpr uint8_t kHwMinor = 1;

	static constexpr uint8_t kSwMajor = ;
	static constexpr uint8_t kSwMinor = ;
	static constexpr uint32_t kSwHash = static_cast<uint32_t>(0x);
	static constexpr uint32_t kSwRevision = ;

	static const char kName[];
	static const Device::Version kVersion;
};

#endif // VERSION_HPP_
