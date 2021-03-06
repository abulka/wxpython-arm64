/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/settings.h>



PyDoc_STRVAR(doc_wxSystemAppearance_GetName, "GetName() -> String\n"
"\n"
"Return the name if available or empty string otherwise.");

extern "C" {static PyObject *meth_wxSystemAppearance_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxSystemAppearance_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSystemAppearance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxSystemAppearance, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SystemAppearance, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxSystemAppearance_IsDark, "IsDark() -> bool\n"
"\n"
"Return true if the current system there is explicitly recognized as\n"
"being a dark theme or if the default window background is dark.");

extern "C" {static PyObject *meth_wxSystemAppearance_IsDark(PyObject *, PyObject *);}
static PyObject *meth_wxSystemAppearance_IsDark(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSystemAppearance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxSystemAppearance, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsDark();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SystemAppearance, sipName_IsDark, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxSystemAppearance_IsUsingDarkBackground, "IsUsingDarkBackground() -> bool\n"
"\n"
"Return true if the default window background is significantly darker\n"
"than foreground.");

extern "C" {static PyObject *meth_wxSystemAppearance_IsUsingDarkBackground(PyObject *, PyObject *);}
static PyObject *meth_wxSystemAppearance_IsUsingDarkBackground(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSystemAppearance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxSystemAppearance, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsUsingDarkBackground();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SystemAppearance, sipName_IsUsingDarkBackground, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxSystemAppearance(void *, int);}
static void release_wxSystemAppearance(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxSystemAppearance *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxSystemAppearance(sipSimpleWrapper *);}
static void dealloc_wxSystemAppearance(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxSystemAppearance(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxSystemAppearance(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxSystemAppearance(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxSystemAppearance *sipCpp = SIP_NULLPTR;

    {
        const  ::wxSystemAppearance* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxSystemAppearance, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxSystemAppearance(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxSystemAppearance[] = {
    {SIP_MLNAME_CAST(sipName_GetName), meth_wxSystemAppearance_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_wxSystemAppearance_GetName)},
    {SIP_MLNAME_CAST(sipName_IsDark), meth_wxSystemAppearance_IsDark, METH_VARARGS, SIP_MLDOC_CAST(doc_wxSystemAppearance_IsDark)},
    {SIP_MLNAME_CAST(sipName_IsUsingDarkBackground), meth_wxSystemAppearance_IsUsingDarkBackground, METH_VARARGS, SIP_MLDOC_CAST(doc_wxSystemAppearance_IsUsingDarkBackground)}
};

sipVariableDef variables_wxSystemAppearance[] = {
    {PropertyVariable, sipName_Name, &methods_wxSystemAppearance[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxSystemAppearance, "Provides information about the current system appearance.");


sipClassTypeDef sipTypeDef__core_wxSystemAppearance = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxSystemAppearance,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_SystemAppearance,
        {0, 0, 1},
        3, methods_wxSystemAppearance,
        0, SIP_NULLPTR,
        1, variables_wxSystemAppearance,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxSystemAppearance,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxSystemAppearance,
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
    dealloc_wxSystemAppearance,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxSystemAppearance,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
