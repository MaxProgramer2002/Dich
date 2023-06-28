//
// Board.hpp
//
//  Created on: Nov 29, 2017
//      Author: Alexander
//

#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <DroneDevice/MemoryRegion.hpp>
#include <DroneDevice/Stubs/MockMemoryInterface.hpp>

template<typename Flash, typename Eeprom = Device::MockMemoryInterface>
struct Board {
	Board() = delete;
	Board(const Board &) = delete;
	Board &operator=(const Board &) = delete;

	static constexpr uintptr_t kSpecOffset     = 134346752;
	static constexpr size_t kSpecSize          = 0;
	static constexpr uintptr_t kEepromOffset   = 134346752;
	static constexpr size_t kEepromSize        = 2048;
	static constexpr uintptr_t kFirmwareOffset = 134217728;
	static constexpr size_t kFirmwareSize      = 129024;
	static constexpr uintptr_t kRamOffset      = 536870912;
	static constexpr size_t kRamSize           = 16384;

	using FirmwareRegion = Device::MemoryRegion<Flash, kFirmwareOffset, kFirmwareSize, true, false>;
	using SpecRegion = Device::MemoryRegion<Flash, kSpecOffset, kSpecSize, true, false>;
	using EepromRegion = Device::MemoryRegion<Eeprom, kEepromOffset, kEepromSize, true, true>;
};

#endif // BOARD_HPP_
