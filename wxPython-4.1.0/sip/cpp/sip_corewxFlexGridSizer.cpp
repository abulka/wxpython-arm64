/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/sizer.h>

        #include <wx/gdicmn.h>
        #include <wx/window.h>
        #include <wx/sizer.h>
        #include <wx/gdicmn.h>
        #include <wx/sizer.h>
        #include <wx/sizer.h>
        
        
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxFlexGridSizer : public  ::wxFlexGridSizer
{
public:
    sipwxFlexGridSizer(int,int,int);
    sipwxFlexGridSizer(int,const  ::wxSize&);
    sipwxFlexGridSizer(int,int,int,int);
    sipwxFlexGridSizer(int,int,const  ::wxSize&);
    virtual ~sipwxFlexGridSizer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void RecalcSizes() SIP_OVERRIDE;
    void RepositionChildren(const  ::wxSize&) SIP_OVERRIDE;
     ::wxSize CalcMin() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxFlexGridSizer(const sipwxFlexGridSizer &);
    sipwxFlexGridSizer &operator = (const sipwxFlexGridSizer &);

    char sipPyMethods[3];
};

sipwxFlexGridSizer::sipwxFlexGridSizer(int cols,int vgap,int hgap):  ::wxFlexGridSizer(cols,vgap,hgap), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFlexGridSizer::sipwxFlexGridSizer(int cols,const  ::wxSize& gap):  ::wxFlexGridSizer(cols,gap), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFlexGridSizer::sipwxFlexGridSizer(int rows,int cols,int vgap,int hgap):  ::wxFlexGridSizer(rows,cols,vgap,hgap), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFlexGridSizer::sipwxFlexGridSizer(int rows,int cols,const  ::wxSize& gap):  ::wxFlexGridSizer(rows,cols,gap), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxFlexGridSizer::~sipwxFlexGridSizer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxFlexGridSizer::RecalcSizes()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_RecalcSizes);

    if (!sipMeth)
    {
         ::wxFlexGridSizer::RecalcSizes();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxFlexGridSizer::RepositionChildren(const  ::wxSize& minSize)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_RepositionChildren);

    if (!sipMeth)
    {
         ::wxFlexGridSizer::RepositionChildren(minSize);
        return;
    }

    extern void sipVH__core_100(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxSize&);

    sipVH__core_100(sipGILState, 0, sipPySelf, sipMeth, minSize);
}

 ::wxSize sipwxFlexGridSizer::CalcMin()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_CalcMin);

    if (!sipMeth)
        return  ::wxFlexGridSizer::CalcMin();

    extern  ::wxSize sipVH__core_99(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_99(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxFlexGridSizer_AddGrowableCol, "AddGrowableCol(idx, proportion=0)\n"
"\n"
"Specifies that column idx (starting from zero) should be grown if\n"
"there is extra space available to the sizer.");

extern "C" {static PyObject *meth_wxFlexGridSizer_AddGrowableCol(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_AddGrowableCol(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t idx;
        int proportion = 0;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_idx,
            sipName_proportion,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=|i", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &idx, &proportion))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->AddGrowableCol(idx,proportion);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_AddGrowableCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_AddGrowableRow, "AddGrowableRow(idx, proportion=0)\n"
"\n"
"Specifies that row idx (starting from zero) should be grown if there\n"
"is extra space available to the sizer.");

extern "C" {static PyObject *meth_wxFlexGridSizer_AddGrowableRow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_AddGrowableRow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t idx;
        int proportion = 0;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_idx,
            sipName_proportion,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=|i", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &idx, &proportion))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->AddGrowableRow(idx,proportion);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_AddGrowableRow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_GetFlexibleDirection, "GetFlexibleDirection() -> int\n"
"\n"
"Returns a wxOrientation value that specifies whether the sizer\n"
"flexibly resizes its columns, rows, or both (default).");

extern "C" {static PyObject *meth_wxFlexGridSizer_GetFlexibleDirection(PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_GetFlexibleDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFlexGridSizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFlexGridSizer, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFlexibleDirection();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_GetFlexibleDirection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_GetNonFlexibleGrowMode, "GetNonFlexibleGrowMode() -> FlexSizerGrowMode\n"
"\n"
"Returns the value that specifies how the sizer grows in the \"non-\n"
"flexible\" direction if there is one.");

extern "C" {static PyObject *meth_wxFlexGridSizer_GetNonFlexibleGrowMode(PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_GetNonFlexibleGrowMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFlexGridSizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFlexGridSizer, &sipCpp))
        {
             ::wxFlexSizerGrowMode sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetNonFlexibleGrowMode();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxFlexSizerGrowMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_GetNonFlexibleGrowMode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_IsColGrowable, "IsColGrowable(idx) -> bool\n"
"\n"
"Returns true if column idx is growable.");

extern "C" {static PyObject *meth_wxFlexGridSizer_IsColGrowable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_IsColGrowable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t idx;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_idx,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &idx))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsColGrowable(idx);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_IsColGrowable, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_IsRowGrowable, "IsRowGrowable(idx) -> bool\n"
"\n"
"Returns true if row idx is growable.");

extern "C" {static PyObject *meth_wxFlexGridSizer_IsRowGrowable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_IsRowGrowable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t idx;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_idx,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &idx))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsRowGrowable(idx);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_IsRowGrowable, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_RemoveGrowableCol, "RemoveGrowableCol(idx)\n"
"\n"
"Specifies that the idx column index is no longer growable.");

extern "C" {static PyObject *meth_wxFlexGridSizer_RemoveGrowableCol(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_RemoveGrowableCol(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t idx;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_idx,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &idx))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RemoveGrowableCol(idx);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_RemoveGrowableCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_RemoveGrowableRow, "RemoveGrowableRow(idx)\n"
"\n"
"Specifies that the idx row index is no longer growable.");

extern "C" {static PyObject *meth_wxFlexGridSizer_RemoveGrowableRow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_RemoveGrowableRow(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        size_t idx;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_idx,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B=", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &idx))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->RemoveGrowableRow(idx);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_RemoveGrowableRow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_SetFlexibleDirection, "SetFlexibleDirection(direction)\n"
"\n"
"Specifies whether the sizer should flexibly resize its columns, rows,\n"
"or both.");

extern "C" {static PyObject *meth_wxFlexGridSizer_SetFlexibleDirection(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_SetFlexibleDirection(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int direction;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_direction,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, &direction))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFlexibleDirection(direction);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_SetFlexibleDirection, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_SetNonFlexibleGrowMode, "SetNonFlexibleGrowMode(mode)\n"
"\n"
"Specifies how the sizer should grow in the non-flexible direction if\n"
"there is one (so SetFlexibleDirection() must have been called\n"
"previously).");

extern "C" {static PyObject *meth_wxFlexGridSizer_SetNonFlexibleGrowMode(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_SetNonFlexibleGrowMode(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxFlexSizerGrowMode mode;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, sipType_wxFlexSizerGrowMode, &mode))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetNonFlexibleGrowMode(mode);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_SetNonFlexibleGrowMode, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_GetRowHeights, "GetRowHeights() -> ArrayInt\n"
"\n"
"Returns a read-only array containing the heights of the rows in the\n"
"sizer.");

extern "C" {static PyObject *meth_wxFlexGridSizer_GetRowHeights(PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_GetRowHeights(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFlexGridSizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFlexGridSizer, &sipCpp))
        {
             ::wxArrayInt*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxArrayInt(sipCpp->GetRowHeights());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxArrayInt,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_GetRowHeights, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_GetColWidths, "GetColWidths() -> ArrayInt\n"
"\n"
"Returns a read-only array containing the widths of the columns in the\n"
"sizer.");

extern "C" {static PyObject *meth_wxFlexGridSizer_GetColWidths(PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_GetColWidths(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxFlexGridSizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFlexGridSizer, &sipCpp))
        {
             ::wxArrayInt*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxArrayInt(sipCpp->GetColWidths());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxArrayInt,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_GetColWidths, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_RepositionChildren, "RepositionChildren(minSize)\n"
"\n"
"Method which must be overridden in the derived sizer classes.");

extern "C" {static PyObject *meth_wxFlexGridSizer_RepositionChildren(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_RepositionChildren(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxSize* minSize;
        int minSizeState = 0;
         ::wxFlexGridSizer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_minSize,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxFlexGridSizer, &sipCpp, sipType_wxSize, &minSize, &minSizeState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxFlexGridSizer::RepositionChildren(*minSize) : sipCpp->RepositionChildren(*minSize));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(minSize),sipType_wxSize,minSizeState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_RepositionChildren, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxFlexGridSizer_CalcMin, "CalcMin() -> Size\n"
"\n"
"This method is abstract and has to be overwritten by any derived\n"
"class.");

extern "C" {static PyObject *meth_wxFlexGridSizer_CalcMin(PyObject *, PyObject *);}
static PyObject *meth_wxFlexGridSizer_CalcMin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxFlexGridSizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxFlexGridSizer, &sipCpp))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxFlexGridSizer::CalcMin() : sipCpp->CalcMin()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FlexGridSizer, sipName_CalcMin, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxFlexGridSizer(void *, const sipTypeDef *);}
static void *cast_wxFlexGridSizer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxFlexGridSizer *sipCpp = reinterpret_cast< ::wxFlexGridSizer *>(sipCppV);

    if (targetType == sipType_wxGridSizer)
        return static_cast< ::wxGridSizer *>(sipCpp);

    if (targetType == sipType_wxSizer)
        return static_cast< ::wxSizer *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxFlexGridSizer(void *, int);}
static void release_wxFlexGridSizer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxFlexGridSizer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxFlexGridSizer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxFlexGridSizer(sipSimpleWrapper *);}
static void dealloc_wxFlexGridSizer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxFlexGridSizer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxFlexGridSizer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxFlexGridSizer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxFlexGridSizer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxFlexGridSizer *sipCpp = SIP_NULLPTR;

    {
        int cols;
        int vgap;
        int hgap;

        static const char *sipKwdList[] = {
            sipName_cols,
            sipName_vgap,
            sipName_hgap,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iii", &cols, &vgap, &hgap))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFlexGridSizer(cols,vgap,hgap);
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

    {
        int cols;
        const  ::wxSize& gapdef = wxSize(0,0);
        const  ::wxSize* gap = &gapdef;
        int gapState = 0;

        static const char *sipKwdList[] = {
            sipName_cols,
            sipName_gap,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i|J1", &cols, sipType_wxSize, &gap, &gapState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFlexGridSizer(cols,*gap);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(gap),sipType_wxSize,gapState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int rows;
        int cols;
        int vgap;
        int hgap;

        static const char *sipKwdList[] = {
            sipName_rows,
            sipName_cols,
            sipName_vgap,
            sipName_hgap,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiii", &rows, &cols, &vgap, &hgap))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFlexGridSizer(rows,cols,vgap,hgap);
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

    {
        int rows;
        int cols;
        const  ::wxSize* gap;
        int gapState = 0;

        static const char *sipKwdList[] = {
            sipName_rows,
            sipName_cols,
            sipName_gap,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiJ1", &rows, &cols, sipType_wxSize, &gap, &gapState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxFlexGridSizer(rows,cols,*gap);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(gap),sipType_wxSize,gapState);

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
static sipEncodedTypeDef supers_wxFlexGridSizer[] = {{235, 255, 1}};


static PyMethodDef methods_wxFlexGridSizer[] = {
    {SIP_MLNAME_CAST(sipName_AddGrowableCol), SIP_MLMETH_CAST(meth_wxFlexGridSizer_AddGrowableCol), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_AddGrowableCol)},
    {SIP_MLNAME_CAST(sipName_AddGrowableRow), SIP_MLMETH_CAST(meth_wxFlexGridSizer_AddGrowableRow), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_AddGrowableRow)},
    {SIP_MLNAME_CAST(sipName_CalcMin), meth_wxFlexGridSizer_CalcMin, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_CalcMin)},
    {SIP_MLNAME_CAST(sipName_GetColWidths), meth_wxFlexGridSizer_GetColWidths, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_GetColWidths)},
    {SIP_MLNAME_CAST(sipName_GetFlexibleDirection), meth_wxFlexGridSizer_GetFlexibleDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_GetFlexibleDirection)},
    {SIP_MLNAME_CAST(sipName_GetNonFlexibleGrowMode), meth_wxFlexGridSizer_GetNonFlexibleGrowMode, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_GetNonFlexibleGrowMode)},
    {SIP_MLNAME_CAST(sipName_GetRowHeights), meth_wxFlexGridSizer_GetRowHeights, METH_VARARGS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_GetRowHeights)},
    {SIP_MLNAME_CAST(sipName_IsColGrowable), SIP_MLMETH_CAST(meth_wxFlexGridSizer_IsColGrowable), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_IsColGrowable)},
    {SIP_MLNAME_CAST(sipName_IsRowGrowable), SIP_MLMETH_CAST(meth_wxFlexGridSizer_IsRowGrowable), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_IsRowGrowable)},
    {SIP_MLNAME_CAST(sipName_RemoveGrowableCol), SIP_MLMETH_CAST(meth_wxFlexGridSizer_RemoveGrowableCol), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_RemoveGrowableCol)},
    {SIP_MLNAME_CAST(sipName_RemoveGrowableRow), SIP_MLMETH_CAST(meth_wxFlexGridSizer_RemoveGrowableRow), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_RemoveGrowableRow)},
    {SIP_MLNAME_CAST(sipName_RepositionChildren), SIP_MLMETH_CAST(meth_wxFlexGridSizer_RepositionChildren), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_RepositionChildren)},
    {SIP_MLNAME_CAST(sipName_SetFlexibleDirection), SIP_MLMETH_CAST(meth_wxFlexGridSizer_SetFlexibleDirection), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_SetFlexibleDirection)},
    {SIP_MLNAME_CAST(sipName_SetNonFlexibleGrowMode), SIP_MLMETH_CAST(meth_wxFlexGridSizer_SetNonFlexibleGrowMode), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxFlexGridSizer_SetNonFlexibleGrowMode)}
};

sipVariableDef variables_wxFlexGridSizer[] = {
    {PropertyVariable, sipName_RowHeights, &methods_wxFlexGridSizer[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_NonFlexibleGrowMode, &methods_wxFlexGridSizer[5], &methods_wxFlexGridSizer[13], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_FlexibleDirection, &methods_wxFlexGridSizer[4], &methods_wxFlexGridSizer[12], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ColWidths, &methods_wxFlexGridSizer[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxFlexGridSizer, "FlexGridSizer(cols, vgap, hgap)\n"
"FlexGridSizer(cols, gap=Size(0,0))\n"
"FlexGridSizer(rows, cols, vgap, hgap)\n"
"FlexGridSizer(rows, cols, gap)\n"
"\n"
"A flex grid sizer is a sizer which lays out its children in a two-\n"
"dimensional table with all table fields in one row having the same\n"
"height and all fields in one column having the same width, but all\n"
"rows or all columns are not necessarily the same height or width as in\n"
"the wxGridSizer.");


sipClassTypeDef sipTypeDef__core_wxFlexGridSizer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxFlexGridSizer,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_FlexGridSizer,
        {0, 0, 1},
        14, methods_wxFlexGridSizer,
        0, SIP_NULLPTR,
        4, variables_wxFlexGridSizer,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxFlexGridSizer,
    -1,
    -1,
    supers_wxFlexGridSizer,
    SIP_NULLPTR,
    init_type_wxFlexGridSizer,
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
    dealloc_wxFlexGridSizer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxFlexGridSizer,
    cast_wxFlexGridSizer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
