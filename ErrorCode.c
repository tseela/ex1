#include "ErrorCode.h"
#include <stdio.h>

bool error_isSuccess(ErrorCode code) {
    if (code == ERROR_SUCCESS)
        return true;
    return false;
}

const char* error_getErrorMessage(ErrorCode code) {

}
