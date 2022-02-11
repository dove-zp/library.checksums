/**
 * \brief crc.sample - carious crc algorithms sample
 * \author dove-zp
 * \contact https://github.com/dove-zp
 * \version 31/JULY/2018
 * \license GNU Lesser General Public License v3 (LGPL-3.0)
 */

#include "crc.h"

#include <string>
#include <iostream>

//--------------------------------------------------------------------------------------------------

using namespace hash::crc;

//--------------------------------------------------------------------------------------------------

void main()
{
    std::string krnl32 = "kernel32.dll";

    std::cout << "value: " << krnl32 << std::endl << std::endl;

    //--------------------------------------------------------------------------

    std::cout << "RAM CRC8: " <<
    std::hex <<
    (int)crc8::ram::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM CRC8: " <<
    std::hex <<
    (int)(crc8::rom::calculate((void *)krnl32.c_str(), krnl32.length())) <<
    std::endl;

    std::cout << "ROM META CRC8: " <<
    std::hex << 
    (int)(crc8::rom::meta::calculate(krnl32.c_str())) <<
    std::endl;

    std::cout << "ROM TPL CRC8: " <<
    std::hex << 
    (int)(crc8::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value) <<
    std::endl << std::endl;

    //--------------------------------------------------------------------------

    std::cout << "RAM CRC16: " <<
    std::hex <<
    crc16::ram::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM CRC16: " <<
    std::hex <<
    crc16::rom::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM META CRC16: " <<
    std::hex << 
    crc16::rom::meta::calculate(krnl32.c_str()) <<
    std::endl;

    std::cout << "ROM TPL CRC16:  " <<
    std::hex << 
    crc16::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value <<
    std::endl << std::endl;

    //--------------------------------------------------------------------------

    std::cout << "RAM CRC32: " <<
    std::hex << 
    crc32::ram::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM CRC32: " <<
    std::hex <<
    crc32::rom::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM META CRC32: " <<
    std::hex << 
    crc32::rom::meta::calculate(krnl32.c_str()) <<
    std::endl;

    std::cout << "ROM TPL CRC32: " <<
    std::hex << 
    crc32::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value <<
    std::endl << std::endl;

    //--------------------------------------------------------------------------

    std::cout << "RAM CRC64: " <<
    std::hex << 
    crc64::ram::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM CRC64: " <<
    std::hex <<
    crc64::rom::calculate((void *)krnl32.c_str(), krnl32.length()) <<
    std::endl;

    std::cout << "ROM META CRC64: " <<
    std::hex << 
    crc64::rom::meta::calculate(krnl32.c_str()) <<
    std::endl;

    std::cout << "ROM TPL CRC64:  " <<
    std::hex << 
    crc64::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value <<
    std::endl << std::endl;

    system("pause");
}