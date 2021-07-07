/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_grid.h"

        #include <wx/grid.h>

        #include <wx/grid.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>


class sipwxGridRowHeaderRendererDefault : public  ::wxGridRowHeaderRendererDefault
{
public:
    sipwxGridRowHeaderRendererDefault();
    sipwxGridRowHeaderRendererDefault(const  ::wxGridRowHeaderRendererDefault&);
    virtual ~sipwxGridRowHeaderRendererDefault();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void DrawLabel(const  ::wxGrid&, ::wxDC&,const  ::wxString&,const  ::wxRect&,int,int,int) const SIP_OVERRIDE;
    void DrawBorder(const  ::wxGrid&, ::wxDC&, ::wxRect&) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxGridRowHeaderRendererDefault(const sipwxGridRowHeaderRendererDefault &);
    sipwxGridRowHeaderRendererDefault &operator = (const sipwxGridRowHeaderRendererDefault &);

    char sipPyMethods[2];
};

sipwxGridRowHeaderRendererDefault::sipwxGridRowHeaderRendererDefault():  ::wxGridRowHeaderRendererDefault(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridRowHeaderRendererDefault::sipwxGridRowHeaderRendererDefault(const  ::wxGridRowHeaderRendererDefault& a0):  ::wxGridRowHeaderRendererDefault(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridRowHeaderRendererDefault::~sipwxGridRowHeaderRendererDefault()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxGridRowHeaderRendererDefault::DrawLabel(const  ::wxGrid& grid, ::wxDC& dc,const  ::wxString& value,const  ::wxRect& rect,int horizAlign,int vertAlign,int textOrientation) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_DrawLabel);

    if (!sipMeth)
    {
         ::wxGridRowHeaderRendererDefault::DrawLabel(grid,dc,value,rect,horizAlign,vertAlign,textOrientation);
        return;
    }

    extern void sipVH__grid_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxGrid&, ::wxDC&,const  ::wxString&,const  ::wxRect&,int,int,int);

    sipVH__grid_18(sipGILState, 0, sipPySelf, sipMeth, grid, dc, value, rect, horizAlign, vertAlign, textOrientation);
}

void sipwxGridRowHeaderRendererDefault::DrawBorder(const  ::wxGrid& grid, ::wxDC& dc, ::wxRect& rect) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_DrawBorder);

    if (!sipMeth)
    {
         ::wxGridRowHeaderRendererDefault::DrawBorder(grid,dc,rect);
        return;
    }

    extern void sipVH__grid_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxGrid&, ::wxDC&, ::wxRect&);

    sipVH__grid_17(sipGILState, 0, sipPySelf, sipMeth, grid, dc, rect);
}


PyDoc_STRVAR(doc_wxGridRowHeaderRendererDefault_DrawBorder, "DrawBorder(grid, dc, rect)\n"
"\n"
"Implement border drawing for the row labels.");

extern "C" {static PyObject *meth_wxGridRowHeaderRendererDefault_DrawBorder(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridRowHeaderRendererDefault_DrawBorder(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGrid* grid;
         ::wxDC* dc;
         ::wxRect* rect;
        int rectState = 0;
        const  ::wxGridRowHeaderRendererDefault *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_dc,
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J1", &sipSelf, sipType_wxGridRowHeaderRendererDefault, &sipCpp, sipType_wxGrid, &grid, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridRowHeaderRendererDefault::DrawBorder(*grid,*dc,*rect) : sipCpp->DrawBorder(*grid,*dc,*rect));
            Py_END_ALLOW_THREADS
            sipReleaseType(rect,sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridRowHeaderRendererDefault, sipName_DrawBorder, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridRowHeaderRendererDefault(void *, const sipTypeDef *);}
static void *cast_wxGridRowHeaderRendererDefault(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridRowHeaderRendererDefault *sipCpp = reinterpret_cast< ::wxGridRowHeaderRendererDefault *>(sipCppV);

    if (targetType == sipType_wxGridRowHeaderRenderer)
        return static_cast< ::wxGridRowHeaderRenderer *>(sipCpp);

    if (targetType == sipType_wxGridHeaderLabelsRenderer)
        return static_cast< ::wxGridHeaderLabelsRenderer *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridRowHeaderRendererDefault(void *, int);}
static void release_wxGridRowHeaderRendererDefault(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridRowHeaderRendererDefault *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridRowHeaderRendererDefault *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxGridRowHeaderRendererDefault(void *, SIP_SSIZE_T, void *);}
static void assign_wxGridRowHeaderRendererDefault(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxGridRowHeaderRendererDefault *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxGridRowHeaderRendererDefault *>(sipSrc);
}


extern "C" {static void *array_wxGridRowHeaderRendererDefault(SIP_SSIZE_T);}
static void *array_wxGridRowHeaderRendererDefault(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxGridRowHeaderRendererDefault[sipNrElem];
}


extern "C" {static void *copy_wxGridRowHeaderRendererDefault(const void *, SIP_SSIZE_T);}
static void *copy_wxGridRowHeaderRendererDefault(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxGridRowHeaderRendererDefault(reinterpret_cast<const  ::wxGridRowHeaderRendererDefault *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxGridRowHeaderRendererDefault(sipSimpleWrapper *);}
static void dealloc_wxGridRowHeaderRendererDefault(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridRowHeaderRendererDefault *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridRowHeaderRendererDefault(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridRowHeaderRendererDefault(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridRowHeaderRendererDefault(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxGridRowHeaderRendererDefault *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridRowHeaderRendererDefault();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxGridRowHeaderRendererDefault* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGridRowHeaderRendererDefault, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridRowHeaderRendererDefault(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGridRowHeaderRendererDefault[] = {{45, 255, 1}};


static PyMethodDef methods_wxGridRowHeaderRendererDefault[] = {
    {SIP_MLNAME_CAST(sipName_DrawBorder), SIP_MLMETH_CAST(meth_wxGridRowHeaderRendererDefault_DrawBorder), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridRowHeaderRendererDefault_DrawBorder)}
};

PyDoc_STRVAR(doc_wxGridRowHeaderRendererDefault, "Default row header renderer.");


sipClassTypeDef sipTypeDef__grid_wxGridRowHeaderRendererDefault = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridRowHeaderRendererDefault,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridRowHeaderRendererDefault,
        {0, 0, 1},
        1, methods_wxGridRowHeaderRendererDefault,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridRowHeaderRendererDefault,
    -1,
    -1,
    supers_wxGridRowHeaderRendererDefault,
    SIP_NULLPTR,
    init_type_wxGridRowHeaderRendererDefault,
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
    dealloc_wxGridRowHeaderRendererDefault,
    assign_wxGridRowHeaderRendererDefault,
    array_wxGridRowHeaderRendererDefault,
    copy_wxGridRowHeaderRendererDefault,
    release_wxGridRowHeaderRendererDefault,
    cast_wxGridRowHeaderRendererDefault,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};