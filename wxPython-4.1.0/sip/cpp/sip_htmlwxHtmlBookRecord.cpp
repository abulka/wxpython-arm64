/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"

        #include <wx/html/helpdata.h>



PyDoc_STRVAR(doc_wxHtmlBookRecord_GetBookFile, "GetBookFile() -> String");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetBookFile(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetBookFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlBookRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetBookFile());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetBookFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_GetTitle, "GetTitle() -> String");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetTitle(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetTitle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlBookRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetTitle());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetTitle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_GetStart, "GetStart() -> String");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetStart(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlBookRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetStart());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetStart, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_GetBasePath, "GetBasePath() -> String");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetBasePath(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetBasePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlBookRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetBasePath());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetBasePath, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_SetContentsRange, "SetContentsRange(start, end)");

extern "C" {static PyObject *meth_wxHtmlBookRecord_SetContentsRange(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_SetContentsRange(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int start;
        int end;
         ::wxHtmlBookRecord *sipCpp;

        static const char *sipKwdList[] = {
            sipName_start,
            sipName_end,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp, &start, &end))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetContentsRange(start,end);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_SetContentsRange, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_GetContentsStart, "GetContentsStart() -> int");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetContentsStart(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetContentsStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlBookRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetContentsStart();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetContentsStart, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_GetContentsEnd, "GetContentsEnd() -> int");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetContentsEnd(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetContentsEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlBookRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetContentsEnd();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetContentsEnd, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_SetTitle, "SetTitle(title)");

extern "C" {static PyObject *meth_wxHtmlBookRecord_SetTitle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_SetTitle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* title;
        int titleState = 0;
         ::wxHtmlBookRecord *sipCpp;

        static const char *sipKwdList[] = {
            sipName_title,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp, sipType_wxString,&title, &titleState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetTitle(*title);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(title),sipType_wxString,titleState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_SetTitle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_SetBasePath, "SetBasePath(path)");

extern "C" {static PyObject *meth_wxHtmlBookRecord_SetBasePath(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_SetBasePath(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* path;
        int pathState = 0;
         ::wxHtmlBookRecord *sipCpp;

        static const char *sipKwdList[] = {
            sipName_path,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp, sipType_wxString,&path, &pathState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBasePath(*path);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(path),sipType_wxString,pathState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_SetBasePath, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_SetStart, "SetStart(start)");

extern "C" {static PyObject *meth_wxHtmlBookRecord_SetStart(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_SetStart(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* start;
        int startState = 0;
         ::wxHtmlBookRecord *sipCpp;

        static const char *sipKwdList[] = {
            sipName_start,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp, sipType_wxString,&start, &startState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStart(*start);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(start),sipType_wxString,startState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_SetStart, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlBookRecord_GetFullPath, "GetFullPath(page) -> String");

extern "C" {static PyObject *meth_wxHtmlBookRecord_GetFullPath(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlBookRecord_GetFullPath(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* page;
        int pageState = 0;
        const  ::wxHtmlBookRecord *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlBookRecord, &sipCpp, sipType_wxString,&page, &pageState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetFullPath(*page));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(page),sipType_wxString,pageState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlBookRecord, sipName_GetFullPath, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlBookRecord(void *, int);}
static void release_wxHtmlBookRecord(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxHtmlBookRecord *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlBookRecord(sipSimpleWrapper *);}
static void dealloc_wxHtmlBookRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlBookRecord(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxHtmlBookRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlBookRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxHtmlBookRecord *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString* bookfile;
        int bookfileState = 0;
        const  ::wxString* basepath;
        int basepathState = 0;
        const  ::wxString* title;
        int titleState = 0;
        const  ::wxString* start;
        int startState = 0;

        static const char *sipKwdList[] = {
            sipName_bookfile,
            sipName_basepath,
            sipName_title,
            sipName_start,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1J1J1", sipType_wxString,&bookfile, &bookfileState, sipType_wxString,&basepath, &basepathState, sipType_wxString,&title, &titleState, sipType_wxString,&start, &startState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxHtmlBookRecord(*bookfile,*basepath,*title,*start);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(bookfile),sipType_wxString,bookfileState);
            sipReleaseType(const_cast< ::wxString *>(basepath),sipType_wxString,basepathState);
            sipReleaseType(const_cast< ::wxString *>(title),sipType_wxString,titleState);
            sipReleaseType(const_cast< ::wxString *>(start),sipType_wxString,startState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxHtmlBookRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxHtmlBookRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxHtmlBookRecord(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxHtmlBookRecord[] = {
    {SIP_MLNAME_CAST(sipName_GetBasePath), meth_wxHtmlBookRecord_GetBasePath, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetBasePath)},
    {SIP_MLNAME_CAST(sipName_GetBookFile), meth_wxHtmlBookRecord_GetBookFile, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetBookFile)},
    {SIP_MLNAME_CAST(sipName_GetContentsEnd), meth_wxHtmlBookRecord_GetContentsEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetContentsEnd)},
    {SIP_MLNAME_CAST(sipName_GetContentsStart), meth_wxHtmlBookRecord_GetContentsStart, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetContentsStart)},
    {SIP_MLNAME_CAST(sipName_GetFullPath), SIP_MLMETH_CAST(meth_wxHtmlBookRecord_GetFullPath), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetFullPath)},
    {SIP_MLNAME_CAST(sipName_GetStart), meth_wxHtmlBookRecord_GetStart, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetStart)},
    {SIP_MLNAME_CAST(sipName_GetTitle), meth_wxHtmlBookRecord_GetTitle, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_GetTitle)},
    {SIP_MLNAME_CAST(sipName_SetBasePath), SIP_MLMETH_CAST(meth_wxHtmlBookRecord_SetBasePath), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_SetBasePath)},
    {SIP_MLNAME_CAST(sipName_SetContentsRange), SIP_MLMETH_CAST(meth_wxHtmlBookRecord_SetContentsRange), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_SetContentsRange)},
    {SIP_MLNAME_CAST(sipName_SetStart), SIP_MLMETH_CAST(meth_wxHtmlBookRecord_SetStart), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_SetStart)},
    {SIP_MLNAME_CAST(sipName_SetTitle), SIP_MLMETH_CAST(meth_wxHtmlBookRecord_SetTitle), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlBookRecord_SetTitle)}
};

sipVariableDef variables_wxHtmlBookRecord[] = {
    {PropertyVariable, sipName_Title, &methods_wxHtmlBookRecord[6], &methods_wxHtmlBookRecord[10], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Start, &methods_wxHtmlBookRecord[5], &methods_wxHtmlBookRecord[9], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ContentsStart, &methods_wxHtmlBookRecord[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ContentsEnd, &methods_wxHtmlBookRecord[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BookFile, &methods_wxHtmlBookRecord[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BasePath, &methods_wxHtmlBookRecord[0], &methods_wxHtmlBookRecord[7], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlBookRecord, "HtmlBookRecord(bookfile, basepath, title, start)\n"
"\n"
"Helper class for wxHtmlHelpData.");


sipClassTypeDef sipTypeDef__html_wxHtmlBookRecord = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxHtmlBookRecord,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlBookRecord,
        {0, 0, 1},
        11, methods_wxHtmlBookRecord,
        0, SIP_NULLPTR,
        6, variables_wxHtmlBookRecord,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlBookRecord,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxHtmlBookRecord,
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
    dealloc_wxHtmlBookRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlBookRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
