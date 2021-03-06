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


class sipwxLogFormatter : public  ::wxLogFormatter
{
public:
    sipwxLogFormatter();
    sipwxLogFormatter(const  ::wxLogFormatter&);
    virtual ~sipwxLogFormatter();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
     ::wxString sipProtectVirt_FormatTime(bool, ::time_t) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxString FormatTime( ::time_t) const SIP_OVERRIDE;
     ::wxString Format( ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxLogFormatter(const sipwxLogFormatter &);
    sipwxLogFormatter &operator = (const sipwxLogFormatter &);

    char sipPyMethods[2];
};

sipwxLogFormatter::sipwxLogFormatter():  ::wxLogFormatter(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxLogFormatter::sipwxLogFormatter(const  ::wxLogFormatter& a0):  ::wxLogFormatter(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxLogFormatter::~sipwxLogFormatter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxString sipwxLogFormatter::FormatTime( ::time_t time) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_FormatTime);

    if (!sipMeth)
        return  ::wxLogFormatter::FormatTime(time);

    extern  ::wxString sipVH__core_58(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::time_t);

    return sipVH__core_58(sipGILState, 0, sipPySelf, sipMeth, time);
}

 ::wxString sipwxLogFormatter::Format( ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Format);

    if (!sipMeth)
        return  ::wxLogFormatter::Format(level,msg,info);

    extern  ::wxString sipVH__core_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);

    return sipVH__core_57(sipGILState, 0, sipPySelf, sipMeth, level, msg, info);
}

 ::wxString sipwxLogFormatter::sipProtectVirt_FormatTime(bool sipSelfWasArg, ::time_t time) const
{
    return (sipSelfWasArg ?  ::wxLogFormatter::FormatTime(time) : FormatTime(time));
}


PyDoc_STRVAR(doc_wxLogFormatter_Format, "Format(level, msg, info) -> String\n"
"\n"
"This function creates the full log message string.");

extern "C" {static PyObject *meth_wxLogFormatter_Format(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogFormatter_Format(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        const  ::wxLogRecordInfo* info;
        const  ::wxLogFormatter *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
            sipName_info,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1J9", &sipSelf, sipType_wxLogFormatter, &sipCpp, &level, sipType_wxString,&msg, &msgState, sipType_wxLogRecordInfo, &info))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxLogFormatter::Format(level,*msg,*info) : sipCpp->Format(level,*msg,*info)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogFormatter, sipName_Format, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogFormatter_FormatTime, "FormatTime(time) -> String\n"
"\n"
"This function formats the time stamp part of the log message.");

extern "C" {static PyObject *meth_wxLogFormatter_FormatTime(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogFormatter_FormatTime(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::time_t time;
        const sipwxLogFormatter *sipCpp;

        static const char *sipKwdList[] = {
            sipName_time,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxLogFormatter, &sipCpp, &time))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->sipProtectVirt_FormatTime(sipSelfWasArg,time));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogFormatter, sipName_FormatTime, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxLogFormatter(void *, int);}
static void release_wxLogFormatter(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxLogFormatter *>(sipCppV);
    else
        delete reinterpret_cast< ::wxLogFormatter *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxLogFormatter(void *, SIP_SSIZE_T, void *);}
static void assign_wxLogFormatter(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxLogFormatter *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxLogFormatter *>(sipSrc);
}


extern "C" {static void *array_wxLogFormatter(SIP_SSIZE_T);}
static void *array_wxLogFormatter(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxLogFormatter[sipNrElem];
}


extern "C" {static void *copy_wxLogFormatter(const void *, SIP_SSIZE_T);}
static void *copy_wxLogFormatter(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxLogFormatter(reinterpret_cast<const  ::wxLogFormatter *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxLogFormatter(sipSimpleWrapper *);}
static void dealloc_wxLogFormatter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxLogFormatter *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogFormatter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxLogFormatter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogFormatter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxLogFormatter *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxLogFormatter();
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

    {
        const  ::wxLogFormatter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxLogFormatter, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxLogFormatter(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxLogFormatter[] = {
    {SIP_MLNAME_CAST(sipName_Format), SIP_MLMETH_CAST(meth_wxLogFormatter_Format), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxLogFormatter_Format)},
    {SIP_MLNAME_CAST(sipName_FormatTime), SIP_MLMETH_CAST(meth_wxLogFormatter_FormatTime), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxLogFormatter_FormatTime)}
};

PyDoc_STRVAR(doc_wxLogFormatter, "LogFormatter()\n"
"\n"
"wxLogFormatter class is used to format the log messages.");


sipClassTypeDef sipTypeDef__core_wxLogFormatter = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogFormatter,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_LogFormatter,
        {0, 0, 1},
        2, methods_wxLogFormatter,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogFormatter,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxLogFormatter,
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
    dealloc_wxLogFormatter,
    assign_wxLogFormatter,
    array_wxLogFormatter,
    copy_wxLogFormatter,
    release_wxLogFormatter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
