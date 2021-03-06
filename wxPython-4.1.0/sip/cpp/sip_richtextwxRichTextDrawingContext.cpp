/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_richtext.h"

        #include <wx/richtext/richtextbuffer.h>

        #include <wx/richtext/richtextbuffer.h>
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


PyDoc_STRVAR(doc_wxRichTextDrawingContext_Init, "Init()");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_Init(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_Init(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextDrawingContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Init();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_Init, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_HasVirtualAttributes, "HasVirtualAttributes(obj) -> bool\n"
"\n"
"Does this object have virtual attributes? Virtual attributes can be\n"
"provided for visual cues without affecting the actual styling.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_HasVirtualAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_HasVirtualAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextObject* obj;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextObject, &obj))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HasVirtualAttributes(obj);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_HasVirtualAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetVirtualAttributes, "GetVirtualAttributes(obj) -> RichTextAttr\n"
"\n"
"Returns the virtual attributes for this object.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetVirtualAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetVirtualAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextObject* obj;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextObject, &obj))
        {
             ::wxRichTextAttr*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxRichTextAttr(sipCpp->GetVirtualAttributes(obj));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxRichTextAttr,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetVirtualAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_ApplyVirtualAttributes, "ApplyVirtualAttributes(attr, obj) -> bool\n"
"\n"
"Applies any virtual attributes relevant to this object.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_ApplyVirtualAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_ApplyVirtualAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextAttr* attr;
         ::wxRichTextObject* obj;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_attr,
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextAttr, &attr, sipType_wxRichTextObject, &obj))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ApplyVirtualAttributes(*attr,obj);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_ApplyVirtualAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetVirtualSubobjectAttributesCount, "GetVirtualSubobjectAttributesCount(obj) -> int\n"
"\n"
"Gets the count for mixed virtual attributes for individual positions\n"
"within the object.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetVirtualSubobjectAttributesCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetVirtualSubobjectAttributesCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextObject* obj;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextObject, &obj))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetVirtualSubobjectAttributesCount(obj);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetVirtualSubobjectAttributesCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetVirtualSubobjectAttributes, "GetVirtualSubobjectAttributes(obj, positions, attributes) -> int\n"
"\n"
"Gets the mixed virtual attributes for individual positions within the\n"
"object.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetVirtualSubobjectAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetVirtualSubobjectAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxRichTextObject* obj;
         ::wxArrayInt* positions;
        int positionsState = 0;
         ::wxRichTextAttrArray* attributes;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
            sipName_positions,
            sipName_attributes,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1J9", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextObject, &obj, sipType_wxArrayInt,&positions, &positionsState, sipType_wxRichTextAttrArray, &attributes))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetVirtualSubobjectAttributes(obj,*positions,*attributes);
            Py_END_ALLOW_THREADS
            sipReleaseType(positions,sipType_wxArrayInt,positionsState);

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetVirtualSubobjectAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_HasVirtualText, "HasVirtualText(obj) -> bool\n"
"\n"
"Do we have virtual text for this object? Virtual text allows an\n"
"application to replace characters in an object for editing and display\n"
"purposes, for example for highlighting special characters.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_HasVirtualText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_HasVirtualText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextPlainText* obj;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextPlainText, &obj))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HasVirtualText(obj);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_HasVirtualText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetVirtualText, "GetVirtualText(obj, text) -> bool\n"
"\n"
"Gets the virtual text for this object.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetVirtualText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetVirtualText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextPlainText* obj;
         ::wxString* text;
        int textState = 0;
        const  ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_obj,
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, sipType_wxRichTextPlainText, &obj, sipType_wxString,&text, &textState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetVirtualText(obj,*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(text,sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetVirtualText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_EnableVirtualAttributes, "EnableVirtualAttributes(b)\n"
"\n"
"Enables virtual attribute processing.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_EnableVirtualAttributes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_EnableVirtualAttributes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool b;
         ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_b,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, &b))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnableVirtualAttributes(b);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_EnableVirtualAttributes, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetVirtualAttributesEnabled, "GetVirtualAttributesEnabled() -> bool\n"
"\n"
"Returns true if virtual attribute processing is enabled.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetVirtualAttributesEnabled(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetVirtualAttributesEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextDrawingContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetVirtualAttributesEnabled();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetVirtualAttributesEnabled, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_EnableImages, "EnableImages(b)\n"
"\n"
"Enable or disable images.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_EnableImages(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_EnableImages(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool b;
         ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_b,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, &b))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnableImages(b);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_EnableImages, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetImagesEnabled, "GetImagesEnabled() -> bool\n"
"\n"
"Returns true if images are enabled.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetImagesEnabled(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetImagesEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextDrawingContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetImagesEnabled();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetImagesEnabled, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_SetLayingOut, "SetLayingOut(b)\n"
"\n"
"Set laying out flag.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_SetLayingOut(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_SetLayingOut(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool b;
         ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_b,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, &b))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLayingOut(b);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_SetLayingOut, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetLayingOut, "GetLayingOut() -> bool\n"
"\n"
"Returns true if laying out.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetLayingOut(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetLayingOut(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextDrawingContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetLayingOut();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetLayingOut, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_EnableDelayedImageLoading, "EnableDelayedImageLoading(b)\n"
"\n"
"Enable or disable delayed image loading.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_EnableDelayedImageLoading(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_EnableDelayedImageLoading(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool b;
         ::wxRichTextDrawingContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_b,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp, &b))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->EnableDelayedImageLoading(b);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_EnableDelayedImageLoading, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextDrawingContext_GetDelayedImageLoading, "GetDelayedImageLoading() -> bool\n"
"\n"
"Returns true if delayed image loading is enabled.");

extern "C" {static PyObject *meth_wxRichTextDrawingContext_GetDelayedImageLoading(PyObject *, PyObject *);}
static PyObject *meth_wxRichTextDrawingContext_GetDelayedImageLoading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRichTextDrawingContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxRichTextDrawingContext, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDelayedImageLoading();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextDrawingContext, sipName_GetDelayedImageLoading, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxRichTextDrawingContext(void *, const sipTypeDef *);}
static void *cast_wxRichTextDrawingContext(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextDrawingContext(void *, int);}
static void release_wxRichTextDrawingContext(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRichTextDrawingContext *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxRichTextDrawingContext(sipSimpleWrapper *);}
static void dealloc_wxRichTextDrawingContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextDrawingContext(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxRichTextDrawingContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRichTextDrawingContext(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxRichTextDrawingContext *sipCpp = SIP_NULLPTR;

    {
         ::wxRichTextBuffer* buffer;

        static const char *sipKwdList[] = {
            sipName_buffer,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8", sipType_wxRichTextBuffer, &buffer))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextDrawingContext(buffer);
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
        const  ::wxRichTextDrawingContext* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxRichTextDrawingContext, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRichTextDrawingContext(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxRichTextDrawingContext[] = {{42, 0, 1}};


static PyMethodDef methods_wxRichTextDrawingContext[] = {
    {SIP_MLNAME_CAST(sipName_ApplyVirtualAttributes), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_ApplyVirtualAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_ApplyVirtualAttributes)},
    {SIP_MLNAME_CAST(sipName_EnableDelayedImageLoading), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_EnableDelayedImageLoading), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_EnableDelayedImageLoading)},
    {SIP_MLNAME_CAST(sipName_EnableImages), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_EnableImages), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_EnableImages)},
    {SIP_MLNAME_CAST(sipName_EnableVirtualAttributes), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_EnableVirtualAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_EnableVirtualAttributes)},
    {SIP_MLNAME_CAST(sipName_GetDelayedImageLoading), meth_wxRichTextDrawingContext_GetDelayedImageLoading, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetDelayedImageLoading)},
    {SIP_MLNAME_CAST(sipName_GetImagesEnabled), meth_wxRichTextDrawingContext_GetImagesEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetImagesEnabled)},
    {SIP_MLNAME_CAST(sipName_GetLayingOut), meth_wxRichTextDrawingContext_GetLayingOut, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetLayingOut)},
    {SIP_MLNAME_CAST(sipName_GetVirtualAttributes), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_GetVirtualAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetVirtualAttributes)},
    {SIP_MLNAME_CAST(sipName_GetVirtualAttributesEnabled), meth_wxRichTextDrawingContext_GetVirtualAttributesEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetVirtualAttributesEnabled)},
    {SIP_MLNAME_CAST(sipName_GetVirtualSubobjectAttributes), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_GetVirtualSubobjectAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetVirtualSubobjectAttributes)},
    {SIP_MLNAME_CAST(sipName_GetVirtualSubobjectAttributesCount), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_GetVirtualSubobjectAttributesCount), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetVirtualSubobjectAttributesCount)},
    {SIP_MLNAME_CAST(sipName_GetVirtualText), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_GetVirtualText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_GetVirtualText)},
    {SIP_MLNAME_CAST(sipName_HasVirtualAttributes), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_HasVirtualAttributes), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_HasVirtualAttributes)},
    {SIP_MLNAME_CAST(sipName_HasVirtualText), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_HasVirtualText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_HasVirtualText)},
    {SIP_MLNAME_CAST(sipName_Init), meth_wxRichTextDrawingContext_Init, METH_VARARGS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_Init)},
    {SIP_MLNAME_CAST(sipName_SetLayingOut), SIP_MLMETH_CAST(meth_wxRichTextDrawingContext_SetLayingOut), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextDrawingContext_SetLayingOut)}
};


extern "C" {static PyObject *varget_wxRichTextDrawingContext_m_buffer(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextDrawingContext_m_buffer(void *sipSelf, PyObject *, PyObject *)
{
     ::wxRichTextBuffer*sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipCpp->m_buffer;

    return sipConvertFromType(sipVal, sipType_wxRichTextBuffer, SIP_NULLPTR);
}


extern "C" {static int varset_wxRichTextDrawingContext_m_buffer(void *, PyObject *, PyObject *);}
static int varset_wxRichTextDrawingContext_m_buffer(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxRichTextBuffer*sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxRichTextBuffer *>(sipForceConvertToType(sipPy, sipType_wxRichTextBuffer, SIP_NULLPTR, 0, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_buffer = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxRichTextDrawingContext_m_enableDelayedImageLoading(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextDrawingContext_m_enableDelayedImageLoading(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipCpp->m_enableDelayedImageLoading;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxRichTextDrawingContext_m_enableDelayedImageLoading(void *, PyObject *, PyObject *);}
static int varset_wxRichTextDrawingContext_m_enableDelayedImageLoading(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->m_enableDelayedImageLoading = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_wxRichTextDrawingContext_m_enableImages(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextDrawingContext_m_enableImages(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipCpp->m_enableImages;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxRichTextDrawingContext_m_enableImages(void *, PyObject *, PyObject *);}
static int varset_wxRichTextDrawingContext_m_enableImages(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->m_enableImages = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_wxRichTextDrawingContext_m_enableVirtualAttributes(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextDrawingContext_m_enableVirtualAttributes(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipCpp->m_enableVirtualAttributes;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxRichTextDrawingContext_m_enableVirtualAttributes(void *, PyObject *, PyObject *);}
static int varset_wxRichTextDrawingContext_m_enableVirtualAttributes(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->m_enableVirtualAttributes = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_wxRichTextDrawingContext_m_layingOut(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRichTextDrawingContext_m_layingOut(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipCpp->m_layingOut;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_wxRichTextDrawingContext_m_layingOut(void *, PyObject *, PyObject *);}
static int varset_wxRichTextDrawingContext_m_layingOut(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxRichTextDrawingContext *sipCpp = reinterpret_cast< ::wxRichTextDrawingContext *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->m_layingOut = static_cast<bool>(sipVal);

    return 0;
}

sipVariableDef variables_wxRichTextDrawingContext[] = {
    {PropertyVariable, sipName_VirtualAttributesEnabled, &methods_wxRichTextDrawingContext[8], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_LayingOut, &methods_wxRichTextDrawingContext[6], &methods_wxRichTextDrawingContext[15], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ImagesEnabled, &methods_wxRichTextDrawingContext[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DelayedImageLoading, &methods_wxRichTextDrawingContext[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_buffer, (PyMethodDef *)varget_wxRichTextDrawingContext_m_buffer, (PyMethodDef *)varset_wxRichTextDrawingContext_m_buffer, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_enableDelayedImageLoading, (PyMethodDef *)varget_wxRichTextDrawingContext_m_enableDelayedImageLoading, (PyMethodDef *)varset_wxRichTextDrawingContext_m_enableDelayedImageLoading, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_enableImages, (PyMethodDef *)varget_wxRichTextDrawingContext_m_enableImages, (PyMethodDef *)varset_wxRichTextDrawingContext_m_enableImages, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_enableVirtualAttributes, (PyMethodDef *)varget_wxRichTextDrawingContext_m_enableVirtualAttributes, (PyMethodDef *)varset_wxRichTextDrawingContext_m_enableVirtualAttributes, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_layingOut, (PyMethodDef *)varget_wxRichTextDrawingContext_m_layingOut, (PyMethodDef *)varset_wxRichTextDrawingContext_m_layingOut, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxRichTextDrawingContext, "RichTextDrawingContext(buffer)\n"
"\n"
"A class for passing information to drawing and measuring functions.");


sipClassTypeDef sipTypeDef__richtext_wxRichTextDrawingContext = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxRichTextDrawingContext,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextDrawingContext,
        {0, 0, 1},
        16, methods_wxRichTextDrawingContext,
        0, SIP_NULLPTR,
        9, variables_wxRichTextDrawingContext,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRichTextDrawingContext,
    -1,
    -1,
    supers_wxRichTextDrawingContext,
    SIP_NULLPTR,
    init_type_wxRichTextDrawingContext,
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
    dealloc_wxRichTextDrawingContext,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxRichTextDrawingContext,
    cast_wxRichTextDrawingContext,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
