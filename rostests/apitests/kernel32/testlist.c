#define __ROS_LONG64__

#define STANDALONE
#include <apitest.h>

extern void func_Console(void);
extern void func_CreateProcess(void);
extern void func_DefaultActCtx(void);
extern void func_DeviceIoControl(void);
extern void func_dosdev(void);
extern void func_FindActCtxSectionStringW(void);
extern void func_FindFiles(void);
extern void func_GetComputerNameEx(void);
extern void func_GetCurrentDirectory(void);
extern void func_GetDriveType(void);
extern void func_GetModuleFileName(void);
extern void func_interlck(void);
extern void func_LoadLibraryExW(void);
extern void func_lstrcpynW(void);
extern void func_lstrlen(void);
extern void func_Mailslot(void);
extern void func_MultiByteToWideChar(void);
extern void func_PrivMoveFileIdentityW(void);
extern void func_SetConsoleWindowInfo(void);
extern void func_SetCurrentDirectory(void);
extern void func_SetUnhandledExceptionFilter(void);
extern void func_TerminateProcess(void);
extern void func_TunnelCache(void);
extern void func_WideCharToMultiByte(void);

const struct test winetest_testlist[] =
{
    { "ConsoleCP",                   func_Console },
    { "CreateProcess",               func_CreateProcess },
    { "DefaultActCtx",               func_DefaultActCtx },
    { "DeviceIoControl",             func_DeviceIoControl },
    { "dosdev",                      func_dosdev },
    { "FindActCtxSectionStringW",    func_FindActCtxSectionStringW },
    { "FindFiles",                   func_FindFiles },
    { "GetComputerNameEx",           func_GetComputerNameEx },
    { "GetCurrentDirectory",         func_GetCurrentDirectory },
    { "GetDriveType",                func_GetDriveType },
    { "GetModuleFileName",           func_GetModuleFileName },
    { "interlck",                    func_interlck },
    { "LoadLibraryExW",              func_LoadLibraryExW },
    { "lstrcpynW",                   func_lstrcpynW },
    { "lstrlen",                     func_lstrlen },
    { "MailslotRead",                func_Mailslot },
    { "MultiByteToWideChar",         func_MultiByteToWideChar },
    { "PrivMoveFileIdentityW",       func_PrivMoveFileIdentityW },
    { "SetConsoleWindowInfo",        func_SetConsoleWindowInfo },
    { "SetCurrentDirectory",         func_SetCurrentDirectory },
    { "SetUnhandledExceptionFilter", func_SetUnhandledExceptionFilter },
    { "TerminateProcess",            func_TerminateProcess },
    { "TunnelCache",                 func_TunnelCache },
    { "WideCharToMultiByte",         func_WideCharToMultiByte },
    { 0, 0 }
};

