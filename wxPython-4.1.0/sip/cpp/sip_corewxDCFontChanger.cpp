/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dc.h>

        #include <wx/dc.h>
        #include <wx/font.h>


PyDoc_STRVAR(doc_wxDCFontChanger_Set, "Set(font)\n"
"\n"
"Set the font to use.");

extern "C" {static PyObject *meth_wxDCFontChanger_Set(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDCFontChanger_Set(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFont* font;
         ::wxDCFontChanger *sipCpp;

        static const char *sipKwdList[] = {
            sipName_font,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxDCFontChanger, &sipCpp, sipType_wxFont, &font))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Set(*font);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DCFontChanger, sipName_Set, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDCFontChanger(void *, int);}
static void release_wxDCFontChanger(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxDCFontChanger *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDCFontChanger(sipSimpleWrapper *);}
static void dealloc_wxDCFontChanger(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDCFontChanger(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxDCFontChanger(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDCFontChanger(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxDCFontChanger *sipCpp = SIP_NULLPTR;

    {
         ::wxDC* dc;

        static const char *sipKwdList[] = {
            sipName_dc,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxDC, &dc))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDCFontChanger(*dc);
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
         ::wxDC* dc;
        const  ::wxFont* font;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_font,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J9", sipType_wxDC, &dc, sipType_wxFont, &font))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxDCFontChanger(*dc,*font);
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


static PyMethodDef methods_wxDCFontChanger[] = {
    {SIP_MLNAME_CAST(sipName_Set), SIP_MLMETH_CAST(meth_wxDCFontChanger_Set), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDCFontChanger_Set)}
};

PyDoc_STRVAR(doc_wxDCFontChanger, "DCFontChanger(dc)\n"
"DCFontChanger(dc, font)\n"
"\n"
"wxDCFontChanger is a small helper class for setting a font on a wxDC\n"
"and unsetting it automatically in the destructor, restoring the\n"
"previous one.");


sipClassTypeDef sipTypeDef__core_wxDCFontChanger = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxDCFontChanger,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DCFontChanger,
        {0, 0, 1},
        1, methods_wxDCFontChanger,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDCFontChanger,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxDCFontChanger,
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
    dealloc_wxDCFontChanger,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDCFontChanger,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
