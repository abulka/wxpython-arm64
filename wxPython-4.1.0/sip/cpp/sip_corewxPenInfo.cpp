/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/pen.h>

        #include <wx/colour.h>
        #include <wx/bitmap.h>


PyDoc_STRVAR(doc_wxPenInfo_Colour, "Colour(col) -> PenInfo");

extern "C" {static PyObject *meth_wxPenInfo_Colour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_Colour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* col;
        int colState = 0;
         ::wxPenInfo *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPenInfo, &sipCpp, sipType_wxColour, &col, &colState))
        {
             ::wxPenInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Colour(*col);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(col),sipType_wxColour,colState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPenInfo,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_Colour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_Width, "Width(width) -> PenInfo");

extern "C" {static PyObject *meth_wxPenInfo_Width(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_Width(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;
         ::wxPenInfo *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPenInfo, &sipCpp, &width))
        {
             ::wxPenInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Width(width);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPenInfo,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_Width, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_Style, "Style(style) -> PenInfo");

extern "C" {static PyObject *meth_wxPenInfo_Style(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_Style(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPenStyle style;
         ::wxPenInfo *sipCpp;

        static const char *sipKwdList[] = {
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxPenInfo, &sipCpp, sipType_wxPenStyle, &style))
        {
             ::wxPenInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Style(style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPenInfo,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_Style, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_Stipple, "Stipple(stipple) -> PenInfo");

extern "C" {static PyObject *meth_wxPenInfo_Stipple(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_Stipple(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBitmap* stipple;
         ::wxPenInfo *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stipple,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxPenInfo, &sipCpp, sipType_wxBitmap, &stipple))
        {
             ::wxPenInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Stipple(*stipple);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPenInfo,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_Stipple, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_Join, "Join(join) -> PenInfo");

extern "C" {static PyObject *meth_wxPenInfo_Join(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_Join(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPenJoin join;
         ::wxPenInfo *sipCpp;

        static const char *sipKwdList[] = {
            sipName_join,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxPenInfo, &sipCpp, sipType_wxPenJoin, &join))
        {
             ::wxPenInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Join(join);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPenInfo,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_Join, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_Cap, "Cap(cap) -> PenInfo");

extern "C" {static PyObject *meth_wxPenInfo_Cap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_Cap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPenCap cap;
         ::wxPenInfo *sipCpp;

        static const char *sipKwdList[] = {
            sipName_cap,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxPenInfo, &sipCpp, sipType_wxPenCap, &cap))
        {
             ::wxPenInfo*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Cap(cap);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPenInfo,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_Cap, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_GetColour, "GetColour() -> Colour");

extern "C" {static PyObject *meth_wxPenInfo_GetColour(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_GetColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_GetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_GetStipple, "GetStipple() -> Bitmap");

extern "C" {static PyObject *meth_wxPenInfo_GetStipple(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_GetStipple(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
        {
             ::wxBitmap*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxBitmap(sipCpp->GetStipple());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxBitmap,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_GetStipple, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_GetStyle, "GetStyle() -> PenStyle");

extern "C" {static PyObject *meth_wxPenInfo_GetStyle(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_GetStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
        {
             ::wxPenStyle sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetStyle();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxPenStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_GetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_GetJoin, "GetJoin() -> PenJoin");

extern "C" {static PyObject *meth_wxPenInfo_GetJoin(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_GetJoin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
        {
             ::wxPenJoin sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetJoin();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxPenJoin);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_GetJoin, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_GetCap, "GetCap() -> PenCap");

extern "C" {static PyObject *meth_wxPenInfo_GetCap(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_GetCap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
        {
             ::wxPenCap sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCap();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxPenCap);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_GetCap, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_IsTransparent, "IsTransparent() -> bool");

extern "C" {static PyObject *meth_wxPenInfo_IsTransparent(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_IsTransparent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsTransparent();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_IsTransparent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPenInfo_GetWidth, "GetWidth() -> int");

extern "C" {static PyObject *meth_wxPenInfo_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_wxPenInfo_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPenInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPenInfo, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_PenInfo, sipName_GetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPenInfo(void *, int);}
static void release_wxPenInfo(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPenInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxPenInfo(void *, SIP_SSIZE_T, void *);}
static void assign_wxPenInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPenInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPenInfo *>(sipSrc);
}


extern "C" {static void *array_wxPenInfo(SIP_SSIZE_T);}
static void *array_wxPenInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPenInfo[sipNrElem];
}


extern "C" {static void *copy_wxPenInfo(const void *, SIP_SSIZE_T);}
static void *copy_wxPenInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPenInfo(reinterpret_cast<const  ::wxPenInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPenInfo(sipSimpleWrapper *);}
static void dealloc_wxPenInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPenInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPenInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPenInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPenInfo *sipCpp = SIP_NULLPTR;

    {
        const  ::wxColour& colourdef = wxColour();
        const  ::wxColour* colour = &colourdef;
        int colourState = 0;
        int width = 1;
         ::wxPenStyle style = wxPENSTYLE_SOLID;

        static const char *sipKwdList[] = {
            sipName_colour,
            sipName_width,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1iE", sipType_wxColour, &colour, &colourState, &width, sipType_wxPenStyle, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPenInfo(*colour,width,style);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxPenInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPenInfo, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPenInfo(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxPenInfo[] = {
    {SIP_MLNAME_CAST(sipName_Cap), SIP_MLMETH_CAST(meth_wxPenInfo_Cap), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenInfo_Cap)},
    {SIP_MLNAME_CAST(sipName_Colour), SIP_MLMETH_CAST(meth_wxPenInfo_Colour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenInfo_Colour)},
    {SIP_MLNAME_CAST(sipName_GetCap), meth_wxPenInfo_GetCap, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_GetCap)},
    {SIP_MLNAME_CAST(sipName_GetColour), meth_wxPenInfo_GetColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_GetColour)},
    {SIP_MLNAME_CAST(sipName_GetJoin), meth_wxPenInfo_GetJoin, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_GetJoin)},
    {SIP_MLNAME_CAST(sipName_GetStipple), meth_wxPenInfo_GetStipple, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_GetStipple)},
    {SIP_MLNAME_CAST(sipName_GetStyle), meth_wxPenInfo_GetStyle, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_GetStyle)},
    {SIP_MLNAME_CAST(sipName_GetWidth), meth_wxPenInfo_GetWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_GetWidth)},
    {SIP_MLNAME_CAST(sipName_IsTransparent), meth_wxPenInfo_IsTransparent, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPenInfo_IsTransparent)},
    {SIP_MLNAME_CAST(sipName_Join), SIP_MLMETH_CAST(meth_wxPenInfo_Join), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenInfo_Join)},
    {SIP_MLNAME_CAST(sipName_Stipple), SIP_MLMETH_CAST(meth_wxPenInfo_Stipple), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenInfo_Stipple)},
    {SIP_MLNAME_CAST(sipName_Style), SIP_MLMETH_CAST(meth_wxPenInfo_Style), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenInfo_Style)},
    {SIP_MLNAME_CAST(sipName_Width), SIP_MLMETH_CAST(meth_wxPenInfo_Width), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenInfo_Width)}
};

PyDoc_STRVAR(doc_wxPenInfo, "PenInfo(colour=Colour(), width=1, style=PENSTYLE_SOLID)\n"
"\n"
"This class is a helper used for wxPen creation using named parameter\n"
"idiom: it allows specifying various wxPen attributes using the chained\n"
"calls to its clearly named methods instead of passing them in the\n"
"fixed order to wxPen constructors.");


sipClassTypeDef sipTypeDef__core_wxPenInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPenInfo,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PenInfo,
        {0, 0, 1},
        13, methods_wxPenInfo,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPenInfo,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPenInfo,
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
    dealloc_wxPenInfo,
    assign_wxPenInfo,
    array_wxPenInfo,
    copy_wxPenInfo,
    release_wxPenInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};