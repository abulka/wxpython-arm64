/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/graphics.h>

        #include <wx/graphics.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGraphicsPen(void *, const sipTypeDef *);}
static void *cast_wxGraphicsPen(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGraphicsPen *sipCpp = reinterpret_cast< ::wxGraphicsPen *>(sipCppV);

    if (targetType == sipType_wxGraphicsObject)
        return static_cast< ::wxGraphicsObject *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGraphicsPen(void *, int);}
static void release_wxGraphicsPen(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxGraphicsPen *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGraphicsPen(void *, SIP_SSIZE_T, void *);}
static void assign_wxGraphicsPen(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGraphicsPen *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGraphicsPen *>(sipSrc);
}


extern "C" {static void *array_wxGraphicsPen(SIP_SSIZE_T);}
static void *array_wxGraphicsPen(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGraphicsPen[sipNrElem];
}


extern "C" {static void *copy_wxGraphicsPen(const void *, SIP_SSIZE_T);}
static void *copy_wxGraphicsPen(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGraphicsPen(reinterpret_cast<const  ::wxGraphicsPen *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGraphicsPen(sipSimpleWrapper *);}
static void dealloc_wxGraphicsPen(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGraphicsPen(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxGraphicsPen(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGraphicsPen(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxGraphicsPen *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsPen();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const  ::wxGraphicsPen* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGraphicsPen, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxGraphicsPen(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGraphicsPen[] = {{229, 255, 1}};

PyDoc_STRVAR(doc_wxGraphicsPen, "A wxGraphicsPen is a native representation of a pen.");


sipClassTypeDef sipTypeDef__core_wxGraphicsPen = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxGraphicsPen,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GraphicsPen,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGraphicsPen,
    -1,
    -1,
    supers_wxGraphicsPen,
    SIP_NULLPTR,
    init_type_wxGraphicsPen,
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
    dealloc_wxGraphicsPen,
    assign_wxGraphicsPen,
    array_wxGraphicsPen,
    copy_wxGraphicsPen,
    release_wxGraphicsPen,
    cast_wxGraphicsPen,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
