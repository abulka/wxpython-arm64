/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/log.h>

        #include <wx/log.h>
        #include <wx/log.h>
        #include <wx/log.h>


class sipwxLogChain : public  ::wxLogChain
{
public:
    sipwxLogChain( ::wxLog*);
    virtual ~sipwxLogChain();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_DoLogRecord(bool, ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);
    void sipProtectVirt_DoLogTextAtLevel(bool, ::wxLogLevel,const  ::wxString&);
    void sipProtectVirt_DoLogText(bool,const  ::wxString&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Flush() SIP_OVERRIDE;
    void DoLogRecord( ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&) SIP_OVERRIDE;
    void DoLogTextAtLevel( ::wxLogLevel,const  ::wxString&) SIP_OVERRIDE;
    void DoLogText(const  ::wxString&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxLogChain(const sipwxLogChain &);
    sipwxLogChain &operator = (const sipwxLogChain &);

    char sipPyMethods[4];
};

sipwxLogChain::sipwxLogChain( ::wxLog*logger):  ::wxLogChain(logger), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxLogChain::~sipwxLogChain()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxLogChain::Flush()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_Flush);

    if (!sipMeth)
    {
         ::wxLogChain::Flush();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxLogChain::DoLogRecord( ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_DoLogRecord);

    if (!sipMeth)
    {
         ::wxLogChain::DoLogRecord(level,msg,info);
        return;
    }

    extern void sipVH__core_52(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);

    sipVH__core_52(sipGILState, 0, sipPySelf, sipMeth, level, msg, info);
}

void sipwxLogChain::DoLogTextAtLevel( ::wxLogLevel level,const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_DoLogTextAtLevel);

    if (!sipMeth)
    {
         ::wxLogChain::DoLogTextAtLevel(level,msg);
        return;
    }

    extern void sipVH__core_53(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&);

    sipVH__core_53(sipGILState, 0, sipPySelf, sipMeth, level, msg);
}

void sipwxLogChain::DoLogText(const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_DoLogText);

    if (!sipMeth)
    {
         ::wxLogChain::DoLogText(msg);
        return;
    }

    extern void sipVH__core_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_54(sipGILState, 0, sipPySelf, sipMeth, msg);
}

void sipwxLogChain::sipProtectVirt_DoLogRecord(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    (sipSelfWasArg ?  ::wxLog::DoLogRecord(level,msg,info) : DoLogRecord(level,msg,info));
}

void sipwxLogChain::sipProtectVirt_DoLogTextAtLevel(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogTextAtLevel(level,msg) : DoLogTextAtLevel(level,msg));
}

void sipwxLogChain::sipProtectVirt_DoLogText(bool sipSelfWasArg,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogText(msg) : DoLogText(msg));
}


PyDoc_STRVAR(doc_wxLogChain_DoLogRecord, "DoLogRecord(level, msg, info)\n"
"\n"
"Called to log a new record.");

extern "C" {static PyObject *meth_wxLogChain_DoLogRecord(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_DoLogRecord(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        const  ::wxLogRecordInfo* info;
        sipwxLogChain *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
            sipName_info,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1J9", &sipSelf, sipType_wxLogChain, &sipCpp, &level, sipType_wxString,&msg, &msgState, sipType_wxLogRecordInfo, &info))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogRecord(sipSelfWasArg,level,*msg,*info);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_DoLogRecord, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_DoLogTextAtLevel, "DoLogTextAtLevel(level, msg)\n"
"\n"
"Called to log the specified string at given level.");

extern "C" {static PyObject *meth_wxLogChain_DoLogTextAtLevel(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_DoLogTextAtLevel(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogChain *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1", &sipSelf, sipType_wxLogChain, &sipCpp, &level, sipType_wxString,&msg, &msgState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogTextAtLevel(sipSelfWasArg,level,*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_DoLogTextAtLevel, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_DoLogText, "DoLogText(msg)\n"
"\n"
"Called to log the specified string.");

extern "C" {static PyObject *meth_wxLogChain_DoLogText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_DoLogText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogChain *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxLogChain, &sipCpp, sipType_wxString,&msg, &msgState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogText(sipSelfWasArg,*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_DoLogText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_DetachOldLog, "DetachOldLog()\n"
"\n"
"Detaches the old log target so it won't be destroyed when the\n"
"wxLogChain object is destroyed.");

extern "C" {static PyObject *meth_wxLogChain_DetachOldLog(PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_DetachOldLog(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxLogChain *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxLogChain, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->DetachOldLog();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_DetachOldLog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_GetOldLog, "GetOldLog() -> Log\n"
"\n"
"Returns the pointer to the previously active log target (which may be\n"
"NULL).");

extern "C" {static PyObject *meth_wxLogChain_GetOldLog(PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_GetOldLog(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxLogChain *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxLogChain, &sipCpp))
        {
             ::wxLog*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetOldLog();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxLog,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_GetOldLog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_IsPassingMessages, "IsPassingMessages() -> bool\n"
"\n"
"Returns true if the messages are passed to the previously active log\n"
"target (default) or false if PassMessages() had been called.");

extern "C" {static PyObject *meth_wxLogChain_IsPassingMessages(PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_IsPassingMessages(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxLogChain *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxLogChain, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsPassingMessages();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_IsPassingMessages, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_PassMessages, "PassMessages(passMessages)\n"
"\n"
"By default, the log messages are passed to the previously active log\n"
"target.");

extern "C" {static PyObject *meth_wxLogChain_PassMessages(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_PassMessages(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool passMessages;
         ::wxLogChain *sipCpp;

        static const char *sipKwdList[] = {
            sipName_passMessages,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxLogChain, &sipCpp, &passMessages))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->PassMessages(passMessages);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_PassMessages, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogChain_SetLog, "SetLog(logger)\n"
"\n"
"Sets another log target to use (may be NULL).");

extern "C" {static PyObject *meth_wxLogChain_SetLog(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogChain_SetLog(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxLog* logger;
         ::wxLogChain *sipCpp;

        static const char *sipKwdList[] = {
            sipName_logger,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxLogChain, &sipCpp, sipType_wxLog, &logger))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLog(logger);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogChain, sipName_SetLog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxLogChain(void *, const sipTypeDef *);}
static void *cast_wxLogChain(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxLogChain *sipCpp = reinterpret_cast< ::wxLogChain *>(sipCppV);

    if (targetType == sipType_wxLog)
        return static_cast< ::wxLog *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxLogChain(void *, int);}
static void release_wxLogChain(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxLogChain *>(sipCppV);
    else
        delete reinterpret_cast< ::wxLogChain *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxLogChain(sipSimpleWrapper *);}
static void dealloc_wxLogChain(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxLogChain *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogChain(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxLogChain(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogChain(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxLogChain *sipCpp = SIP_NULLPTR;

    {
         ::wxLog* logger;

        static const char *sipKwdList[] = {
            sipName_logger,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8", sipType_wxLog, &logger))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxLogChain(logger);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxLogChain[] = {{308, 255, 1}};


static PyMethodDef methods_wxLogChain[] = {
    {SIP_MLNAME_CAST(sipName_DetachOldLog), meth_wxLogChain_DetachOldLog, METH_VARARGS, SIP_MLDOC_CAST(doc_wxLogChain_DetachOldLog)},
    {SIP_MLNAME_CAST(sipName_DoLogRecord), SIP_MLMETH_CAST(meth_wxLogChain_DoLogRecord), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_DoLogText), SIP_MLMETH_CAST(meth_wxLogChain_DoLogText), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_DoLogTextAtLevel), SIP_MLMETH_CAST(meth_wxLogChain_DoLogTextAtLevel), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_GetOldLog), meth_wxLogChain_GetOldLog, METH_VARARGS, SIP_MLDOC_CAST(doc_wxLogChain_GetOldLog)},
    {SIP_MLNAME_CAST(sipName_IsPassingMessages), meth_wxLogChain_IsPassingMessages, METH_VARARGS, SIP_MLDOC_CAST(doc_wxLogChain_IsPassingMessages)},
    {SIP_MLNAME_CAST(sipName_PassMessages), SIP_MLMETH_CAST(meth_wxLogChain_PassMessages), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxLogChain_PassMessages)},
    {SIP_MLNAME_CAST(sipName_SetLog), SIP_MLMETH_CAST(meth_wxLogChain_SetLog), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxLogChain_SetLog)}
};

sipVariableDef variables_wxLogChain[] = {
    {PropertyVariable, sipName_OldLog, &methods_wxLogChain[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxLogChain, "LogChain(logger)\n"
"\n"
"This simple class allows you to chain log sinks, that is to install a\n"
"new sink but keep passing log messages to the old one instead of\n"
"replacing it completely as wxLog::SetActiveTarget does.");


sipClassTypeDef sipTypeDef__core_wxLogChain = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogChain,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_LogChain,
        {0, 0, 1},
        8, methods_wxLogChain,
        0, SIP_NULLPTR,
        1, variables_wxLogChain,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogChain,
    -1,
    -1,
    supers_wxLogChain,
    SIP_NULLPTR,
    init_type_wxLogChain,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxLogChain,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxLogChain,
    cast_wxLogChain,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
