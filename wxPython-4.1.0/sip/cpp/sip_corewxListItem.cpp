/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/listctrl.h>

        #include <wx/colour.h>
        #include <wx/font.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


PyDoc_STRVAR(doc_wxListItem_SetData, "SetData(data)\n"
"\n"
"Sets client data for the item.");

extern "C" {static PyObject *meth_wxListItem_SetData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long data;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_data,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxListItem, &sipCpp, &data))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetData(data);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_Clear, "Clear()\n"
"\n"
"Resets the item state to the default.");

extern "C" {static PyObject *meth_wxListItem_Clear(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Clear();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_Clear, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetAlign, "GetAlign() -> ListColumnFormat\n"
"\n"
"Returns the alignment for this item.");

extern "C" {static PyObject *meth_wxListItem_GetAlign(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetAlign(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
             ::wxListColumnFormat sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetAlign();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxListColumnFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetAlign, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetBackgroundColour, "GetBackgroundColour() -> Colour\n"
"\n"
"Returns the background colour for this item.");

extern "C" {static PyObject *meth_wxListItem_GetBackgroundColour(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetBackgroundColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetBackgroundColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetBackgroundColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetColumn, "GetColumn() -> int\n"
"\n"
"Returns the zero-based column; meaningful only in report mode.");

extern "C" {static PyObject *meth_wxListItem_GetColumn(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetColumn();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetData, "GetData() -> long\n"
"\n"
"Returns client data associated with the control.");

extern "C" {static PyObject *meth_wxListItem_GetData(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetData();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetFont, "GetFont() -> Font\n"
"\n"
"Returns the font used to display the item.");

extern "C" {static PyObject *meth_wxListItem_GetFont(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
             ::wxFont*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxFont(sipCpp->GetFont());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxFont,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetId, "GetId() -> long\n"
"\n"
"Returns the zero-based item position.");

extern "C" {static PyObject *meth_wxListItem_GetId(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetId();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetImage, "GetImage() -> int\n"
"\n"
"Returns the zero-based index of the image associated with the item\n"
"into the image list.");

extern "C" {static PyObject *meth_wxListItem_GetImage(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetImage();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetMask, "GetMask() -> long\n"
"\n"
"Returns a bit mask indicating which fields of the structure are valid.");

extern "C" {static PyObject *meth_wxListItem_GetMask(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetMask(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetMask();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetMask, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetState, "GetState() -> long\n"
"\n"
"Returns a bit field representing the state of the item.");

extern "C" {static PyObject *meth_wxListItem_GetState(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetState();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetState, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetText, "GetText() -> String\n"
"\n"
"Returns the label/header text.");

extern "C" {static PyObject *meth_wxListItem_GetText(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetTextColour, "GetTextColour() -> Colour\n"
"\n"
"Returns the text colour.");

extern "C" {static PyObject *meth_wxListItem_GetTextColour(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetTextColour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->GetTextColour());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetTextColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_GetWidth, "GetWidth() -> int\n"
"\n"
"Meaningful only for column headers in report mode.");

extern "C" {static PyObject *meth_wxListItem_GetWidth(PyObject *, PyObject *);}
static PyObject *meth_wxListItem_GetWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxListItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxListItem, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_GetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetAlign, "SetAlign(align)\n"
"\n"
"Sets the alignment for the item.");

extern "C" {static PyObject *meth_wxListItem_SetAlign(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetAlign(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxListColumnFormat align;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_align,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxListItem, &sipCpp, sipType_wxListColumnFormat, &align))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetAlign(align);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetAlign, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetBackgroundColour, "SetBackgroundColour(colBack)\n"
"\n"
"Sets the background colour for the item.");

extern "C" {static PyObject *meth_wxListItem_SetBackgroundColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetBackgroundColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* colBack;
        int colBackState = 0;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colBack,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxListItem, &sipCpp, sipType_wxColour, &colBack, &colBackState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetBackgroundColour(*colBack);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colBack),sipType_wxColour,colBackState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetBackgroundColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetColumn, "SetColumn(col)\n"
"\n"
"Sets the zero-based column.");

extern "C" {static PyObject *meth_wxListItem_SetColumn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetColumn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int col;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxListItem, &sipCpp, &col))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetColumn(col);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetFont, "SetFont(font)\n"
"\n"
"Sets the font for the item.");

extern "C" {static PyObject *meth_wxListItem_SetFont(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetFont(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFont* font;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_font,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxListItem, &sipCpp, sipType_wxFont, &font))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFont(*font);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetFont, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetId, "SetId(id)\n"
"\n"
"Sets the zero-based item position.");

extern "C" {static PyObject *meth_wxListItem_SetId(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetId(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long id;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_id,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxListItem, &sipCpp, &id))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetId(id);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetId, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetImage, "SetImage(image)\n"
"\n"
"Sets the zero-based index of the image associated with the item into\n"
"the image list.");

extern "C" {static PyObject *meth_wxListItem_SetImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int image;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxListItem, &sipCpp, &image))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetImage(image);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetImage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetMask, "SetMask(mask)\n"
"\n"
"Sets the mask of valid fields.");

extern "C" {static PyObject *meth_wxListItem_SetMask(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetMask(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long mask;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mask,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxListItem, &sipCpp, &mask))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetMask(mask);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetMask, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetState, "SetState(state)\n"
"\n"
"Sets the item state flags (note that the valid state flags are\n"
"influenced by the value of the state mask, see\n"
"wxListItem::SetStateMask).");

extern "C" {static PyObject *meth_wxListItem_SetState(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetState(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long state;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxListItem, &sipCpp, &state))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetState(state);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetState, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetStateMask, "SetStateMask(stateMask)\n"
"\n"
"Sets the bitmask that is used to determine which of the state flags\n"
"are to be set.");

extern "C" {static PyObject *meth_wxListItem_SetStateMask(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetStateMask(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        long stateMask;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stateMask,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bl", &sipSelf, sipType_wxListItem, &sipCpp, &stateMask))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetStateMask(stateMask);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetStateMask, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetText, "SetText(text)\n"
"\n"
"Sets the text label for the item.");

extern "C" {static PyObject *meth_wxListItem_SetText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* text;
        int textState = 0;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxListItem, &sipCpp, sipType_wxString,&text, &textState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetText(*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetTextColour, "SetTextColour(colText)\n"
"\n"
"Sets the text colour for the item.");

extern "C" {static PyObject *meth_wxListItem_SetTextColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetTextColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* colText;
        int colTextState = 0;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colText,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxListItem, &sipCpp, sipType_wxColour, &colText, &colTextState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetTextColour(*colText);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colText),sipType_wxColour,colTextState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetTextColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxListItem_SetWidth, "SetWidth(width)\n"
"\n"
"Meaningful only for column headers in report mode.");

extern "C" {static PyObject *meth_wxListItem_SetWidth(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxListItem_SetWidth(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int width;
         ::wxListItem *sipCpp;

        static const char *sipKwdList[] = {
            sipName_width,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxListItem, &sipCpp, &width))
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
    sipNoMethod(sipParseErr, sipName_ListItem, sipName_SetWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxListItem(void *, const sipTypeDef *);}
static void *cast_wxListItem(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxListItem *sipCpp = reinterpret_cast< ::wxListItem *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxListItem(void *, int);}
static void release_wxListItem(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxListItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxListItem(void *, SIP_SSIZE_T, void *);}
static void assign_wxListItem(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxListItem *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxListItem *>(sipSrc);
}


extern "C" {static void *array_wxListItem(SIP_SSIZE_T);}
static void *array_wxListItem(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxListItem[sipNrElem];
}


extern "C" {static void *copy_wxListItem(const void *, SIP_SSIZE_T);}
static void *copy_wxListItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxListItem(reinterpret_cast<const  ::wxListItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxListItem(sipSimpleWrapper *);}
static void dealloc_wxListItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxListItem(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxListItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxListItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxListItem *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxListItem();
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
        const  ::wxListItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxListItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxListItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxListItem[] = {{370, 255, 1}};


static PyMethodDef methods_wxListItem[] = {
    {SIP_MLNAME_CAST(sipName_Clear), meth_wxListItem_Clear, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_Clear)},
    {SIP_MLNAME_CAST(sipName_GetAlign), meth_wxListItem_GetAlign, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetAlign)},
    {SIP_MLNAME_CAST(sipName_GetBackgroundColour), meth_wxListItem_GetBackgroundColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetBackgroundColour)},
    {SIP_MLNAME_CAST(sipName_GetColumn), meth_wxListItem_GetColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetColumn)},
    {SIP_MLNAME_CAST(sipName_GetData), meth_wxListItem_GetData, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetData)},
    {SIP_MLNAME_CAST(sipName_GetFont), meth_wxListItem_GetFont, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetFont)},
    {SIP_MLNAME_CAST(sipName_GetId), meth_wxListItem_GetId, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetId)},
    {SIP_MLNAME_CAST(sipName_GetImage), meth_wxListItem_GetImage, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetImage)},
    {SIP_MLNAME_CAST(sipName_GetMask), meth_wxListItem_GetMask, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetMask)},
    {SIP_MLNAME_CAST(sipName_GetState), meth_wxListItem_GetState, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetState)},
    {SIP_MLNAME_CAST(sipName_GetText), meth_wxListItem_GetText, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetText)},
    {SIP_MLNAME_CAST(sipName_GetTextColour), meth_wxListItem_GetTextColour, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetTextColour)},
    {SIP_MLNAME_CAST(sipName_GetWidth), meth_wxListItem_GetWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_wxListItem_GetWidth)},
    {SIP_MLNAME_CAST(sipName_SetAlign), SIP_MLMETH_CAST(meth_wxListItem_SetAlign), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetAlign)},
    {SIP_MLNAME_CAST(sipName_SetBackgroundColour), SIP_MLMETH_CAST(meth_wxListItem_SetBackgroundColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetBackgroundColour)},
    {SIP_MLNAME_CAST(sipName_SetColumn), SIP_MLMETH_CAST(meth_wxListItem_SetColumn), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetColumn)},
    {SIP_MLNAME_CAST(sipName_SetData), SIP_MLMETH_CAST(meth_wxListItem_SetData), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetData)},
    {SIP_MLNAME_CAST(sipName_SetFont), SIP_MLMETH_CAST(meth_wxListItem_SetFont), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetFont)},
    {SIP_MLNAME_CAST(sipName_SetId), SIP_MLMETH_CAST(meth_wxListItem_SetId), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetId)},
    {SIP_MLNAME_CAST(sipName_SetImage), SIP_MLMETH_CAST(meth_wxListItem_SetImage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetImage)},
    {SIP_MLNAME_CAST(sipName_SetMask), SIP_MLMETH_CAST(meth_wxListItem_SetMask), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetMask)},
    {SIP_MLNAME_CAST(sipName_SetState), SIP_MLMETH_CAST(meth_wxListItem_SetState), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetState)},
    {SIP_MLNAME_CAST(sipName_SetStateMask), SIP_MLMETH_CAST(meth_wxListItem_SetStateMask), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetStateMask)},
    {SIP_MLNAME_CAST(sipName_SetText), SIP_MLMETH_CAST(meth_wxListItem_SetText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetText)},
    {SIP_MLNAME_CAST(sipName_SetTextColour), SIP_MLMETH_CAST(meth_wxListItem_SetTextColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetTextColour)},
    {SIP_MLNAME_CAST(sipName_SetWidth), SIP_MLMETH_CAST(meth_wxListItem_SetWidth), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxListItem_SetWidth)}
};

sipVariableDef variables_wxListItem[] = {
    {PropertyVariable, sipName_Width, &methods_wxListItem[12], &methods_wxListItem[25], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_TextColour, &methods_wxListItem[11], &methods_wxListItem[24], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Text, &methods_wxListItem[10], &methods_wxListItem[23], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_State, &methods_wxListItem[9], &methods_wxListItem[21], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Mask, &methods_wxListItem[8], &methods_wxListItem[20], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Image, &methods_wxListItem[7], &methods_wxListItem[19], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Id, &methods_wxListItem[6], &methods_wxListItem[18], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Font, &methods_wxListItem[5], &methods_wxListItem[17], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Data, &methods_wxListItem[4], &methods_wxListItem[16], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Column, &methods_wxListItem[3], &methods_wxListItem[15], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_BackgroundColour, &methods_wxListItem[2], &methods_wxListItem[14], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Align, &methods_wxListItem[1], &methods_wxListItem[13], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxListItem, "ListItem()\n"
"\n"
"This class stores information about a wxListCtrl item or column.");


sipClassTypeDef sipTypeDef__core_wxListItem = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxListItem,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ListItem,
        {0, 0, 1},
        26, methods_wxListItem,
        0, SIP_NULLPTR,
        12, variables_wxListItem,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxListItem,
    -1,
    -1,
    supers_wxListItem,
    SIP_NULLPTR,
    init_type_wxListItem,
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
    dealloc_wxListItem,
    assign_wxListItem,
    array_wxListItem,
    copy_wxListItem,
    release_wxListItem,
    cast_wxListItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
