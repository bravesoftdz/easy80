// ************************************************************************
// This file contains common interface for both the caller and the callee.
// -------
// WARNING
// -------
// This file was generated by PWIG. Do not edit.
// File generated on 5.1.2017 11:12:02

#ifndef TESTLIB_INTF_H
#define TESTLIB_INTF_H

// Library properties:
// Name: TestLib
// Version: 1.0
// GUID: F3C093C0-035B-4C33-BB28-C1FDE270D3B5
// Description: Test library

#include <string>
#include "stdafx.h"
#include "stdint.h"

#define LIB_GUID "F3C093C0-035B-4C33-BB28-C1FDE270D3B5"

// Base class for all wrapper classes:
class BaseTestLib
{
  public:
  virtual ~BaseTestLib() {};
};

// Forward declarations:
typedef int64_t IProject;
typedef int64_t IProjectGroup;
typedef int64_t IProjectGroupEvents;

// Enumerated type properties:
// Name: TRetCode
// GUID: 810C7D96-27EE-44A8-BA21-5161FF01BFA0
// Description: Library return code

typedef enum
{
  rcOk = 0,
  rcError = 1
} TRetCode;

// Enumerated type properties:
// Name: TErrorCode
// GUID: 6B90024F-AE26-42D4-8F6A-8BDA2EE69EF1
// Description: Log message code

typedef enum
{
  errError = 0,
  errWarning = 1,
  errNote = 2,
  errHint = 3
} TErrorCode;

// Enumerated type properties:
// Name: TProgressEvent
// GUID: 19B84FC3-1B2C-4E0C-A9F1-4B35EEA625BA
// Description: Progress event code

typedef enum
{
  peStart = 0,
  peAdvance = 1,
  peStop = 2
} TProgressEvent;

// Enumerated type properties:
// Name: TBool
// GUID: 6C87BDB8-1CE8-40DE-92CF-41C853A63453
// Description: Library return code

typedef enum
{
  bFalse = 0,
  bTrue = 1
} TBool;

// Alias type properties:
// Name: TApplicationHandle
// GUID: 6F9B4493-91C4-446A-8CBA-D55D05D11754
// Description: Application handle

typedef int64_t TApplicationHandle;

// Alias type properties:
// Name: TDataPtr
// GUID: D687E02D-F3F1-49C9-84C9-2E11749B6412
// Description: Pointer to array of bytes

typedef uint8_t * TDataPtr;

// Interface type properties:
// Name: IProject
// GUID: 2CDCBC7C-2760-479E-B07B-3C2C8C61A61C
// Description: Dispatch interface for Project Object
// Dual interface (COM only)
// OLE automation interface (COM only)

// Methods:
typedef bool (__cdecl *TIProjectConnect)(IProject ItemHandle);
typedef bool (__cdecl *TIProjectDisconnect)(IProject ItemHandle);
typedef bool (__cdecl *TIProjectLoadFromFile)(IProject ItemHandle, char * Path, TBool & Result);
typedef bool (__cdecl *TIProjectSaveToFile)(IProject ItemHandle, char * Path, TBool & Result);
// Properties:
typedef bool (__cdecl *TGetIProjectConnectionFRC)(IProject ItemHandle, int32_t & Value);
typedef bool (__cdecl *TGetIProjectConnectionString)(IProject ItemHandle, char * Value, int32_t &Length__Value);

// Interface type properties:
// Name: IProjectGroup
// GUID: 935120E2-A9E0-4B06-98AE-4EE58DA9036E
// Description: Dispatch interface for ProjectGroup Object
// Dual interface (COM only)
// OLE automation interface (COM only)

// Methods:
typedef bool (__cdecl *TIProjectGroupAddProject)(IProjectGroup ItemHandle, IProject & Project);
typedef bool (__cdecl *TIProjectGroupRunPeriodic)(IProjectGroup ItemHandle);
typedef bool (__cdecl *TIProjectGroupFinalize)(IProjectGroup ItemHandle);
// Properties:

// Interface type properties:
// Name: IProjectGroupEvents
// GUID: 08199EC9-1D26-442A-BE88-7B953C71EC7E
// Description: Events interface for ProjectGroup Object

// Methods:
typedef bool (__cdecl *TIProjectGroupEventsOnError)(IProjectGroupEvents ItemHandle, TErrorCode ErrorCode, char * ErrorText);
typedef bool (__cdecl *TIProjectGroupEventsOnProgress)(IProjectGroupEvents ItemHandle, TProgressEvent EventCode, int32_t ProgressValue, char * EventText);
// Properties:

// Class properties:
// Name: ProjectGroup
// GUID: 7C12BB43-A6AB-4A52-8B1D-EDD5D94B344B
// Description: ProjectGroup Object

typedef bool (__cdecl *TProjectGroupCreate)(IProjectGroup &ItemHandle);
typedef bool (__cdecl *TProjectGroupDestroy)(IProjectGroup ItemHandle);
typedef bool (__cdecl *TSetProjectGroupIProjectGroupEventsOnError)(IProjectGroup ItemHandle, IProjectGroupEvents EventSink, TIProjectGroupEventsOnError EventHandler);
typedef bool (__cdecl *TSetProjectGroupIProjectGroupEventsOnProgress)(IProjectGroup ItemHandle, IProjectGroupEvents EventSink, TIProjectGroupEventsOnProgress EventHandler);

// Class properties:
// Name: Project
// GUID: D96EA22B-D750-4C05-9F32-8C5C8E9F846D
// Description: Project Object

typedef bool (__cdecl *TProjectCreate)(IProject &ItemHandle);
typedef bool (__cdecl *TProjectDestroy)(IProject ItemHandle);

// Library helper functions
std::string String2LibUtf8String(std::wstring AText);
std::wstring LibUtf8String2String(std::string);

int32_t LibMax(int32_t a, int32_t b);
int32_t LibMin(int32_t a, int32_t b);

#endif TESTLIB_INTF_H