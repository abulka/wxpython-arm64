/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/statusbr.h>



PyDoc_STRVAR(doc_wxStatusBarPane_GetWidth, "GetWidth() -> int\n"
"\n"
"Returns the pane width; it maybe negative, indicating a variable-width\n"
"field.");

extern "C" {static PyObject *meth_wxStatusBarPane_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_wxStatusBarPane_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStatusBarPane *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStatusBarPane, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetWidth();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StatusBarPane, sipName_GetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStatusBarPane_GetStyle, "GetStyle() -> int\n"
"\n"
"Returns the pane style.");

extern "C" {static PyObject *meth_wxStatusBarPane_GetStyle(PyObject *, PyObject *);}
static PyObject *meth_wxStatusBarPane_GetStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStatusBarPane *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStatusBarPane, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetStyle();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StatusBarPane, sipName_GetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStatusBarPane_GetText, "GetText() -> String\n"
"\n"
"Returns the text currently shown in this pane.");

extern "C" {static PyObject *meth_wxStatusBarPane_GetText(PyObject *, PyObject *);}
static PyObject *meth_wxStatusBarPane_GetText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStatusBarPane *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStatusBarPane, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetText());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StatusBarPane, sipName_GetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxStatusBarPane(void *, int);}
static void release_wxStatusBarPane(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxStatusBarPane *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxStatusBarPane(void *, SIP_SSIZE_T, void *);}
static void assign_wxStatusBarPane(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxStatusBarPane *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxStatusBarPane *>(sipSrc);
}


extern "C" {static void *array_wxStatusBarPane(SIP_SSIZE_T);}
static void *array_wxStatusBarPane(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxStatusBarPane[sipNrElem];
}


extern "C" {static void *copy_wxStatusBarPane(const void *, SIP_SSIZE_T);}
static void *copy_wxStatusBarPane(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxStatusBarPane(reinterpret_cast<const  ::wxStatusBarPane *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxStatusBarPane(sipSimpleWrapper *);}
static void dealloc_wxStatusBarPane(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxStatusBarPane(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxStatusBarPane(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxStatusBarPane(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxStatusBarPane *sipCpp = SIP_NULLPTR;

    {
        int style = wxSB_NORMAL;
        int width = 0;

        static const char *sipKwdList[] = {
            sipName_style,
            sipName_width,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &style, &width))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxStatusBarPane(style,width);
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
        const  ::wxStatusBarPane* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxStatusBarPane, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxStatusBarPane(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxStatusBarPane[] = {
    {SIP_MLNAME_CAST(sipName_GetStyle), meth_wxStatusBarPane_GetStyle, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStatusBarPane_GetStyle)},
    {SIP_MLNAME_CAST(sipName_GetText), meth_wxStatusBarPane_GetText, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStatusBarPane_GetText)},
    {SIP_MLNAME_CAST(sipName_GetWidth), meth_wxStatusBarPane_GetWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStatusBarPane_GetWidth)}
};

sipVariableDef variables_wxStatusBarPane[] = {
    {PropertyVariable, sipName_Width, &methods_wxStatusBarPane[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Text, &methods_wxStatusBarPane[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Style, &methods_wxStatusBarPane[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxStatusBarPane, "StatusBarPane(style=SB_NORMAL, width=0)\n"
"\n"
"A status bar pane data container used by wxStatusBar.");


sipClassTypeDef sipTypeDef__core_wxStatusBarPane = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxStatusBarPane,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_StatusBarPane,
        {0, 0, 1},
        3, methods_wxStatusBarPane,
        0, SIP_NULLPTR,
        3, variables_wxStatusBarPane,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxStatusBarPane,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxStatusBarPane,
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
    dealloc_wxStatusBarPane,
    assign_wxStatusBarPane,
    array_wxStatusBarPane,
    copy_wxStatusBarPane,
    release_wxStatusBarPane,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
