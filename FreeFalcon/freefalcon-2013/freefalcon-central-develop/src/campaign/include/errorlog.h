// ======================
// Error Reporting System
// ======================

// -----------------
// User Descriptions
// -----------------

// ---------------------------------------
// Type and External Function Declarations
// ---------------------------------------

#define LogErrorsToScreen "ScreenErrors"
#define ImmediateErrors   TRUE
#define QueueErrors       FALSE

typedef enum {ErrorReportingError,
              ProgramInitFailure,
              SystemInitFailure,
              ModuleInitFailure,
              FileOpenFailure,
              ADTUseageError,
              SystemLevelFailure,
              SystemUseageError,
              ModuleLevelFailure,
              ModuleUseageError
             }
SystemErrorCode;

extern void InitSystemErrors(char* LogFileName, unsigned char ImmediateReports);

extern void ReportSystemError(SystemErrorCode C, char* ErrorText);

extern void ProcessSystemErrors(void);
