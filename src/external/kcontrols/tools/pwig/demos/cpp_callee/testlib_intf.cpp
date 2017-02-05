// ************************************************************************
// This file contains common interface for both the caller and the callee.
// -------
// WARNING
// -------
// This file was generated by PWIG. Do not edit.
// File generated on 4.1.2017 17:40:15

// Library properties:
// Name: TestLib
// Version: 1.0
// GUID: F3C093C0-035B-4C33-BB28-C1FDE270D3B5
// Description: Test library

#include <string>
#include "stdafx.h"
#include "stdint.h"
#include "testlib_intf.h"

// Library helper functions
std::string String2LibUtf8String(std::wstring AText)
{
  size_t length = WideCharToMultiByte(CP_UTF8, 0, AText.c_str(), -1, NULL, 0, NULL, NULL) + 1;
  char * buff = new char[length];
  WideCharToMultiByte(CP_UTF8, 0, AText.c_str(), -1, buff, (int)length, NULL, NULL);
  std::string Result(buff);
  delete buff;
  return Result;
}

std::wstring LibUtf8String2String(std::string AText)
{
  size_t length = MultiByteToWideChar(CP_UTF8, 0, AText.c_str(), -1, NULL, 0) + 1;
  wchar_t * buff = new wchar_t[length];
  MultiByteToWideChar(CP_UTF8, 0, AText.c_str(), -1, buff, (int)length);
  std::wstring Result(buff);
  delete buff;
  return Result;
}

int32_t LibMin(int32_t a, int32_t b)
{
  if (a <= b)
    return a;
  else
    return b;
}

int32_t LibMax(int32_t a, int32_t b)
{
  if (a >= b)
    return a;
  else
    return b;
}


