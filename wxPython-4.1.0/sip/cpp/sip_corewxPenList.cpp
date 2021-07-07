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

        #include <wx/pen.h>
        #include "arrayholder.h"
        #include <wx/colour.h>


PyDoc_STRVAR(doc_wxPenList_FindOrCreatePen, "FindOrCreatePen(colour, width=1, style=PENSTYLE_SOLID) -> Pen\n"
"\n"
"Finds a pen with the specified attributes and returns it, else creates\n"
"a new pen, adds it to the pen list, and returns it.");

extern "C" {static PyObject *meth_wxPenList_FindOrCreatePen(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPenList_FindOrCreatePen(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* colour;
        int colourState = 0;
        int width = 1;
         ::wxPenStyle style = wxPENSTYLE_SOLID;
         ::wxPenList *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colour,
            sipName_width,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|iE", &sipSelf, sipType_wxPenList, &sipCpp, sipType_wxColour, &colour, &colourState, &width, sipType_wxPenStyle, &style))
        {
             ::wxPen*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->FindOrCreatePen(*colour,width,style);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPen,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PenList, sipName_FindOrCreatePen, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPenList(void *, int);}
static void release_wxPenList(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPenList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxPenList(void *, SIP_SSIZE_T, void *);}
static void assign_wxPenList(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPenList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPenList *>(sipSrc);
}


extern "C" {static void *array_wxPenList(SIP_SSIZE_T);}
static void *array_wxPenList(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPenList[sipNrElem];
}


extern "C" {static void *copy_wxPenList(const void *, SIP_SSIZE_T);}
static void *copy_wxPenList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPenList(reinterpret_cast<const  ::wxPenList *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPenList(sipSimpleWrapper *);}
static void dealloc_wxPenList(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPenList(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPenList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPenList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPenList *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPenList();
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
        const  ::wxPenList* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxPenList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPenList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxPenList[] = {
    {SIP_MLNAME_CAST(sipName_FindOrCreatePen), SIP_MLMETH_CAST(meth_wxPenList_FindOrCreatePen), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPenList_FindOrCreatePen)}
};

PyDoc_STRVAR(doc_wxPenList, "PenList()\n"
"\n"
"There is only one instance of this class: wxThePenList.");


sipClassTypeDef sipTypeDef__core_wxPenList = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPenList,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PenList,
        {0, 0, 1},
        1, methods_wxPenList,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPenList,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPenList,
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
    dealloc_wxPenList,
    assign_wxPenList,
    array_wxPenList,
    copy_wxPenList,
    release_wxPenList,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
