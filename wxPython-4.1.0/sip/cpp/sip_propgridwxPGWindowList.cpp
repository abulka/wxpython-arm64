/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/editors.h>

        #include <wx/window.h>


PyDoc_STRVAR(doc_wxPGWindowList_SetSecondary, "SetSecondary(secondary)");

extern "C" {static PyObject *meth_wxPGWindowList_SetSecondary(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGWindowList_SetSecondary(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxWindow* secondary;
         ::wxPGWindowList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_secondary,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxPGWindowList, &sipCpp, sipType_wxWindow, &secondary))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetSecondary(secondary);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGWindowList, sipName_SetSecondary, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGWindowList_GetPrimary, "GetPrimary() -> wx.Window\n"
"\n"
"Gets window of primary editor.");

extern "C" {static PyObject *meth_wxPGWindowList_GetPrimary(PyObject *, PyObject *);}
static PyObject *meth_wxPGWindowList_GetPrimary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGWindowList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGWindowList, &sipCpp))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPrimary();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGWindowList, sipName_GetPrimary, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGWindowList_GetSecondary, "GetSecondary() -> wx.Window\n"
"\n"
"Gets window of secondary editor.");

extern "C" {static PyObject *meth_wxPGWindowList_GetSecondary(PyObject *, PyObject *);}
static PyObject *meth_wxPGWindowList_GetSecondary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGWindowList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGWindowList, &sipCpp))
        {
             ::wxWindow*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSecondary();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxWindow,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGWindowList, sipName_GetSecondary, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPGWindowList(void *, int);}
static void release_wxPGWindowList(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPGWindowList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPGWindowList(sipSimpleWrapper *);}
static void dealloc_wxPGWindowList(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPGWindowList(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPGWindowList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPGWindowList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPGWindowList *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* primary;
         ::wxWindow* secondary = 0;

        static const char *sipKwdList[] = {
            sipName_primary,
            sipName_secondary,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|J8", sipType_wxWindow, &primary, sipType_wxWindow, &secondary))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPGWindowList(primary,secondary);
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
        const  ::wxPGWindowList* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPGWindowList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPGWindowList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxPGWindowList[] = {
    {SIP_MLNAME_CAST(sipName_GetPrimary), meth_wxPGWindowList_GetPrimary, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPGWindowList_GetPrimary)},
    {SIP_MLNAME_CAST(sipName_GetSecondary), meth_wxPGWindowList_GetSecondary, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPGWindowList_GetSecondary)},
    {SIP_MLNAME_CAST(sipName_SetSecondary), SIP_MLMETH_CAST(meth_wxPGWindowList_SetSecondary), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGWindowList_SetSecondary)}
};

sipVariableDef variables_wxPGWindowList[] = {
    {PropertyVariable, sipName_Secondary, &methods_wxPGWindowList[1], &methods_wxPGWindowList[2], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Primary, &methods_wxPGWindowList[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPGWindowList, "PGWindowList(primary, secondary=None)\n"
"\n"
"Contains a list of editor windows returned by CreateControls.");


sipClassTypeDef sipTypeDef__propgrid_wxPGWindowList = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPGWindowList,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PGWindowList,
        {0, 0, 1},
        3, methods_wxPGWindowList,
        0, SIP_NULLPTR,
        2, variables_wxPGWindowList,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPGWindowList,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPGWindowList,
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
    dealloc_wxPGWindowList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPGWindowList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
