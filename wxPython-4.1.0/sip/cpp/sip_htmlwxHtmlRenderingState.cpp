/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"

        #include <wx/html/htmlcell.h>

        #include <wx/colour.h>


PyDoc_STRVAR(doc_wxHtmlRenderingState_SetSelectionState, "SetSelectionState(s)");

extern "C" {static PyObject *meth_wxHtmlRenderingState_SetSelectionState(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_SetSelectionState(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlSelectionState s;
         ::wxHtmlRenderingState *sipCpp;

        static const char *sipKwdList[] = {
            sipName_s,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp, sipType_wxHtmlSelectionState, &s))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetSelectionState(s);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_SetSelectionState, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_GetSelectionState, "GetSelectionState() -> HtmlSelectionState");

extern "C" {static PyObject *meth_wxHtmlRenderingState_GetSelectionState(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_GetSelectionState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlRenderingState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp))
        {
             ::wxHtmlSelectionState sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetSelectionState();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxHtmlSelectionState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_GetSelectionState, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_SetFgColour, "SetFgColour(c)");

extern "C" {static PyObject *meth_wxHtmlRenderingState_SetFgColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_SetFgColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* c;
        int cState = 0;
         ::wxHtmlRenderingState *sipCpp;

        static const char *sipKwdList[] = {
            sipName_c,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp, sipType_wxColour, &c, &cState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFgColour(*c);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(c),sipType_wxColour,cState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_SetFgColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_GetFgColour, "GetFgColour() -> wx.Colour");

extern "C" {static PyObject *meth_wxHtmlRenderingState_GetFgColour(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_GetFgColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlRenderingState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetFgColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_GetFgColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_SetBgColour, "SetBgColour(c)");

extern "C" {static PyObject *meth_wxHtmlRenderingState_SetBgColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_SetBgColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* c;
        int cState = 0;
         ::wxHtmlRenderingState *sipCpp;

        static const char *sipKwdList[] = {
            sipName_c,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp, sipType_wxColour, &c, &cState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBgColour(*c);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(c),sipType_wxColour,cState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_SetBgColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_GetBgColour, "GetBgColour() -> wx.Colour");

extern "C" {static PyObject *meth_wxHtmlRenderingState_GetBgColour(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_GetBgColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlRenderingState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetBgColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_GetBgColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_SetBgMode, "SetBgMode(m)");

extern "C" {static PyObject *meth_wxHtmlRenderingState_SetBgMode(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_SetBgMode(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int m;
         ::wxHtmlRenderingState *sipCpp;

        static const char *sipKwdList[] = {
            sipName_m,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp, &m))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBgMode(m);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_SetBgMode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlRenderingState_GetBgMode, "GetBgMode() -> int");

extern "C" {static PyObject *meth_wxHtmlRenderingState_GetBgMode(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlRenderingState_GetBgMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlRenderingState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlRenderingState, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetBgMode();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlRenderingState, sipName_GetBgMode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlRenderingState(void *, int);}
static void release_wxHtmlRenderingState(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxHtmlRenderingState *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxHtmlRenderingState(void *, SIP_SSIZE_T, void *);}
static void assign_wxHtmlRenderingState(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxHtmlRenderingState *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxHtmlRenderingState *>(sipSrc);
}


extern "C" {static void *array_wxHtmlRenderingState(SIP_SSIZE_T);}
static void *array_wxHtmlRenderingState(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxHtmlRenderingState[sipNrElem];
}


extern "C" {static void *copy_wxHtmlRenderingState(const void *, SIP_SSIZE_T);}
static void *copy_wxHtmlRenderingState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxHtmlRenderingState(reinterpret_cast<const  ::wxHtmlRenderingState *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxHtmlRenderingState(sipSimpleWrapper *);}
static void dealloc_wxHtmlRenderingState(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlRenderingState(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxHtmlRenderingState(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlRenderingState(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxHtmlRenderingState *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxHtmlRenderingState();
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
        const  ::wxHtmlRenderingState* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxHtmlRenderingState, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxHtmlRenderingState(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxHtmlRenderingState[] = {
    {SIP_MLNAME_CAST(sipName_GetBgColour), meth_wxHtmlRenderingState_GetBgColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_GetBgColour)},
    {SIP_MLNAME_CAST(sipName_GetBgMode), meth_wxHtmlRenderingState_GetBgMode, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_GetBgMode)},
    {SIP_MLNAME_CAST(sipName_GetFgColour), meth_wxHtmlRenderingState_GetFgColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_GetFgColour)},
    {SIP_MLNAME_CAST(sipName_GetSelectionState), meth_wxHtmlRenderingState_GetSelectionState, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_GetSelectionState)},
    {SIP_MLNAME_CAST(sipName_SetBgColour), SIP_MLMETH_CAST(meth_wxHtmlRenderingState_SetBgColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_SetBgColour)},
    {SIP_MLNAME_CAST(sipName_SetBgMode), SIP_MLMETH_CAST(meth_wxHtmlRenderingState_SetBgMode), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_SetBgMode)},
    {SIP_MLNAME_CAST(sipName_SetFgColour), SIP_MLMETH_CAST(meth_wxHtmlRenderingState_SetFgColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_SetFgColour)},
    {SIP_MLNAME_CAST(sipName_SetSelectionState), SIP_MLMETH_CAST(meth_wxHtmlRenderingState_SetSelectionState), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlRenderingState_SetSelectionState)}
};

sipVariableDef variables_wxHtmlRenderingState[] = {
    {PropertyVariable, sipName_SelectionState, &methods_wxHtmlRenderingState[3], &methods_wxHtmlRenderingState[7], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FgColour, &methods_wxHtmlRenderingState[2], &methods_wxHtmlRenderingState[6], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BgMode, &methods_wxHtmlRenderingState[1], &methods_wxHtmlRenderingState[5], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BgColour, &methods_wxHtmlRenderingState[0], &methods_wxHtmlRenderingState[4], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlRenderingState, "HtmlRenderingState()\n"
"\n"
"Selection state is passed to wxHtmlCell::Draw so that it can render\n"
"itself differently e.g.");


sipClassTypeDef sipTypeDef__html_wxHtmlRenderingState = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxHtmlRenderingState,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlRenderingState,
        {0, 0, 1},
        8, methods_wxHtmlRenderingState,
        0, SIP_NULLPTR,
        4, variables_wxHtmlRenderingState,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlRenderingState,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxHtmlRenderingState,
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
    dealloc_wxHtmlRenderingState,
    assign_wxHtmlRenderingState,
    array_wxHtmlRenderingState,
    copy_wxHtmlRenderingState,
    release_wxHtmlRenderingState,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
