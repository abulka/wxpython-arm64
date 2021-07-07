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
    PyObject* _wxGridCellChoiceEditor_EndEdit(wxGridCellChoiceEditor* self, int row, int col, const wxGrid* grid, const wxString* oldval)
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


class sipwxGridCellChoiceEditor : public  ::wxGridCellChoiceEditor
{
public:
    sipwxGridCellChoiceEditor(const  ::wxArrayString&,bool);
    virtual ~sipwxGridCellChoiceEditor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetParameters(const  ::wxString&) SIP_OVERRIDE;
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
    sipwxGridCellChoiceEditor(const sipwxGridCellChoiceEditor &);
    sipwxGridCellChoiceEditor &operator = (const sipwxGridCellChoiceEditor &);

    char sipPyMethods[16];
};

sipwxGridCellChoiceEditor::sipwxGridCellChoiceEditor(const  ::wxArrayString& choices,bool allowOthers):  ::wxGridCellChoiceEditor(choices,allowOthers), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridCellChoiceEditor::~sipwxGridCellChoiceEditor()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxGridCellChoiceEditor::SetParameters(const  ::wxString& params)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_SetParameters);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::SetParameters(params);
        return;
    }

    extern void sipVH__grid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__grid_4(sipGILState, 0, sipPySelf, sipMeth, params);
}

void sipwxGridCellChoiceEditor::BeginEdit(int row,int col, ::wxGrid*grid)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_BeginEdit);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::BeginEdit(row,col,grid);
        return;
    }

    extern void sipVH__grid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int, ::wxGrid*);

    sipVH__grid_5(sipGILState, 0, sipPySelf, sipMeth, row, col, grid);
}

 ::wxGridCellEditor* sipwxGridCellChoiceEditor::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxGridCellChoiceEditor::Clone();

    extern  ::wxGridCellEditor* sipVH__grid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_6(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxGridCellChoiceEditor::Create( ::wxWindow*parent, ::wxWindowID id, ::wxEvtHandler*evtHandler)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_Create);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::Create(parent,id,evtHandler);
        return;
    }

    extern void sipVH__grid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*, ::wxWindowID, ::wxEvtHandler*);

    sipVH__grid_7(sipGILState, 0, sipPySelf, sipMeth, parent, id, evtHandler);
}

void sipwxGridCellChoiceEditor::Destroy()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_Destroy);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::Destroy();
        return;
    }

    extern void sipVH__grid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__grid_8(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxGridCellChoiceEditor::EndEdit(int row,int col,const  ::wxGrid*grid,const  ::wxString& oldval, ::wxString*newval)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_EndEdit);

    if (!sipMeth)
        return  ::wxGridCellChoiceEditor::EndEdit(row,col,grid,oldval,newval);

    extern bool sipVH__grid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int,const  ::wxGrid*,const  ::wxString&, ::wxString*);

    return sipVH__grid_9(sipGILState, 0, sipPySelf, sipMeth, row, col, grid, oldval, newval);
}

void sipwxGridCellChoiceEditor::ApplyEdit(int row,int col, ::wxGrid*grid)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_ApplyEdit);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::ApplyEdit(row,col,grid);
        return;
    }

    extern void sipVH__grid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int, ::wxGrid*);

    sipVH__grid_5(sipGILState, 0, sipPySelf, sipMeth, row, col, grid);
}

void sipwxGridCellChoiceEditor::HandleReturn( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_HandleReturn);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::HandleReturn(event);
        return;
    }

    extern void sipVH__grid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    sipVH__grid_10(sipGILState, 0, sipPySelf, sipMeth, event);
}

void sipwxGridCellChoiceEditor::PaintBackground( ::wxDC& dc,const  ::wxRect& rectCell,const  ::wxGridCellAttr& attr)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_PaintBackground);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::PaintBackground(dc,rectCell,attr);
        return;
    }

    extern void sipVH__grid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&,const  ::wxGridCellAttr&);

    sipVH__grid_11(sipGILState, 0, sipPySelf, sipMeth, dc, rectCell, attr);
}

void sipwxGridCellChoiceEditor::Reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,SIP_NULLPTR,sipName_Reset);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::Reset();
        return;
    }

    extern void sipVH__grid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__grid_8(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxGridCellChoiceEditor::SetSize(const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,SIP_NULLPTR,sipName_SetSize);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::SetSize(rect);
        return;
    }

    extern void sipVH__grid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxRect&);

    sipVH__grid_12(sipGILState, 0, sipPySelf, sipMeth, rect);
}

void sipwxGridCellChoiceEditor::Show(bool show, ::wxGridCellAttr*attr)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,SIP_NULLPTR,sipName_Show);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::Show(show,attr);
        return;
    }

    extern void sipVH__grid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool, ::wxGridCellAttr*);

    sipVH__grid_13(sipGILState, 0, sipPySelf, sipMeth, show, attr);
}

void sipwxGridCellChoiceEditor::StartingClick()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_StartingClick);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::StartingClick();
        return;
    }

    extern void sipVH__grid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__grid_8(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxGridCellChoiceEditor::StartingKey( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,SIP_NULLPTR,sipName_StartingKey);

    if (!sipMeth)
    {
         ::wxGridCellChoiceEditor::StartingKey(event);
        return;
    }

    extern void sipVH__grid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    sipVH__grid_10(sipGILState, 0, sipPySelf, sipMeth, event);
}

bool sipwxGridCellChoiceEditor::IsAcceptedKey( ::wxKeyEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,SIP_NULLPTR,sipName_IsAcceptedKey);

    if (!sipMeth)
        return  ::wxGridCellChoiceEditor::IsAcceptedKey(event);

    extern bool sipVH__grid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxKeyEvent&);

    return sipVH__grid_14(sipGILState, 0, sipPySelf, sipMeth, event);
}

 ::wxString sipwxGridCellChoiceEditor::GetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,SIP_NULLPTR,sipName_GetValue);

    if (!sipMeth)
        return  ::wxGridCellChoiceEditor::GetValue();

    extern  ::wxString sipVH__grid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_15(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_SetParameters, "SetParameters(params)\n"
"\n"
"Parameters string format is \"item1[,item2[...,itemN]]\".");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_SetParameters(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_SetParameters(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* params;
        int paramsState = 0;
         ::wxGridCellChoiceEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_params,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp, sipType_wxString,&params, &paramsState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::SetParameters(*params) : sipCpp->SetParameters(*params));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(params),sipType_wxString,paramsState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_SetParameters, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_BeginEdit, "BeginEdit(self, row: int, col: int, grid: Grid)");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_BeginEdit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_BeginEdit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int row;
        int col;
         ::wxGrid* grid;
         ::wxGridCellChoiceEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
            sipName_grid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ8", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp, &row, &col, sipType_wxGrid, &grid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::BeginEdit(row,col,grid) : sipCpp->BeginEdit(row,col,grid));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_BeginEdit, doc_wxGridCellChoiceEditor_BeginEdit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_Clone, "Clone(self) -> GridCellEditor");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellChoiceEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp))
        {
             ::wxGridCellEditor*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxGridCellEditor,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_Clone, doc_wxGridCellChoiceEditor_Clone);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_Create, "Create(self, parent: Window, id: int, evtHandler: EvtHandler)");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_Create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_Create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWindow* parent;
         ::wxWindowID id;
         ::wxEvtHandler* evtHandler;
         ::wxGridCellChoiceEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
            sipName_id,
            sipName_evtHandler,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8iJ8", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp, sipType_wxWindow, &parent, &id, sipType_wxEvtHandler, &evtHandler))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::Create(parent,id,evtHandler) : sipCpp->Create(parent,id,evtHandler));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_Create, doc_wxGridCellChoiceEditor_Create);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_ApplyEdit, "ApplyEdit(self, row: int, col: int, grid: Grid)");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_ApplyEdit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_ApplyEdit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int row;
        int col;
         ::wxGrid* grid;
         ::wxGridCellChoiceEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
            sipName_grid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ8", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp, &row, &col, sipType_wxGrid, &grid))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::ApplyEdit(row,col,grid) : sipCpp->ApplyEdit(row,col,grid));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_ApplyEdit, doc_wxGridCellChoiceEditor_ApplyEdit);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_Reset, "Reset(self)");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_Reset(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGridCellChoiceEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::Reset() : sipCpp->Reset());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_Reset, doc_wxGridCellChoiceEditor_Reset);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_GetValue, "GetValue(self) -> object");

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_GetValue(PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_GetValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridCellChoiceEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxGridCellChoiceEditor::GetValue() : sipCpp->GetValue()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_GetValue, doc_wxGridCellChoiceEditor_GetValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridCellChoiceEditor_EndEdit, "EndEdit(row, col, grid, oldval)\n"
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

extern "C" {static PyObject *meth_wxGridCellChoiceEditor_EndEdit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxGridCellChoiceEditor_EndEdit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int row;
        int col;
        const  ::wxGrid* grid;
        const  ::wxString* oldval;
        int oldvalState = 0;
         ::wxGridCellChoiceEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_row,
            sipName_col,
            sipName_grid,
            sipName_oldval,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ8J1", &sipSelf, sipType_wxGridCellChoiceEditor, &sipCpp, &row, &col, sipType_wxGrid, &grid, sipType_wxString,&oldval, &oldvalState))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxGridCellChoiceEditor_EndEdit(sipCpp, row, col, grid, oldval);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxString *>(oldval),sipType_wxString,oldvalState);

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridCellChoiceEditor, sipName_EndEdit, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridCellChoiceEditor(void *, const sipTypeDef *);}
static void *cast_wxGridCellChoiceEditor(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridCellChoiceEditor *sipCpp = reinterpret_cast< ::wxGridCellChoiceEditor *>(sipCppV);

    if (targetType == sipType_wxGridCellEditor)
        return static_cast< ::wxGridCellEditor *>(sipCpp);

    if (targetType == sipType_wxClientDataContainer)
        return static_cast< ::wxClientDataContainer *>(sipCpp);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridCellChoiceEditor(void *, int);}
static void release_wxGridCellChoiceEditor(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridCellChoiceEditor *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridCellChoiceEditor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridCellChoiceEditor(sipSimpleWrapper *);}
static void dealloc_wxGridCellChoiceEditor(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridCellChoiceEditor *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridCellChoiceEditor(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridCellChoiceEditor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridCellChoiceEditor(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipwxGridCellChoiceEditor *sipCpp = SIP_NULLPTR;

    {
        const  ::wxArrayString* choices;
        int choicesState = 0;
        bool allowOthers = 0;

        static const char *sipKwdList[] = {
            sipName_choices,
            sipName_allowOthers,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|b", sipType_wxArrayString,&choices, &choicesState, &allowOthers))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridCellChoiceEditor(*choices,allowOthers);
            Py_END_ALLOW_THREADS

            *sipOwner = Py_None;
            sipReleaseType(const_cast< ::wxArrayString *>(choices),sipType_wxArrayString,choicesState);

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
static sipEncodedTypeDef supers_wxGridCellChoiceEditor[] = {{22, 255, 1}};


static PyMethodDef methods_wxGridCellChoiceEditor[] = {
    {SIP_MLNAME_CAST(sipName_ApplyEdit), SIP_MLMETH_CAST(meth_wxGridCellChoiceEditor_ApplyEdit), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_ApplyEdit)},
    {SIP_MLNAME_CAST(sipName_BeginEdit), SIP_MLMETH_CAST(meth_wxGridCellChoiceEditor_BeginEdit), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_BeginEdit)},
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxGridCellChoiceEditor_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_Clone)},
    {SIP_MLNAME_CAST(sipName_Create), SIP_MLMETH_CAST(meth_wxGridCellChoiceEditor_Create), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_Create)},
    {SIP_MLNAME_CAST(sipName_EndEdit), SIP_MLMETH_CAST(meth_wxGridCellChoiceEditor_EndEdit), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_EndEdit)},
    {SIP_MLNAME_CAST(sipName_GetValue), meth_wxGridCellChoiceEditor_GetValue, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_GetValue)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_wxGridCellChoiceEditor_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_Reset)},
    {SIP_MLNAME_CAST(sipName_SetParameters), SIP_MLMETH_CAST(meth_wxGridCellChoiceEditor_SetParameters), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxGridCellChoiceEditor_SetParameters)}
};

PyDoc_STRVAR(doc_wxGridCellChoiceEditor, "GridCellChoiceEditor(choices, allowOthers=False)\n"
"\n"
"Grid cell editor for string data providing the user a choice from a\n"
"list of strings.");


sipClassTypeDef sipTypeDef__grid_wxGridCellChoiceEditor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxGridCellChoiceEditor,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridCellChoiceEditor,
        {0, 0, 1},
        8, methods_wxGridCellChoiceEditor,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridCellChoiceEditor,
    -1,
    -1,
    supers_wxGridCellChoiceEditor,
    SIP_NULLPTR,
    init_type_wxGridCellChoiceEditor,
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
    dealloc_wxGridCellChoiceEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridCellChoiceEditor,
    cast_wxGridCellChoiceEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
