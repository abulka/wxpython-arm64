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
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/grid.h>
        #include <wx/control.h>
        #include <wx/event.h>
        #include <wx/grid.h>
        #include <wx/gdicmn.h>
        #include <wx/dc.h>
    PyObject* _wxGridCellDateEditor_EndEdit(wxGridCellDateEditor* self, int row, int col, const wxGrid* grid, const wxString* oldval)
    {
        bool rv;
        wxString newval;
        rv = self->EndEdit(row, col, grid, *oldval, &newval);
        if (rv) {
            return wx2PyString(newval);
        }
        else {
            Py_INCREF(Py_None);
            return Py_None;
        }
    }


class sipwxGridCellDateEditor : public  ::wxGridCellDateEditor
{
public:
    sipwxGridCellDateEditor();
    virtual ~sipwxGridCellDateEditor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void BeginEdit(int,int, ::wxGrid*) SIP_OVERRIDE;
     ::wxGridCellEditor* Clone() const SIP_OVERRIDE;
    void Create( ::wxWindow*, ::wxWindowID, ::wxEvtHandler*) SIP_OVERRIDE;
    void Destroy() SIP_OVERRIDE;
    bool EndEdit(int,int,const  ::wxGrid*,const  ::wxString&, ::wxString*) SIP_OVERRIDE;
    void ApplyEdit(int,int, ::wxGrid*) SIP_OVERRIDE;
    void HandleReturn( ::wxKeyEvent&) SIP_OVERRIDE;
    void PaintBackground( ::wxDC&,const  ::wxRect&,const  ::wxGridCellAttr&) SIP_OVERRIDE;
    void Reset() SIP_OVERRIDE;
    void SetSize(const  ::wxRect&) SIP_OVERRIDE;
    void Show(bool, ::wxGridCellAttr*) SIP_OVERRIDE;
    void StartingClick() SIP_OVERRIDE;
    void StartingKey( ::wxKeyEvent&) SIP_OVERRIDE;
    bool IsAcceptedKey( ::wxKeyEvent&) SIP_OVERRIDE;
     ::wxString GetValue() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxGridCellDateEditor(const sipwxGridCellDateEditor &);
    sipwxGridCellDateEditor &operator = (const sipwxGridCellDateEditor &);

    char sipPyMethods[15];
};

sipwxGridCellDateEditor::sipwxGridCellDateEditor():  ::wxGridCellDateEditor(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridCellDateEditor::~sipwxGridCellDateEditor()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxGridCellDateEditor::BeginEdit(int row,int col, ::wxGrid*grid)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_BeginEdit);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::BeginEdit(row,col,grid);
        return;
    }

    extern void sipVH__grid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int, ::wxGrid*);

    sipVH__grid_5(sipGILState, 0, sipPySelf, sipMeth, row, col, grid);
}

 ::wxGridCellEditor* sipwxGridCellDateEditor::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxGridCellDateEditor::Clone();

    extern  ::wxGridCellEditor* sipVH__grid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_6(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxGridCellDateEditor::Create( ::wxWindow*parent, ::wxWindowID id, ::wxEvtHandler*evtHandler)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_Create);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::Create(parent,id,evtHandler);
        return;
    }

    extern void sipVH__grid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*, ::wxWindowID, ::wxEvtHandler*);

    sipVH__grid_7(sipGILState, 0, sipPySelf, sipMeth, parent, id, evtHandler);
}

void sipwxGridCellDateEditor::Destroy()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_Destroy);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::Destroy();
        return;
    }

    extern void sipVH__grid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__grid_8(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxGridCellDateEditor::EndEdit(int row,int col,const  ::wxGrid*grid,const  ::wxString& oldval, ::wxString*newval)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_EndEdit);

    if (!sipMeth)
        return  ::wxGridCellDateEditor::EndEdit(row,col,grid,oldval,newval);

    extern bool sipVH__grid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int,const  ::wxGrid*,const  ::wxString&, ::wxString*);

    return sipVH__grid_9(sipGILState, 0, sipPySelf, sipMeth, row, col, grid, oldval, newval);
}

void sipwxGridCellDateEditor::ApplyEdit(int row,int col, ::wxGrid*grid)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_ApplyEdit);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::ApplyEdit(row,col,grid);
        return;
    }

    extern void sipVH__grid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int, ::wxGrid*);

    sipVH__grid_5(sipGILState, 0, sipPySelf, sipMeth, row, col, grid);
}

void sipwxGridCellDateEditor::HandleReturn( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_HandleReturn);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::HandleReturn(event);
        return;
    }

    extern void sipVH__grid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    sipVH__grid_10(sipGILState, 0, sipPySelf, sipMeth, event);
}

void sipwxGridCellDateEditor::PaintBackground( ::wxDC& dc,const  ::wxRect& rectCell,const  ::wxGridCellAttr& attr)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_PaintBackground);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::PaintBackground(dc,rectCell,attr);
        return;
    }

    extern void sipVH__grid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&,const  ::wxGridCellAttr&);

    sipVH__grid_11(sipGILState, 0, sipPySelf, sipMeth, dc, rectCell, attr);
}

void sipwxGridCellDateEditor::Reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_Reset);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::Reset();
        return;
    }

    extern void sipVH__grid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__grid_8(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxGridCellDateEditor::SetSize(const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,SIP_NULLPTR,sipName_SetSize);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::SetSize(rect);
        return;
    }

    extern void sipVH__grid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxRect&);

    sipVH__grid_12(sipGILState, 0, sipPySelf, sipMeth, rect);
}

void sipwxGridCellDateEditor::Show(bool show, ::wxGridCellAttr*attr)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,SIP_NULLPTR,sipName_Show);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::Show(show,attr);
        return;
    }

    extern void sipVH__grid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool, ::wxGridCellAttr*);

    sipVH__grid_13(sipGILState, 0, sipPySelf, sipMeth, show, attr);
}

void sipwxGridCellDateEditor::StartingClick()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,SIP_NULLPTR,sipName_StartingClick);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::StartingClick();
        return;
    }

    extern void sipVH__grid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__grid_8(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxGridCellDateEditor::StartingKey( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_StartingKey);

    if (!sipMeth)
    {
         ::wxGridCellDateEditor::StartingKey(event);
        return;
    }

    extern void sipVH__grid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    sipVH__grid_10(sipGILState, 0, sipPySelf, sipMeth, event);
}

bool sipwxGridCellDateEditor::IsAcceptedKey( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,SIP_NULLPTR,sipName_IsAcceptedKey);

    if (!sipMeth)
        return  ::wxGridCellDateEditor::IsAcceptedKey(event);

    extern bool sipVH__grid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    return sipVH__grid_14(sipGILState, 0, sipPySelf, sipMeth, event);
}

 ::wxString sipwxGridCellDateEditor::GetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,SIP_NULLPTR,sipName_GetValue);

    if (!sipMeth)
        return  ::wxGridCellDateEditor::GetValue();

    extern  ::wxString sipVH__grid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_15(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_BeginEdit, "BeginEdit(self, row: int, col: int, grid: Grid)");

extern "C" {static PyObject *meth_wxGridCellDateEditor_BeginEdit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_BeginEdit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int row;
        int col;
         ::wxGrid* grid;
         ::wxGridCellDateEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
            sipName_grid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ8", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp, &row, &col, sipType_wxGrid, &grid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellDateEditor::BeginEdit(row,col,grid) : sipCpp->BeginEdit(row,col,grid));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_BeginEdit, doc_wxGridCellDateEditor_BeginEdit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_Clone, "Clone(self) -> GridCellEditor");

extern "C" {static PyObject *meth_wxGridCellDateEditor_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellDateEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp))
        {
             ::wxGridCellEditor*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridCellDateEditor::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridCellEditor,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_Clone, doc_wxGridCellDateEditor_Clone);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_Create, "Create(self, parent: Window, id: int, evtHandler: EvtHandler)");

extern "C" {static PyObject *meth_wxGridCellDateEditor_Create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_Create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWindow* parent;
         ::wxWindowID id;
         ::wxEvtHandler* evtHandler;
         ::wxGridCellDateEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
            sipName_id,
            sipName_evtHandler,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8iJ8", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp, sipType_wxWindow, &parent, &id, sipType_wxEvtHandler, &evtHandler))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellDateEditor::Create(parent,id,evtHandler) : sipCpp->Create(parent,id,evtHandler));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_Create, doc_wxGridCellDateEditor_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_ApplyEdit, "ApplyEdit(self, row: int, col: int, grid: Grid)");

extern "C" {static PyObject *meth_wxGridCellDateEditor_ApplyEdit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_ApplyEdit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int row;
        int col;
         ::wxGrid* grid;
         ::wxGridCellDateEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
            sipName_grid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ8", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp, &row, &col, sipType_wxGrid, &grid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellDateEditor::ApplyEdit(row,col,grid) : sipCpp->ApplyEdit(row,col,grid));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_ApplyEdit, doc_wxGridCellDateEditor_ApplyEdit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_Reset, "Reset(self)");

extern "C" {static PyObject *meth_wxGridCellDateEditor_Reset(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGridCellDateEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellDateEditor::Reset() : sipCpp->Reset());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_Reset, doc_wxGridCellDateEditor_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_GetValue, "GetValue(self) -> object");

extern "C" {static PyObject *meth_wxGridCellDateEditor_GetValue(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_GetValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellDateEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxGridCellDateEditor::GetValue() : sipCpp->GetValue()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_GetValue, doc_wxGridCellDateEditor_GetValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellDateEditor_EndEdit, "EndEdit(row, col, grid, oldval)\n"
"\n"
"End editing the cell.\n"
"\n"
"This function must check if the current value of the editing cell\n"
"is valid and different from the original value in its string\n"
"form. If not then simply return None.  If it has changed then\n"
"this method should save the new value so that ApplyEdit can\n"
"apply it later and the string representation of the new value\n"
"should be returned.\n"
"\n"
"Notice that this method shoiuld not modify the grid as the\n"
"change could still be vetoed.");

extern "C" {static PyObject *meth_wxGridCellDateEditor_EndEdit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellDateEditor_EndEdit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int row;
        int col;
        const  ::wxGrid* grid;
        const  ::wxString* oldval;
        int oldvalState = 0;
         ::wxGridCellDateEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
            sipName_grid,
            sipName_oldval,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ8J1", &sipSelf, sipType_wxGridCellDateEditor, &sipCpp, &row, &col, sipType_wxGrid, &grid, sipType_wxString,&oldval, &oldvalState))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxGridCellDateEditor_EndEdit(sipCpp, row, col, grid, oldval);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxString *>(oldval),sipType_wxString,oldvalState);

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellDateEditor, sipName_EndEdit, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridCellDateEditor(void *, const sipTypeDef *);}
static void *cast_wxGridCellDateEditor(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridCellDateEditor *sipCpp = reinterpret_cast< ::wxGridCellDateEditor *>(sipCppV);

    if (targetType == sipType_wxGridCellEditor)
        return static_cast< ::wxGridCellEditor *>(sipCpp);

    if (targetType == sipType_wxClientDataContainer)
        return static_cast< ::wxClientDataContainer *>(sipCpp);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridCellDateEditor(void *, int);}
static void release_wxGridCellDateEditor(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridCellDateEditor *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridCellDateEditor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridCellDateEditor(sipSimpleWrapper *);}
static void dealloc_wxGridCellDateEditor(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridCellDateEditor *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridCellDateEditor(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridCellDateEditor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridCellDateEditor(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipwxGridCellDateEditor *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridCellDateEditor();
            Py_END_ALLOW_THREADS

            *sipOwner = Py_None;

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
static sipEncodedTypeDef supers_wxGridCellDateEditor[] = {{22, 255, 1}};


static PyMethodDef methods_wxGridCellDateEditor[] = {
    {SIP_MLNAME_CAST(sipName_ApplyEdit), SIP_MLMETH_CAST(meth_wxGridCellDateEditor_ApplyEdit), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_ApplyEdit)},
    {SIP_MLNAME_CAST(sipName_BeginEdit), SIP_MLMETH_CAST(meth_wxGridCellDateEditor_BeginEdit), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_BeginEdit)},
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxGridCellDateEditor_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_Clone)},
    {SIP_MLNAME_CAST(sipName_Create), SIP_MLMETH_CAST(meth_wxGridCellDateEditor_Create), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_Create)},
    {SIP_MLNAME_CAST(sipName_EndEdit), SIP_MLMETH_CAST(meth_wxGridCellDateEditor_EndEdit), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_EndEdit)},
    {SIP_MLNAME_CAST(sipName_GetValue), meth_wxGridCellDateEditor_GetValue, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_GetValue)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_wxGridCellDateEditor_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellDateEditor_Reset)}
};

PyDoc_STRVAR(doc_wxGridCellDateEditor, "GridCellDateEditor()\n"
"\n"
"Grid cell editor for dates.");


sipClassTypeDef sipTypeDef__grid_wxGridCellDateEditor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridCellDateEditor,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridCellDateEditor,
        {0, 0, 1},
        7, methods_wxGridCellDateEditor,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridCellDateEditor,
    -1,
    -1,
    supers_wxGridCellDateEditor,
    SIP_NULLPTR,
    init_type_wxGridCellDateEditor,
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
    dealloc_wxGridCellDateEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridCellDateEditor,
    cast_wxGridCellDateEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
