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

        #include <wx/gdicmn.h>
        #include <wx/grid.h>
        #include <wx/grid.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/grid.h>


class sipwxGridCellEnumRenderer : public  ::wxGridCellEnumRenderer
{
public:
    sipwxGridCellEnumRenderer(const  ::wxString&);
    virtual ~sipwxGridCellEnumRenderer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetParameters(const  ::wxString&) SIP_OVERRIDE;
    int GetBestWidth( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int) SIP_OVERRIDE;
    int GetBestHeight( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int) SIP_OVERRIDE;
     ::wxSize GetBestSize( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int) SIP_OVERRIDE;
    void Draw( ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,const  ::wxRect&,int,int,bool) SIP_OVERRIDE;
     ::wxGridCellRenderer* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxGridCellEnumRenderer(const sipwxGridCellEnumRenderer &);
    sipwxGridCellEnumRenderer &operator = (const sipwxGridCellEnumRenderer &);

    char sipPyMethods[6];
};

sipwxGridCellEnumRenderer::sipwxGridCellEnumRenderer(const  ::wxString& choices):  ::wxGridCellEnumRenderer(choices), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridCellEnumRenderer::~sipwxGridCellEnumRenderer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxGridCellEnumRenderer::SetParameters(const  ::wxString& params)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_SetParameters);

    if (!sipMeth)
    {
         ::wxGridCellEnumRenderer::SetParameters(params);
        return;
    }

    extern void sipVH__grid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__grid_4(sipGILState, 0, sipPySelf, sipMeth, params);
}

int sipwxGridCellEnumRenderer::GetBestWidth( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col,int height)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_GetBestWidth);

    if (!sipMeth)
        return  ::wxGridCellEnumRenderer::GetBestWidth(grid,attr,dc,row,col,height);

    extern int sipVH__grid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int);

    return sipVH__grid_3(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col, height);
}

int sipwxGridCellEnumRenderer::GetBestHeight( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col,int width)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_GetBestHeight);

    if (!sipMeth)
        return  ::wxGridCellEnumRenderer::GetBestHeight(grid,attr,dc,row,col,width);

    extern int sipVH__grid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int,int);

    return sipVH__grid_3(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col, width);
}

 ::wxSize sipwxGridCellEnumRenderer::GetBestSize( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,int row,int col)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_GetBestSize);

    if (!sipMeth)
        return  ::wxGridCellEnumRenderer::GetBestSize(grid,attr,dc,row,col);

    extern  ::wxSize sipVH__grid_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,int,int);

    return sipVH__grid_2(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, row, col);
}

void sipwxGridCellEnumRenderer::Draw( ::wxGrid& grid, ::wxGridCellAttr& attr, ::wxDC& dc,const  ::wxRect& rect,int row,int col,bool isSelected)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_Draw);

    if (!sipMeth)
    {
         ::wxGridCellEnumRenderer::Draw(grid,attr,dc,rect,row,col,isSelected);
        return;
    }

    extern void sipVH__grid_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxGrid&, ::wxGridCellAttr&, ::wxDC&,const  ::wxRect&,int,int,bool);

    sipVH__grid_1(sipGILState, 0, sipPySelf, sipMeth, grid, attr, dc, rect, row, col, isSelected);
}

 ::wxGridCellRenderer* sipwxGridCellEnumRenderer::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxGridCellEnumRenderer::Clone();

    extern  ::wxGridCellRenderer* sipVH__grid_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGridCellEnumRenderer_SetParameters, "SetParameters(params)\n"
"\n"
"Sets the comma separated string content of the enum.");

extern "C" {static PyObject *meth_wxGridCellEnumRenderer_SetParameters(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellEnumRenderer_SetParameters(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* params;
        int paramsState = 0;
         ::wxGridCellEnumRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_params,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGridCellEnumRenderer, &sipCpp, sipType_wxString,&params, &paramsState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellEnumRenderer::SetParameters(*params) : sipCpp->SetParameters(*params));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(params),sipType_wxString,paramsState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellEnumRenderer, sipName_SetParameters, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellEnumRenderer_Clone, "Clone(self) -> GridCellRenderer");

extern "C" {static PyObject *meth_wxGridCellEnumRenderer_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellEnumRenderer_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellEnumRenderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellEnumRenderer, &sipCpp))
        {
             ::wxGridCellRenderer*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridCellEnumRenderer::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridCellRenderer,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellEnumRenderer, sipName_Clone, doc_wxGridCellEnumRenderer_Clone);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellEnumRenderer_Draw, "Draw(self, grid: Grid, attr: GridCellAttr, dc: DC, rect: Rect, row: int, col: int, isSelected: bool)");

extern "C" {static PyObject *meth_wxGridCellEnumRenderer_Draw(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellEnumRenderer_Draw(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGrid* grid;
         ::wxGridCellAttr* attr;
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        int row;
        int col;
        bool isSelected;
         ::wxGridCellEnumRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_attr,
            sipName_dc,
            sipName_rect,
            sipName_row,
            sipName_col,
            sipName_isSelected,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9J1iib", &sipSelf, sipType_wxGridCellEnumRenderer, &sipCpp, sipType_wxGrid, &grid, sipType_wxGridCellAttr, &attr, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, &row, &col, &isSelected))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellEnumRenderer::Draw(*grid,*attr,*dc,*rect,row,col,isSelected) : sipCpp->Draw(*grid,*attr,*dc,*rect,row,col,isSelected));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellEnumRenderer, sipName_Draw, doc_wxGridCellEnumRenderer_Draw);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellEnumRenderer_GetBestSize, "GetBestSize(self, grid: Grid, attr: GridCellAttr, dc: DC, row: int, col: int) -> Size");

extern "C" {static PyObject *meth_wxGridCellEnumRenderer_GetBestSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellEnumRenderer_GetBestSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGrid* grid;
         ::wxGridCellAttr* attr;
         ::wxDC* dc;
        int row;
        int col;
         ::wxGridCellEnumRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_grid,
            sipName_attr,
            sipName_dc,
            sipName_row,
            sipName_col,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J9J9ii", &sipSelf, sipType_wxGridCellEnumRenderer, &sipCpp, sipType_wxGrid, &grid, sipType_wxGridCellAttr, &attr, sipType_wxDC, &dc, &row, &col))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxGridCellEnumRenderer::GetBestSize(*grid,*attr,*dc,row,col) : sipCpp->GetBestSize(*grid,*attr,*dc,row,col)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellEnumRenderer, sipName_GetBestSize, doc_wxGridCellEnumRenderer_GetBestSize);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridCellEnumRenderer(void *, const sipTypeDef *);}
static void *cast_wxGridCellEnumRenderer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridCellEnumRenderer *sipCpp = reinterpret_cast< ::wxGridCellEnumRenderer *>(sipCppV);

    if (targetType == sipType_wxGridCellStringRenderer)
        return static_cast< ::wxGridCellStringRenderer *>(sipCpp);

    if (targetType == sipType_wxGridCellRenderer)
        return static_cast< ::wxGridCellRenderer *>(sipCpp);

    if (targetType == sipType_wxClientDataContainer)
        return static_cast< ::wxClientDataContainer *>(sipCpp);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridCellEnumRenderer(void *, int);}
static void release_wxGridCellEnumRenderer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridCellEnumRenderer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridCellEnumRenderer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridCellEnumRenderer(sipSimpleWrapper *);}
static void dealloc_wxGridCellEnumRenderer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridCellEnumRenderer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridCellEnumRenderer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridCellEnumRenderer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridCellEnumRenderer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipwxGridCellEnumRenderer *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& choicesdef = wxEmptyString;
        const  ::wxString* choices = &choicesdef;
        int choicesState = 0;

        static const char *sipKwdList[] = {
            sipName_choices,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_wxString,&choices, &choicesState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridCellEnumRenderer(*choices);
            Py_END_ALLOW_THREADS

            *sipOwner = Py_None;
            sipReleaseType(const_cast< ::wxString *>(choices),sipType_wxString,choicesState);

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
static sipEncodedTypeDef supers_wxGridCellEnumRenderer[] = {{33, 255, 1}};


static PyMethodDef methods_wxGridCellEnumRenderer[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxGridCellEnumRenderer_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellEnumRenderer_Clone)},
    {SIP_MLNAME_CAST(sipName_Draw), SIP_MLMETH_CAST(meth_wxGridCellEnumRenderer_Draw), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellEnumRenderer_Draw)},
    {SIP_MLNAME_CAST(sipName_GetBestSize), SIP_MLMETH_CAST(meth_wxGridCellEnumRenderer_GetBestSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellEnumRenderer_GetBestSize)},
    {SIP_MLNAME_CAST(sipName_SetParameters), SIP_MLMETH_CAST(meth_wxGridCellEnumRenderer_SetParameters), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellEnumRenderer_SetParameters)}
};

PyDoc_STRVAR(doc_wxGridCellEnumRenderer, "GridCellEnumRenderer(choices=wx.EmptyString)\n"
"\n"
"This class may be used to render in a cell a number as a textual\n"
"equivalent.");


sipClassTypeDef sipTypeDef__grid_wxGridCellEnumRenderer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridCellEnumRenderer,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridCellEnumRenderer,
        {0, 0, 1},
        4, methods_wxGridCellEnumRenderer,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridCellEnumRenderer,
    -1,
    -1,
    supers_wxGridCellEnumRenderer,
    SIP_NULLPTR,
    init_type_wxGridCellEnumRenderer,
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
    dealloc_wxGridCellEnumRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridCellEnumRenderer,
    cast_wxGridCellEnumRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
