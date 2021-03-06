/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/stopwatch.h>

    #include <wx/longlong.h>


PyDoc_STRVAR(doc_wxStopWatch_Pause, "Pause()\n"
"\n"
"Pauses the stop watch.");

extern "C" {static PyObject *meth_wxStopWatch_Pause(PyObject *, PyObject *);}
static PyObject *meth_wxStopWatch_Pause(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxStopWatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStopWatch, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Pause();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StopWatch, sipName_Pause, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStopWatch_Resume, "Resume()\n"
"\n"
"Resumes the stop watch which had been paused with Pause().");

extern "C" {static PyObject *meth_wxStopWatch_Resume(PyObject *, PyObject *);}
static PyObject *meth_wxStopWatch_Resume(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxStopWatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStopWatch, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Resume();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StopWatch, sipName_Resume, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStopWatch_Start, "Start(milliseconds=0)\n"
"\n"
"(Re)starts the stop watch with a given initial value.");

extern "C" {static PyObject *meth_wxStopWatch_Start(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStopWatch_Start(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long milliseconds = 0;
         ::wxStopWatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_milliseconds,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|l", &sipSelf, sipType_wxStopWatch, &sipCpp, &milliseconds))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Start(milliseconds);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StopWatch, sipName_Start, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStopWatch_Time, "Time() -> long\n"
"\n"
"Returns the time in milliseconds since the start (or restart) or the\n"
"last call of Pause().");

extern "C" {static PyObject *meth_wxStopWatch_Time(PyObject *, PyObject *);}
static PyObject *meth_wxStopWatch_Time(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStopWatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStopWatch, &sipCpp))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Time();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StopWatch, sipName_Time, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStopWatch_TimeInMicro, "TimeInMicro() -> LongLong\n"
"\n"
"Returns elapsed time in microseconds.");

extern "C" {static PyObject *meth_wxStopWatch_TimeInMicro(PyObject *, PyObject *);}
static PyObject *meth_wxStopWatch_TimeInMicro(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStopWatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStopWatch, &sipCpp))
        {
             ::wxLongLong*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxLongLong(sipCpp->TimeInMicro());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxLongLong,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StopWatch, sipName_TimeInMicro, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxStopWatch(void *, int);}
static void release_wxStopWatch(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxStopWatch *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxStopWatch(void *, SIP_SSIZE_T, void *);}
static void assign_wxStopWatch(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxStopWatch *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxStopWatch *>(sipSrc);
}


extern "C" {static void *array_wxStopWatch(SIP_SSIZE_T);}
static void *array_wxStopWatch(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxStopWatch[sipNrElem];
}


extern "C" {static void *copy_wxStopWatch(const void *, SIP_SSIZE_T);}
static void *copy_wxStopWatch(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxStopWatch(reinterpret_cast<const  ::wxStopWatch *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxStopWatch(sipSimpleWrapper *);}
static void dealloc_wxStopWatch(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxStopWatch(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxStopWatch(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxStopWatch(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxStopWatch *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxStopWatch();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxStopWatch* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxStopWatch, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxStopWatch(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxStopWatch[] = {
    {SIP_MLNAME_CAST(sipName_Pause), meth_wxStopWatch_Pause, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStopWatch_Pause)},
    {SIP_MLNAME_CAST(sipName_Resume), meth_wxStopWatch_Resume, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStopWatch_Resume)},
    {SIP_MLNAME_CAST(sipName_Start), SIP_MLMETH_CAST(meth_wxStopWatch_Start), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStopWatch_Start)},
    {SIP_MLNAME_CAST(sipName_Time), meth_wxStopWatch_Time, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStopWatch_Time)},
    {SIP_MLNAME_CAST(sipName_TimeInMicro), meth_wxStopWatch_TimeInMicro, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStopWatch_TimeInMicro)}
};

PyDoc_STRVAR(doc_wxStopWatch, "StopWatch()\n"
"\n"
"The wxStopWatch class allow you to measure time intervals.");


sipClassTypeDef sipTypeDef__core_wxStopWatch = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxStopWatch,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_StopWatch,
        {0, 0, 1},
        5, methods_wxStopWatch,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxStopWatch,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxStopWatch,
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
    dealloc_wxStopWatch,
    assign_wxStopWatch,
    array_wxStopWatch,
    copy_wxStopWatch,
    release_wxStopWatch,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
