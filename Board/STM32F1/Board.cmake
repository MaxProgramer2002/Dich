include(Math)
set(PLATFORM "STM32F1xx")
set(PLATFORM ${PLATFORM} PARENT_SCOPE)

math(EXPR RAM_SIZE "1024 * 6")
math(EXPR ROM_PAGE "1024 * 1")

hex2dec(FIRMWARE_OFFSET 08000000)
math(EXPR FIRMWARE_SIZE "1024 * 30")
hex2dec(SPEC_OFFSET 08007800)
math(EXPR SPEC_SIZE "0")
hex2dec(EEPROM_OFFSET 08007800)
math(EXPR EEPROM_SIZE "1024 * 2")

set(VERSION_HW "0.1")

set(VERSION_HW_NAME "${PROJECT_NAME}")
set(VERSION_SW_NAME "${PROJECT_NAME}")

include_directories("${PROJECT_SOURCE_DIR}/Board/${BOARD}")
file(GLOB_RECURSE BOARD_SOURCE_LIST "${PROJECT_SOURCE_DIR}/Board/${BOARD}/*.cpp")
set(SOURCE_LIST ${SOURCE_LIST} ${BOARD_SOURCE_LIST})

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/Platform/${PLATFORM} ${CMAKE_MODULE_PATH})
include(Platform)

