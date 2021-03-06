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

        #include <wx/object.h>
        #include <wx/kbdstate.h>
        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxGridEvent : public  ::wxGridEvent
{
public:
    sipwxGridEvent();
    sipwxGridEvent(int, ::wxEventType, ::wxObject*,int,int,int,int,bool,const  ::wxKeyboardState&);
    sipwxGridEvent(const  ::wxGridEvent&);
    virtual ~sipwxGridEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int GetRow() SIP_OVERRIDE;
    int GetCol() SIP_OVERRIDE;
     ::wxEvent* Clone() const SIP_OVERRIDE;
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxGridEvent(const sipwxGridEvent &);
    sipwxGridEvent &operator = (const sipwxGridEvent &);

    char sipPyMethods[4];
};

sipwxGridEvent::sipwxGridEvent():  ::wxGridEvent(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridEvent::sipwxGridEvent(int id, ::wxEventType type, ::wxObject*obj,int row,int col,int x,int y,bool sel,const  ::wxKeyboardState& kbd):  ::wxGridEvent(id,type,obj,row,col,x,y,sel,kbd), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridEvent::sipwxGridEvent(const  ::wxGridEvent& a0):  ::wxGridEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxGridEvent::~sipwxGridEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

int sipwxGridEvent::GetRow()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_GetRow);

    if (!sipMeth)
        return  ::wxGridEvent::GetRow();

    extern int sipVH__grid_39(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_39(sipGILState, 0, sipPySelf, sipMeth);
}

int sipwxGridEvent::GetCol()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_GetCol);

    if (!sipMeth)
        return  ::wxGridEvent::GetCol();

    extern int sipVH__grid_39(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_39(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxGridEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxGridEvent::Clone();

    extern  ::wxEvent* sipVH__grid_65(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_65(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEventCategory sipwxGridEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxGridEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__grid_64(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__grid_64(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxGridEvent_AltDown, "AltDown() -> bool\n"
"\n"
"Returns true if the Alt key was down at the time of the event.");

extern "C" {static PyObject *meth_wxGridEvent_AltDown(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_AltDown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->AltDown();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_AltDown, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_ControlDown, "ControlDown() -> bool\n"
"\n"
"Returns true if the Control key was down at the time of the event.");

extern "C" {static PyObject *meth_wxGridEvent_ControlDown(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_ControlDown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ControlDown();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_ControlDown, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_GetCol, "GetCol() -> int\n"
"\n"
"Column at which the event occurred.");

extern "C" {static PyObject *meth_wxGridEvent_GetCol(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_GetCol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridEvent::GetCol() : sipCpp->GetCol());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_GetCol, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_GetPosition, "GetPosition() -> wx.Point\n"
"\n"
"Position in pixels at which the event occurred.");

extern "C" {static PyObject *meth_wxGridEvent_GetPosition(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_GetPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(sipCpp->GetPosition());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_GetPosition, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_GetRow, "GetRow() -> int\n"
"\n"
"Row at which the event occurred.");

extern "C" {static PyObject *meth_wxGridEvent_GetRow(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_GetRow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridEvent::GetRow() : sipCpp->GetRow());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_GetRow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_MetaDown, "MetaDown() -> bool\n"
"\n"
"Returns true if the Meta key was down at the time of the event.");

extern "C" {static PyObject *meth_wxGridEvent_MetaDown(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_MetaDown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->MetaDown();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_MetaDown, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_Selecting, "Selecting() -> bool\n"
"\n"
"Returns true if the user is selecting grid cells, or false if\n"
"deselecting.");

extern "C" {static PyObject *meth_wxGridEvent_Selecting(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_Selecting(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Selecting();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_Selecting, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_ShiftDown, "ShiftDown() -> bool\n"
"\n"
"Returns true if the Shift key was down at the time of the event.");

extern "C" {static PyObject *meth_wxGridEvent_ShiftDown(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_ShiftDown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ShiftDown();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_ShiftDown, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxGridEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxGridEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxGridEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxGridEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxGridEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxGridEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GridEvent, sipName_Clone, doc_wxGridEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxGridEvent(void *, const sipTypeDef *);}
static void *cast_wxGridEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxGridEvent *sipCpp = reinterpret_cast< ::wxGridEvent *>(sipCppV);

    if (targetType == sipType_wxNotifyEvent)
        return static_cast< ::wxNotifyEvent *>(sipCpp);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxGridEvent(void *, int);}
static void release_wxGridEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxGridEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxGridEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxGridEvent(sipSimpleWrapper *);}
static void dealloc_wxGridEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxGridEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxGridEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxGridEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxGridEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxGridEvent *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridEvent();
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
        int id;
         ::wxEventType type;
         ::wxObject* obj;
        int row = -1;
        int col = -1;
        int x = -1;
        int y = -1;
        bool sel = 1;
        const  ::wxKeyboardState& kbddef = wxKeyboardState();
        const  ::wxKeyboardState* kbd = &kbddef;

        static const char *sipKwdList[] = {
            sipName_id,
            sipName_type,
            sipName_obj,
            sipName_row,
            sipName_col,
            sipName_x,
            sipName_y,
            sipName_sel,
            sipName_kbd,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiJ8|iiiibJ9", &id, &type, sipType_wxObject, &obj, &row, &col, &x, &y, &sel, sipType_wxKeyboardState, &kbd))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridEvent(id,type,obj,row,col,x,y,sel,*kbd);
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
        const  ::wxGridEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxGridEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxGridEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxGridEvent[] = {{16, 0, 1}};


static PyMethodDef methods_wxGridEvent[] = {
    {SIP_MLNAME_CAST(sipName_AltDown), meth_wxGridEvent_AltDown, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_AltDown)},
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxGridEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_ControlDown), meth_wxGridEvent_ControlDown, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_ControlDown)},
    {SIP_MLNAME_CAST(sipName_GetCol), meth_wxGridEvent_GetCol, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_GetCol)},
    {SIP_MLNAME_CAST(sipName_GetPosition), meth_wxGridEvent_GetPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_GetPosition)},
    {SIP_MLNAME_CAST(sipName_GetRow), meth_wxGridEvent_GetRow, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_GetRow)},
    {SIP_MLNAME_CAST(sipName_MetaDown), meth_wxGridEvent_MetaDown, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_MetaDown)},
    {SIP_MLNAME_CAST(sipName_Selecting), meth_wxGridEvent_Selecting, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_Selecting)},
    {SIP_MLNAME_CAST(sipName_ShiftDown), meth_wxGridEvent_ShiftDown, METH_VARARGS, SIP_MLDOC_CAST(doc_wxGridEvent_ShiftDown)}
};

sipVariableDef variables_wxGridEvent[] = {
    {PropertyVariable, sipName_Row, &methods_wxGridEvent[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Position, &methods_wxGridEvent[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Col, &methods_wxGridEvent[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxGridEvent, "GridEvent()\n"
"GridEvent(id, type, obj, row=-1, col=-1, x=-1, y=-1, sel=True, kbd=wx.KeyboardState())\n"
"\n"
"This event class contains information about various grid events.");


sipClassTypeDef sipTypeDef__grid_wxGridEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxGridEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_GridEvent,
        {0, 0, 1},
        9, methods_wxGridEvent,
        0, SIP_NULLPTR,
        3, variables_wxGridEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxGridEvent,
    -1,
    -1,
    supers_wxGridEvent,
    SIP_NULLPTR,
    init_type_wxGridEvent,
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
    dealloc_wxGridEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxGridEvent,
    cast_wxGridEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
