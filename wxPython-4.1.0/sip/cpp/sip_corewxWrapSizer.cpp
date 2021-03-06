/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/wrapsizer.h>

        #include <wx/sizer.h>
        #include <wx/gdicmn.h>
        #include <wx/window.h>
        #include <wx/sizer.h>
        #include <wx/gdicmn.h>
        #include <wx/sizer.h>
        
        
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxWrapSizer : public  ::wxWrapSizer
{
public:
    sipwxWrapSizer(int,int);
    virtual ~sipwxWrapSizer();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtectVirt_IsSpaceItem(bool, ::wxSizerItem*) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool IsSpaceItem( ::wxSizerItem*) const SIP_OVERRIDE;
    void RecalcSizes() SIP_OVERRIDE;
    void RepositionChildren(const  ::wxSize&) SIP_OVERRIDE;
     ::wxSize CalcMin() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxWrapSizer(const sipwxWrapSizer &);
    sipwxWrapSizer &operator = (const sipwxWrapSizer &);

    char sipPyMethods[4];
};

sipwxWrapSizer::sipwxWrapSizer(int orient,int flags):  ::wxWrapSizer(orient,flags), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWrapSizer::~sipwxWrapSizer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxWrapSizer::IsSpaceItem( ::wxSizerItem*item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_IsSpaceItem);

    if (!sipMeth)
        return  ::wxWrapSizer::IsSpaceItem(item);

    extern bool sipVH__core_101(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxSizerItem*);

    return sipVH__core_101(sipGILState, 0, sipPySelf, sipMeth, item);
}

void sipwxWrapSizer::RecalcSizes()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_RecalcSizes);

    if (!sipMeth)
    {
         ::wxWrapSizer::RecalcSizes();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxWrapSizer::RepositionChildren(const  ::wxSize& minSize)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_RepositionChildren);

    if (!sipMeth)
    {
         ::wxWrapSizer::RepositionChildren(minSize);
        return;
    }

    extern void sipVH__core_100(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxSize&);

    sipVH__core_100(sipGILState, 0, sipPySelf, sipMeth, minSize);
}

 ::wxSize sipwxWrapSizer::CalcMin()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_CalcMin);

    if (!sipMeth)
        return  ::wxWrapSizer::CalcMin();

    extern  ::wxSize sipVH__core_99(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_99(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxWrapSizer::sipProtectVirt_IsSpaceItem(bool sipSelfWasArg, ::wxSizerItem*item) const
{
    return (sipSelfWasArg ?  ::wxWrapSizer::IsSpaceItem(item) : IsSpaceItem(item));
}


PyDoc_STRVAR(doc_wxWrapSizer_InformFirstDirection, "InformFirstDirection(direction, size, availableOtherDir) -> bool\n"
"\n"
"Not used by an application.");

extern "C" {static PyObject *meth_wxWrapSizer_InformFirstDirection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWrapSizer_InformFirstDirection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int direction;
        int size;
        int availableOtherDir;
         ::wxWrapSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_direction,
            sipName_size,
            sipName_availableOtherDir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Biii", &sipSelf, sipType_wxWrapSizer, &sipCpp, &direction, &size, &availableOtherDir))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->InformFirstDirection(direction,size,availableOtherDir);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrapSizer, sipName_InformFirstDirection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWrapSizer_RepositionChildren, "RepositionChildren(minSize)\n"
"\n"
"Method which must be overridden in the derived sizer classes.");

extern "C" {static PyObject *meth_wxWrapSizer_RepositionChildren(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWrapSizer_RepositionChildren(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxSize* minSize;
        int minSizeState = 0;
         ::wxWrapSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_minSize,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxWrapSizer, &sipCpp, sipType_wxSize, &minSize, &minSizeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxWrapSizer::RepositionChildren(*minSize) : sipCpp->RepositionChildren(*minSize));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(minSize),sipType_wxSize,minSizeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrapSizer, sipName_RepositionChildren, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWrapSizer_CalcMin, "CalcMin() -> Size\n"
"\n"
"Implements the calculation of a box sizer's minimal.");

extern "C" {static PyObject *meth_wxWrapSizer_CalcMin(PyObject *, PyObject *);}
static PyObject *meth_wxWrapSizer_CalcMin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWrapSizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWrapSizer, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxWrapSizer::CalcMin() : sipCpp->CalcMin()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrapSizer, sipName_CalcMin, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWrapSizer_IsSpaceItem, "IsSpaceItem(item) -> bool\n"
"\n"
"Can be overridden in the derived classes to treat some normal items as\n"
"spacers.");

extern "C" {static PyObject *meth_wxWrapSizer_IsSpaceItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWrapSizer_IsSpaceItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxSizerItem* item;
        const sipwxWrapSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_item,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxWrapSizer, &sipCpp, sipType_wxSizerItem, &item))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_IsSpaceItem(sipSelfWasArg,item);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrapSizer, sipName_IsSpaceItem, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxWrapSizer(void *, const sipTypeDef *);}
static void *cast_wxWrapSizer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxWrapSizer *sipCpp = reinterpret_cast< ::wxWrapSizer *>(sipCppV);

    if (targetType == sipType_wxBoxSizer)
        return static_cast< ::wxBoxSizer *>(sipCpp);

    if (targetType == sipType_wxSizer)
        return static_cast< ::wxSizer *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxWrapSizer(void *, int);}
static void release_wxWrapSizer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxWrapSizer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxWrapSizer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxWrapSizer(sipSimpleWrapper *);}
static void dealloc_wxWrapSizer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxWrapSizer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxWrapSizer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxWrapSizer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxWrapSizer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxWrapSizer *sipCpp = SIP_NULLPTR;

    {
        int orient = wxHORIZONTAL;
        int flags = wxWRAPSIZER_DEFAULT_FLAGS;

        static const char *sipKwdList[] = {
            sipName_orient,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &orient, &flags))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWrapSizer(orient,flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxWrapSizer[] = {{41, 255, 1}};


static PyMethodDef methods_wxWrapSizer[] = {
    {SIP_MLNAME_CAST(sipName_CalcMin), meth_wxWrapSizer_CalcMin, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWrapSizer_CalcMin)},
    {SIP_MLNAME_CAST(sipName_InformFirstDirection), SIP_MLMETH_CAST(meth_wxWrapSizer_InformFirstDirection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWrapSizer_InformFirstDirection)},
    {SIP_MLNAME_CAST(sipName_IsSpaceItem), SIP_MLMETH_CAST(meth_wxWrapSizer_IsSpaceItem), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWrapSizer_IsSpaceItem)},
    {SIP_MLNAME_CAST(sipName_RepositionChildren), SIP_MLMETH_CAST(meth_wxWrapSizer_RepositionChildren), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWrapSizer_RepositionChildren)}
};

PyDoc_STRVAR(doc_wxWrapSizer, "WrapSizer(orient=HORIZONTAL, flags=WRAPSIZER_DEFAULT_FLAGS)\n"
"\n"
"A wrap sizer lays out its items in a single line, like a box sizer  as\n"
"long as there is space available in that direction.");


sipClassTypeDef sipTypeDef__core_wxWrapSizer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxWrapSizer,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_WrapSizer,
        {0, 0, 1},
        4, methods_wxWrapSizer,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxWrapSizer,
    -1,
    -1,
    supers_wxWrapSizer,
    SIP_NULLPTR,
    init_type_wxWrapSizer,
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
    dealloc_wxWrapSizer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxWrapSizer,
    cast_wxWrapSizer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
