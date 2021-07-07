/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/cmndata.h>

        #include <wx/cmndata.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>
    int _wxPrintDialogData___nonzero__(wxPrintDialogData* self)
    {
        return self->IsOk();
    }
    int _wxPrintDialogData___bool__(wxPrintDialogData* self)
    {
        return self->IsOk();
    }


PyDoc_STRVAR(doc_wxPrintDialogData_EnableHelp, "EnableHelp(flag)\n"
"\n"
"Enables or disables the \"Help\" button.");

extern "C" {static PyObject *meth_wxPrintDialogData_EnableHelp(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_EnableHelp(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnableHelp(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_EnableHelp, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_EnablePageNumbers, "EnablePageNumbers(flag)\n"
"\n"
"Enables or disables the \"Page numbers\" controls.");

extern "C" {static PyObject *meth_wxPrintDialogData_EnablePageNumbers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_EnablePageNumbers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnablePageNumbers(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_EnablePageNumbers, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_EnablePrintToFile, "EnablePrintToFile(flag)\n"
"\n"
"Enables or disables the \"Print to file\" checkbox.");

extern "C" {static PyObject *meth_wxPrintDialogData_EnablePrintToFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_EnablePrintToFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnablePrintToFile(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_EnablePrintToFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_EnableSelection, "EnableSelection(flag)\n"
"\n"
"Enables or disables the \"Selection\" radio button.");

extern "C" {static PyObject *meth_wxPrintDialogData_EnableSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_EnableSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnableSelection(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_EnableSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetAllPages, "GetAllPages() -> bool\n"
"\n"
"Returns true if the user requested that all pages be printed.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetAllPages(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetAllPages(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetAllPages();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetAllPages, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetCollate, "GetCollate() -> bool\n"
"\n"
"Returns true if the user requested that the document(s) be collated.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetCollate(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetCollate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCollate();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetCollate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetFromPage, "GetFromPage() -> int\n"
"\n"
"Returns the from page number, as entered by the user.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetFromPage(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetFromPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFromPage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetFromPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetMaxPage, "GetMaxPage() -> int\n"
"\n"
"Returns the maximum page number.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetMaxPage(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetMaxPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetMaxPage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetMaxPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetMinPage, "GetMinPage() -> int\n"
"\n"
"Returns the minimum page number.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetMinPage(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetMinPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetMinPage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetMinPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetNoCopies, "GetNoCopies() -> int\n"
"\n"
"Returns the number of copies requested by the user.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetNoCopies(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetNoCopies(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetNoCopies();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetNoCopies, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetPrintData, "GetPrintData() -> PrintData\n"
"\n"
"Returns a reference to the internal wxPrintData object.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetPrintData(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetPrintData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
             ::wxPrintData*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->GetPrintData();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPrintData,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetPrintData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetPrintToFile, "GetPrintToFile() -> bool\n"
"\n"
"Returns true if the user has selected printing to a file.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetPrintToFile(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetPrintToFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPrintToFile();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetPrintToFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetSelection, "GetSelection() -> bool\n"
"\n"
"Returns true if the user requested that the selection be printed\n"
"(where \"selection\" is a concept specific to the application).");

extern "C" {static PyObject *meth_wxPrintDialogData_GetSelection(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSelection();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_GetToPage, "GetToPage() -> int\n"
"\n"
"Returns the \"print to\" page number, as entered by the user.");

extern "C" {static PyObject *meth_wxPrintDialogData_GetToPage(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_GetToPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetToPage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_GetToPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_IsOk, "IsOk() -> bool\n"
"\n"
"Returns true if the print data is valid for using in print dialogs.");

extern "C" {static PyObject *meth_wxPrintDialogData_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintDialogData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPrintDialogData, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsOk();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetCollate, "SetCollate(flag)\n"
"\n"
"Sets the \"Collate\" checkbox to true or false.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetCollate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetCollate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetCollate(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetCollate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetFromPage, "SetFromPage(page)\n"
"\n"
"Sets the from page number.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetFromPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetFromPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int page;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFromPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetFromPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetMaxPage, "SetMaxPage(page)\n"
"\n"
"Sets the maximum page number.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetMaxPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetMaxPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int page;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetMaxPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetMaxPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetMinPage, "SetMinPage(page)\n"
"\n"
"Sets the minimum page number.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetMinPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetMinPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int page;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetMinPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetMinPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetNoCopies, "SetNoCopies(n)\n"
"\n"
"Sets the default number of copies the user has requested to be printed\n"
"out.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetNoCopies(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetNoCopies(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int n;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_n,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &n))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetNoCopies(n);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetNoCopies, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetPrintData, "SetPrintData(printData)\n"
"\n"
"Sets the internal wxPrintData.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetPrintData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetPrintData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPrintData* printData;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_printData,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxPrintDialogData, &sipCpp, sipType_wxPrintData, &printData))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPrintData(*printData);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetPrintData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetPrintToFile, "SetPrintToFile(flag)\n"
"\n"
"Sets the \"Print to file\" checkbox to true or false.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetPrintToFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetPrintToFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPrintToFile(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetPrintToFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetSelection, "SetSelection(flag)\n"
"\n"
"Selects the \"Selection\" radio button.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetSelection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetSelection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool flag;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_flag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &flag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetSelection(flag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetSelection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPrintDialogData_SetToPage, "SetToPage(page)\n"
"\n"
"Sets the \"print to\" page number.");

extern "C" {static PyObject *meth_wxPrintDialogData_SetToPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPrintDialogData_SetToPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int page;
         ::wxPrintDialogData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPrintDialogData, &sipCpp, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetToPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PrintDialogData, sipName_SetToPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static int slot_wxPrintDialogData___bool__(PyObject *);}
static int slot_wxPrintDialogData___bool__(PyObject *sipSelf)
{
     ::wxPrintDialogData *sipCpp = reinterpret_cast< ::wxPrintDialogData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPrintDialogData));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxPrintDialogData___bool__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_wxPrintDialogData___nonzero__(PyObject *);}
static int slot_wxPrintDialogData___nonzero__(PyObject *sipSelf)
{
     ::wxPrintDialogData *sipCpp = reinterpret_cast< ::wxPrintDialogData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPrintDialogData));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxPrintDialogData___nonzero__(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return -1;

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPrintDialogData(void *, const sipTypeDef *);}
static void *cast_wxPrintDialogData(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPrintDialogData *sipCpp = reinterpret_cast< ::wxPrintDialogData *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPrintDialogData(void *, int);}
static void release_wxPrintDialogData(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPrintDialogData *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxPrintDialogData(void *, SIP_SSIZE_T, void *);}
static void assign_wxPrintDialogData(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPrintDialogData *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPrintDialogData *>(sipSrc);
}


extern "C" {static void *array_wxPrintDialogData(SIP_SSIZE_T);}
static void *array_wxPrintDialogData(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPrintDialogData[sipNrElem];
}


extern "C" {static void *copy_wxPrintDialogData(const void *, SIP_SSIZE_T);}
static void *copy_wxPrintDialogData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPrintDialogData(reinterpret_cast<const  ::wxPrintDialogData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPrintDialogData(sipSimpleWrapper *);}
static void dealloc_wxPrintDialogData(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPrintDialogData(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPrintDialogData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPrintDialogData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPrintDialogData *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPrintDialogData();
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
        const  ::wxPrintDialogData* dialogData;

        static const char *sipKwdList[] = {
            sipName_dialogData,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPrintDialogData, &dialogData))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPrintDialogData(*dialogData);
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
        const  ::wxPrintData* printData;

        static const char *sipKwdList[] = {
            sipName_printData,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPrintData, &printData))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPrintDialogData(*printData);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxPrintDialogData[] = {{370, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_wxPrintDialogData[] = {
    {(void *)slot_wxPrintDialogData___bool__, bool_slot},
    {(void *)slot_wxPrintDialogData___nonzero__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxPrintDialogData[] = {
    {SIP_MLNAME_CAST(sipName_EnableHelp), SIP_MLMETH_CAST(meth_wxPrintDialogData_EnableHelp), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_EnableHelp)},
    {SIP_MLNAME_CAST(sipName_EnablePageNumbers), SIP_MLMETH_CAST(meth_wxPrintDialogData_EnablePageNumbers), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_EnablePageNumbers)},
    {SIP_MLNAME_CAST(sipName_EnablePrintToFile), SIP_MLMETH_CAST(meth_wxPrintDialogData_EnablePrintToFile), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_EnablePrintToFile)},
    {SIP_MLNAME_CAST(sipName_EnableSelection), SIP_MLMETH_CAST(meth_wxPrintDialogData_EnableSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_EnableSelection)},
    {SIP_MLNAME_CAST(sipName_GetAllPages), meth_wxPrintDialogData_GetAllPages, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetAllPages)},
    {SIP_MLNAME_CAST(sipName_GetCollate), meth_wxPrintDialogData_GetCollate, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetCollate)},
    {SIP_MLNAME_CAST(sipName_GetFromPage), meth_wxPrintDialogData_GetFromPage, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetFromPage)},
    {SIP_MLNAME_CAST(sipName_GetMaxPage), meth_wxPrintDialogData_GetMaxPage, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetMaxPage)},
    {SIP_MLNAME_CAST(sipName_GetMinPage), meth_wxPrintDialogData_GetMinPage, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetMinPage)},
    {SIP_MLNAME_CAST(sipName_GetNoCopies), meth_wxPrintDialogData_GetNoCopies, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetNoCopies)},
    {SIP_MLNAME_CAST(sipName_GetPrintData), meth_wxPrintDialogData_GetPrintData, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetPrintData)},
    {SIP_MLNAME_CAST(sipName_GetPrintToFile), meth_wxPrintDialogData_GetPrintToFile, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetPrintToFile)},
    {SIP_MLNAME_CAST(sipName_GetSelection), meth_wxPrintDialogData_GetSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetSelection)},
    {SIP_MLNAME_CAST(sipName_GetToPage), meth_wxPrintDialogData_GetToPage, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_GetToPage)},
    {SIP_MLNAME_CAST(sipName_IsOk), meth_wxPrintDialogData_IsOk, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPrintDialogData_IsOk)},
    {SIP_MLNAME_CAST(sipName_SetCollate), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetCollate), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetCollate)},
    {SIP_MLNAME_CAST(sipName_SetFromPage), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetFromPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetFromPage)},
    {SIP_MLNAME_CAST(sipName_SetMaxPage), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetMaxPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetMaxPage)},
    {SIP_MLNAME_CAST(sipName_SetMinPage), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetMinPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetMinPage)},
    {SIP_MLNAME_CAST(sipName_SetNoCopies), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetNoCopies), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetNoCopies)},
    {SIP_MLNAME_CAST(sipName_SetPrintData), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetPrintData), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetPrintData)},
    {SIP_MLNAME_CAST(sipName_SetPrintToFile), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetPrintToFile), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetPrintToFile)},
    {SIP_MLNAME_CAST(sipName_SetSelection), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetSelection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetSelection)},
    {SIP_MLNAME_CAST(sipName_SetToPage), SIP_MLMETH_CAST(meth_wxPrintDialogData_SetToPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPrintDialogData_SetToPage)}
};

sipVariableDef variables_wxPrintDialogData[] = {
    {PropertyVariable, sipName_ToPage, &methods_wxPrintDialogData[13], &methods_wxPrintDialogData[23], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Selection, &methods_wxPrintDialogData[12], &methods_wxPrintDialogData[22], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PrintToFile, &methods_wxPrintDialogData[11], &methods_wxPrintDialogData[21], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PrintData, &methods_wxPrintDialogData[10], &methods_wxPrintDialogData[20], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_NoCopies, &methods_wxPrintDialogData[9], &methods_wxPrintDialogData[19], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MinPage, &methods_wxPrintDialogData[8], &methods_wxPrintDialogData[18], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MaxPage, &methods_wxPrintDialogData[7], &methods_wxPrintDialogData[17], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FromPage, &methods_wxPrintDialogData[6], &methods_wxPrintDialogData[16], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Collate, &methods_wxPrintDialogData[5], &methods_wxPrintDialogData[15], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AllPages, &methods_wxPrintDialogData[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPrintDialogData, "PrintDialogData()\n"
"PrintDialogData(dialogData)\n"
"PrintDialogData(printData)\n"
"\n"
"This class holds information related to the visual characteristics of\n"
"wxPrintDialog.");


sipClassTypeDef sipTypeDef__core_wxPrintDialogData = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPrintDialogData,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PrintDialogData,
        {0, 0, 1},
        24, methods_wxPrintDialogData,
        0, SIP_NULLPTR,
        10, variables_wxPrintDialogData,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPrintDialogData,
    -1,
    -1,
    supers_wxPrintDialogData,
    slots_wxPrintDialogData,
    init_type_wxPrintDialogData,
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
    dealloc_wxPrintDialogData,
    assign_wxPrintDialogData,
    array_wxPrintDialogData,
    copy_wxPrintDialogData,
    release_wxPrintDialogData,
    cast_wxPrintDialogData,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
