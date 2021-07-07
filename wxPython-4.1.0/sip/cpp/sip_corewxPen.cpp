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
        #include "arrayholder.h"

        #include <wx/pen.h>
        #include <wx/colour.h>
        #include <wx/bitmap.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>
    wxArrayInt* _wxPen_GetDashes(const wxPen* self)
    {
        wxArrayInt* arr = new wxArrayInt;
        wxDash* dashes;
        int num = self->GetDashes(&dashes);
        for (int i=0; i<num; i++)
            arr->Add(dashes[i]);
        return arr;
    }
    void _wxPen__copyFrom(wxPen* self, const wxPen* other)
    {
        *self = *other;
    }


PyDoc_STRVAR(doc_wxPen_SetColour, "SetColour(colour)\n"
"SetColour(red, green, blue)\n"
"\n"
"The pen's colour is changed to the given colour.\n"
"");

extern "C" {static PyObject *meth_wxPen_SetColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxColour* colour;
        int colourState = 0;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetColour(*colour);
            Py_END_ALLOW_THREADS
            sipReleaseType(colour,sipType_wxColour,colourState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        unsigned char red;
        unsigned char green;
        unsigned char blue;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_red,
            sipName_green,
            sipName_blue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bccc", &sipSelf, sipType_wxPen, &sipCpp, &red, &green, &blue))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetColour(red,green,blue);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetCap, "GetCap() -> PenCap\n"
"\n"
"Returns the pen cap style, which may be one of wxCAP_ROUND,\n"
"wxCAP_PROJECTING and wxCAP_BUTT.");

extern "C" {static PyObject *meth_wxPen_GetCap(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetCap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetCap, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetColour, "GetColour() -> Colour\n"
"\n"
"Returns a reference to the pen colour.");

extern "C" {static PyObject *meth_wxPen_GetColour(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetDashes, "GetDashes() -> ArrayInt\n"
"\n"
"Gets an array of dashes (defined as char in X, DWORD under Windows).");

extern "C" {static PyObject *meth_wxPen_GetDashes(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetDashes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
        {
             ::wxArrayInt*sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxPen_GetDashes(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxArrayInt,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetDashes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetJoin, "GetJoin() -> PenJoin\n"
"\n"
"Returns the pen join style, which may be one of wxJOIN_BEVEL,\n"
"wxJOIN_ROUND and wxJOIN_MITER.");

extern "C" {static PyObject *meth_wxPen_GetJoin(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetJoin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetJoin, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetStipple, "GetStipple() -> Bitmap\n"
"\n"
"Gets a pointer to the stipple bitmap.");

extern "C" {static PyObject *meth_wxPen_GetStipple(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetStipple(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
        {
             ::wxBitmap*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetStipple();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxBitmap,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetStipple, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetStyle, "GetStyle() -> PenStyle\n"
"\n"
"Returns the pen style.");

extern "C" {static PyObject *meth_wxPen_GetStyle(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_GetWidth, "GetWidth() -> int\n"
"\n"
"Returns the pen width.");

extern "C" {static PyObject *meth_wxPen_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_wxPen_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_GetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_IsOk, "IsOk() -> bool\n"
"\n"
"Returns true if the pen is initialised.");

extern "C" {static PyObject *meth_wxPen_IsOk(PyObject *, PyObject *);}
static PyObject *meth_wxPen_IsOk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_IsOk, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_IsNonTransparent, "IsNonTransparent() -> bool\n"
"\n"
"Returns true if the pen is a valid non-transparent pen.");

extern "C" {static PyObject *meth_wxPen_IsNonTransparent(PyObject *, PyObject *);}
static PyObject *meth_wxPen_IsNonTransparent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsNonTransparent();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_IsNonTransparent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_IsTransparent, "IsTransparent() -> bool\n"
"\n"
"Returns true if the pen is transparent.");

extern "C" {static PyObject *meth_wxPen_IsTransparent(PyObject *, PyObject *);}
static PyObject *meth_wxPen_IsTransparent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPen, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_Pen, sipName_IsTransparent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_SetCap, "SetCap(capStyle)\n"
"\n"
"Sets the pen cap style, which may be one of wxCAP_ROUND,\n"
"wxCAP_PROJECTING and wxCAP_BUTT.");

extern "C" {static PyObject *meth_wxPen_SetCap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetCap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPenCap capStyle;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_capStyle,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxPenCap, &capStyle))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetCap(capStyle);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetCap, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_SetDashes, "SetDashes(dashes)\n"
"\n"
"Associates an array of dash values (defined as char in X, DWORD under\n"
"Windows) with the pen.");

extern "C" {static PyObject *meth_wxPen_SetDashes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetDashes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxArrayInt* dashes;
        int dashesState = 0;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dashes,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxArrayInt,&dashes, &dashesState))
        {
        size_t len = dashes->GetCount();
        wxDashCArrayHolder* holder = new wxDashCArrayHolder;
        holder->m_array = new wxDash[len];
        for (int idx=0; idx<len; idx+=1) {
            holder->m_array[idx] = (*dashes)[idx];
        }
        // Make a PyObject for the holder, and transfer its ownership to self.
        PyObject* pyHolder = sipConvertFromNewType(
                (void*)holder, sipType_wxDashCArrayHolder, (PyObject*)sipSelf);
        Py_DECREF(pyHolder);
        sipCpp->SetDashes(len, holder->m_array);
            sipReleaseType(const_cast< ::wxArrayInt *>(dashes),sipType_wxArrayInt,dashesState);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetDashes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_SetJoin, "SetJoin(join_style)\n"
"\n"
"Sets the pen join style, which may be one of wxJOIN_BEVEL,\n"
"wxJOIN_ROUND and wxJOIN_MITER.");

extern "C" {static PyObject *meth_wxPen_SetJoin(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetJoin(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPenJoin join_style;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_join_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxPenJoin, &join_style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetJoin(join_style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetJoin, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_SetStipple, "SetStipple(stipple)\n"
"\n"
"Sets the bitmap for stippling.");

extern "C" {static PyObject *meth_wxPen_SetStipple(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetStipple(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxBitmap* stipple;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stipple,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxBitmap, &stipple))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStipple(*stipple);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetStipple, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_SetStyle, "SetStyle(style)\n"
"\n"
"Set the pen style.");

extern "C" {static PyObject *meth_wxPen_SetStyle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetStyle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPenStyle style;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxPenStyle, &style))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStyle(style);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen_SetWidth, "SetWidth(width)\n"
"\n"
"Sets the pen width.");

extern "C" {static PyObject *meth_wxPen_SetWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen_SetWidth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxPen, &sipCpp, &width))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetWidth(width);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName_SetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPen__copyFrom, "_copyFrom(other)\n"
"\n"
"For internal use only.");

extern "C" {static PyObject *meth_wxPen__copyFrom(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPen__copyFrom(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen* other;
         ::wxPen *sipCpp;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxPen, &sipCpp, sipType_wxPen, &other))
        {
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxPen__copyFrom(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Pen, sipName__copyFrom, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxPen___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxPen___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxPen *sipCpp = reinterpret_cast< ::wxPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPen));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen* pen;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPen, &pen))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxPen::operator==(*pen);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, eq_slot, sipType_wxPen, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxPen___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxPen___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxPen *sipCpp = reinterpret_cast< ::wxPen *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPen));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPen* pen;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPen, &pen))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp-> ::wxPen::operator!=(*pen);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, ne_slot, sipType_wxPen, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPen(void *, const sipTypeDef *);}
static void *cast_wxPen(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPen *sipCpp = reinterpret_cast< ::wxPen *>(sipCppV);

    if (targetType == sipType_wxGDIObject)
        return static_cast< ::wxGDIObject *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPen(void *, int);}
static void release_wxPen(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPen *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxPen(void *, SIP_SSIZE_T, void *);}
static void assign_wxPen(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPen *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPen *>(sipSrc);
}


extern "C" {static void *array_wxPen(SIP_SSIZE_T);}
static void *array_wxPen(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPen[sipNrElem];
}


extern "C" {static void *copy_wxPen(const void *, SIP_SSIZE_T);}
static void *copy_wxPen(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPen(reinterpret_cast<const  ::wxPen *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPen(sipSimpleWrapper *);}
static void dealloc_wxPen(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPen(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPen(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPen(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPen *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPen();
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
        const  ::wxPenInfo* info;

        static const char *sipKwdList[] = {
            sipName_info,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPenInfo, &info))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPen(*info);
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
        const  ::wxColour* colour;
        int colourState = 0;
        int width = 1;
         ::wxPenStyle style = wxPENSTYLE_SOLID;

        static const char *sipKwdList[] = {
            sipName_colour,
            sipName_width,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|iE", sipType_wxColour, &colour, &colourState, &width, sipType_wxPenStyle, &style))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPen(*colour,width,style);
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
        const  ::wxPen* pen;

        static const char *sipKwdList[] = {
            sipName_pen,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPen, &pen))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPen(*pen);
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
static sipEncodedTypeDef supers_wxPen[] = {{211, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_wxPen[] = {
    {(void *)slot_wxPen___eq__, eq_slot},
    {(void *)slot_wxPen___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxPen[] = {
    {SIP_MLNAME_CAST(sipName_GetCap), meth_wxPen_GetCap, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetCap)},
    {SIP_MLNAME_CAST(sipName_GetColour), meth_wxPen_GetColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetColour)},
    {SIP_MLNAME_CAST(sipName_GetDashes), meth_wxPen_GetDashes, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetDashes)},
    {SIP_MLNAME_CAST(sipName_GetJoin), meth_wxPen_GetJoin, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetJoin)},
    {SIP_MLNAME_CAST(sipName_GetStipple), meth_wxPen_GetStipple, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetStipple)},
    {SIP_MLNAME_CAST(sipName_GetStyle), meth_wxPen_GetStyle, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetStyle)},
    {SIP_MLNAME_CAST(sipName_GetWidth), meth_wxPen_GetWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_GetWidth)},
    {SIP_MLNAME_CAST(sipName_IsNonTransparent), meth_wxPen_IsNonTransparent, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_IsNonTransparent)},
    {SIP_MLNAME_CAST(sipName_IsOk), meth_wxPen_IsOk, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_IsOk)},
    {SIP_MLNAME_CAST(sipName_IsTransparent), meth_wxPen_IsTransparent, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPen_IsTransparent)},
    {SIP_MLNAME_CAST(sipName_SetCap), SIP_MLMETH_CAST(meth_wxPen_SetCap), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetCap)},
    {SIP_MLNAME_CAST(sipName_SetColour), SIP_MLMETH_CAST(meth_wxPen_SetColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetColour)},
    {SIP_MLNAME_CAST(sipName_SetDashes), SIP_MLMETH_CAST(meth_wxPen_SetDashes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetDashes)},
    {SIP_MLNAME_CAST(sipName_SetJoin), SIP_MLMETH_CAST(meth_wxPen_SetJoin), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetJoin)},
    {SIP_MLNAME_CAST(sipName_SetStipple), SIP_MLMETH_CAST(meth_wxPen_SetStipple), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetStipple)},
    {SIP_MLNAME_CAST(sipName_SetStyle), SIP_MLMETH_CAST(meth_wxPen_SetStyle), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetStyle)},
    {SIP_MLNAME_CAST(sipName_SetWidth), SIP_MLMETH_CAST(meth_wxPen_SetWidth), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen_SetWidth)},
    {SIP_MLNAME_CAST(sipName__copyFrom), SIP_MLMETH_CAST(meth_wxPen__copyFrom), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPen__copyFrom)}
};

sipVariableDef variables_wxPen[] = {
    {PropertyVariable, sipName_Width, &methods_wxPen[6], &methods_wxPen[16], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Style, &methods_wxPen[5], &methods_wxPen[15], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Stipple, &methods_wxPen[4], &methods_wxPen[14], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Join, &methods_wxPen[3], &methods_wxPen[13], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Dashes, &methods_wxPen[2], &methods_wxPen[12], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Colour, &methods_wxPen[1], &methods_wxPen[11], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Cap, &methods_wxPen[0], &methods_wxPen[10], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPen, "Pen()\n"
"Pen(info)\n"
"Pen(colour, width=1, style=PENSTYLE_SOLID)\n"
"Pen(pen)\n"
"\n"
"A pen is a drawing tool for drawing outlines.");


sipClassTypeDef sipTypeDef__core_wxPen = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPen,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Pen,
        {0, 0, 1},
        18, methods_wxPen,
        0, SIP_NULLPTR,
        7, variables_wxPen,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPen,
    -1,
    -1,
    supers_wxPen,
    slots_wxPen,
    init_type_wxPen,
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
    dealloc_wxPen,
    assign_wxPen,
    array_wxPen,
    copy_wxPen,
    release_wxPen,
    cast_wxPen,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
