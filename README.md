# C83Os

## Os and Os Environment identification macros for C and C++

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

<br>

Example of use
```c
    printf("OS test\n\r");
    printf("\n\r");

    printf("C83OS_VERSION()       = %ld\n\r", C83OS_VERSION());
    printf("\n\r");

    printf("First OS              = %d\n\r", OS_AIX);
    printf("First OS NAME         = %s\n\r", OS_AIX_NAME);
    printf("\n\r");

    printf("Last OS               = %d\n\r", OS_ZVM);
    printf("Last OS NAME          = %s\n\r", OS_ZVM_NAME);
    printf("\n\r");

    printf("Current OS            = %d\n\r", OS);
    printf("Current OS NAME       = %s\n\r", OS_NAME);
    printf("\n\r");

    printf("First OS ENV          = %d\n\r", OS_ENV_BSD);
    printf("First OS ENV NAME     = %s\n\r", OS_ENV_BSD_NAME);
    printf("\n\r");

    printf("Last OS ENV           = %d\n\r", OS_ENV_WINDU);
    printf("Last OS ENV NAME      = %s\n\r", OS_ENV_WINDU_NAME);
    printf("\n\r");

    printf("Current OS ENV        = %d\n\r", OS_ENV);
    printf("Current OS ENV NAME   = %s\n\r", OS_ENV_NAME);
    printf("\n\r");
```

Another example of use OS
```c
    #if OS == 0
        #error "Unknown os"
    #endif

    #if OS == OS_WINDOWS
        ...
        Windows code
        ...
    #elif OS == OS_LINUX
        ...
        Linux code
        ...
    #else
        ...
        other code
        ...
    #endif
```

Another example of use OS_ENV
```c
    #if OS_ENV == 0
        #error "Unknown os environment"
    #endif
 
    #if OS_ENV == OS_ENV_BSD
        ...
        Bsd environment code
        ...
    #elif OS_ENV == OS_ENV_LINUX
        ...
        Linux environment code
        ...
    #else
        ...
        other code
        ...
    #endif
```

# Note:
It is completely impossible to fully test all os combinations, 
so this library is not fully tested. If you have any improvements, 
please feel free to contact me.


# Updates
2025 10 30 Os.h renamed to POs.h<br>
2025 10 30 OsEnv renamed to POsEnv.h<br>
<br>
2025 11 02 Detailed description<br>
<br>
