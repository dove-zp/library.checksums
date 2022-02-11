# Library 
## CRCs

A collection of CRC algorithms. The goal is to create a small and portable library for common crcs without heavily focusing on additional programming weight. The library is a small sub library from my personal hash library.

## Example

```cpp
#include "crc.h"

#include <string>
#include <iostream>

using namespace hash::crc;

std::string krnl32 = "kernel32.dll";
std::cout << "value: " << krnl32 << std::endl << std::endl;

unsigned __int32 crc8__ram  = (unsigned __int32)
                              (crc8::ram::calculate((void *)krnl32.c_str(), krnl32.length()));
unsigned __int32 crc8__     = (unsigned __int32)
                              (crc8::rom::calculate((void *)krnl32.c_str(), krnl32.length()));
unsigned __int32 crc8__meta = (unsigned __int32)
                              (crc8::rom::meta::calculate(krnl32.c_str()));
unsigned __int32 crc8__tpl  = (unsigned __int32)
                              (crc8::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value);

std::cout << "RAM CRC8:       " << std::hex << crc8__ram << std::endl;
std::cout << "ROM CRC8:       " << std::hex << crc8__ << std::endl;
std::cout << "ROM META CRC8:  " << std::hex << crc8__meta << std::endl;
std::cout << "ROM TPL CRC8:   " << std::hex << crc8__tpl << std::endl << std::endl;

unsigned __int16 crc16__ram  = crc16::ram::calculate((void *)krnl32.c_str(), krnl32.length());
unsigned __int16 crc16__     = crc16::rom::calculate((void *)krnl32.c_str(), krnl32.length());
unsigned __int16 crc16__meta = crc16::rom::meta::calculate(krnl32.c_str());
unsigned __int16 crc16__tpl  = crc16::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value;

std::cout << "RAM CRC16:      " << std::hex << crc16__ram << std::endl;
std::cout << "ROM CRC16:      " << std::hex << crc16__ << std::endl;
std::cout << "ROM META CRC16: " << std::hex << crc16__meta << std::endl;
std::cout << "ROM TPL CRC16:  " << std::hex << crc16__tpl << std::endl << std::endl;

unsigned __int16 crc32__ram  = crc32::ram::calculate((void *)krnl32.c_str(), krnl32.length());
unsigned __int32 crc32__     = crc32::rom::calculate((void *)krnl32.c_str(), krnl32.length());
unsigned __int32 crc32__meta = crc32::rom::meta::calculate(krnl32.c_str());
unsigned __int32 crc32__tpl  = crc32::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value;

std::cout << "RAM CRC32:      " << std::hex << crc32__ram << std::endl;
std::cout << "ROM CRC32:      " << std::hex << crc32__ << std::endl;
std::cout << "ROM META CRC32: " << std::hex << crc32__meta << std::endl;
std::cout << "ROM TPL CRC32:  " << std::hex << crc32__tpl << std::endl << std::endl;

unsigned __int16 crc64__ram  = crc64::ram::calculate((void *)krnl32.c_str(), krnl32.length());
unsigned __int64 crc64__     = crc64::rom::calculate((void *)krnl32.c_str(), krnl32.length());
unsigned __int64 crc64__meta = crc64::rom::meta::calculate(krnl32.c_str());
unsigned __int64 crc64__tpl  = crc64::rom::tpl::calculate<'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l'>::value;

std::cout << "RAM CRC64:      " << std::hex << crc64__ram << std::endl;
std::cout << "ROM CRC64:      " << std::hex << crc64__ << std::endl;
std::cout << "ROM META CRC64: " << std::hex << crc64__meta << std::endl;
std::cout << "ROM TPL CRC64:  " << std::hex << crc64__tpl << std::endl << std::endl;
```

## License

This project is licensed under the [LGPL (Version 3)](https://tldrlegal.com/license/gnu-lesser-general-public-license-v3-(lgpl-3)). See the [LICENSE.md](./LICENSE.md) file for details.

<!--  -->

## Feedback

I welcome your constructive input - both negative and positive. I will continue to try to provide updates when able. At some point you may find errors, inconsistencies, or methods that could be improved, or are missing altogether. Your feedback is critical to help improve future revisions.

The best way to reach out is by opening a new issue in this repository:

https://github.com/dove-zp/library.crcs/issues

Please be sure to refer to what your situation is when giving feedback and if possible link the topic in question.

Many thanks.

<hr/>

<p align="center">
  <p align="center">
    <a href="https://hits.seeyoufarm.com/api/count/graph/dailyhits.svg?url=https://github.com/dove-zp/library.crcs">
      <img src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2Fdove-zp%2Flibrary.crcs&count_bg=%2379C83D&title_bg=%23555555&icon=&icon_color=%23E7E7E7&title=hits&edge_flat=true" alt="repository hits">
    </a>
    <a href="https://github.com/dove-zp/library.crcs/releases">
      <img src="https://img.shields.io/github/downloads/dove-zp/library.crcs/total?style=flat-square" alt="downloads"/>
    </a>
    <a href="https://github.com/dove-zp/library.crcs/graphs/contributors">
      <img src="https://img.shields.io/github/contributors/dove-zp/library.crcs?style=flat-square" alt="contributors"/>
    </a>
    <a href="https://github.com/dove-zp/library.crcs/watchers">
      <img src="https://img.shields.io/github/watchers/dove-zp/library.crcs?style=flat-square" alt="watchers"/>
    </a>
    <a href="https://github.com/dove-zp/library.crcs/stargazers">
      <img src="https://img.shields.io/github/stars/dove-zp/library.crcs?style=flat-square" alt="stars"/>
    </a>
    <a href="https://github.com/dove-zp/library.crcs/network/members">
      <img src="https://img.shields.io/github/forks/dove-zp/library.crcs?style=flat-square" alt="forks"/>
    </a>
  </p>
</p>

<p align="center">
  <a href="https://github.com/dove-zp">
    <img width="64" heigth="64" src="https://avatars.githubusercontent.com/u/89095890" alt="dove-zp"/>
  </a>  
</p>