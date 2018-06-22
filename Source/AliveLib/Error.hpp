#pragma once

#include "FunctionFwd.hpp"

EXPORT int CC Error_DisplayMessageBox_4F2C80(const char* msg, int lineNum, const char* formatStr, ...);
EXPORT void CC Error_PushErrorRecord_4F2920(const char* pSourceFileName, int lineNumber, int minusOne, const char* errMsg);
void CC Error_NullPrint_4F28C0(const char* msg);
void CC Error_NullPrint_4F28D0(const char* msg);
