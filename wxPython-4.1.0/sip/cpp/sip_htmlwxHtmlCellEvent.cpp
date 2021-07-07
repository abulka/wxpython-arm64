/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"

        #include <wx/html/htmlwin.h>

        #include <wx/html/htmlcell.h>
        #include <wx/gdicmn.h>
        #include <wx/event.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxHtmlCellEvent : public  ::wxHtmlCellEvent
{
public:
    sipwxHtmlCellEvent( ::wxEventType,int, ::wxHtmlCell*,const  ::wxPoint&,const  ::wxMouseEvent&);
    sipwxHtmlCellEvent(const  ::wxHtmlCellEvent&);
    virtual ~sipwxHtmlCellEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;
     ::wxEvent* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxHtmlCellEvent(const sipwxHtmlCellEvent &);
    sipwxHtmlCellEvent &operator = (const sipwxHtmlCellEvent &);

    char sipPyMethods[2];
};

sipwxHtmlCellEvent::sipwxHtmlCellEvent( ::wxEventType commandType,int id, ::wxHtmlCell*cell,const  ::wxPoint& point,const  ::wxMouseEvent& ev):  ::wxHtmlCellEvent(commandType,id,cell,point,ev), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHtmlCellEvent::sipwxHtmlCellEvent(const  ::wxHtmlCellEvent& a0):  ::wxHtmlCellEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHtmlCellEvent::~sipwxHtmlCellEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxHtmlCellEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxHtmlCellEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__html_55(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html_55(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxHtmlCellEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxHtmlCellEvent::Clone();

    extern  ::wxEvent* sipVH__html_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html_54(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxHtmlCellEvent_GetCell, "GetCell() -> HtmlCell\n"
"\n"
"Returns the wxHtmlCellEvent associated with the event.");

extern "C" {static PyObject *meth_wxHtmlCellEvent_GetCell(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlCellEvent_GetCell(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlCellEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlCellEvent, &sipCpp))
        {
             ::wxHtmlCell*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCell();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxHtmlCell,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlCellEvent, sipName_GetCell, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlCellEvent_GetLinkClicked, "GetLinkClicked() -> bool\n"
"\n"
"Returns true if SetLinkClicked(true) has previously been called; false\n"
"otherwise.");

extern "C" {static PyObject *meth_wxHtmlCellEvent_GetLinkClicked(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlCellEvent_GetLinkClicked(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlCellEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlCellEvent, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetLinkClicked();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlCellEvent, sipName_GetLinkClicked, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlCellEvent_GetPoint, "GetPoint() -> wx.Point\n"
"\n"
"Returns the wxPoint associated with the event.");

extern "C" {static PyObject *meth_wxHtmlCellEvent_GetPoint(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlCellEvent_GetPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlCellEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlCellEvent, &sipCpp))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(sipCpp->GetPoint());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlCellEvent, sipName_GetPoint, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlCellEvent_GetMouseEvent, "GetMouseEvent() -> wx.MouseEvent\n"
"\n"
"Returns the wxMouseEvent associated with the event.");

extern "C" {static PyObject *meth_wxHtmlCellEvent_GetMouseEvent(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlCellEvent_GetMouseEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlCellEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlCellEvent, &sipCpp))
        {
             ::wxMouseEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxMouseEvent(sipCpp->GetMouseEvent());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxMouseEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlCellEvent, sipName_GetMouseEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlCellEvent_SetLinkClicked, "SetLinkClicked(linkclicked)\n"
"\n"
"Call this function with linkclicked set to true if the cell which has\n"
"been clicked contained a link or false otherwise (which is the\n"
"default).");

extern "C" {static PyObject *meth_wxHtmlCellEvent_SetLinkClicked(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlCellEvent_SetLinkClicked(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool linkclicked;
         ::wxHtmlCellEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_linkclicked,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bb", &sipSelf, sipType_wxHtmlCellEvent, &sipCpp, &linkclicked))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLinkClicked(linkclicked);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlCellEvent, sipName_SetLinkClicked, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlCellEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxHtmlCellEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlCellEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxHtmlCellEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlCellEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxHtmlCellEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlCellEvent, sipName_Clone, doc_wxHtmlCellEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxHtmlCellEvent(void *, const sipTypeDef *);}
static void *cast_wxHtmlCellEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxHtmlCellEvent *sipCpp = reinterpret_cast< ::wxHtmlCellEvent *>(sipCppV);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlCellEvent(void *, int);}
static void release_wxHtmlCellEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxHtmlCellEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxHtmlCellEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlCellEvent(sipSimpleWrapper *);}
static void dealloc_wxHtmlCellEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxHtmlCellEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlCellEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxHtmlCellEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlCellEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxHtmlCellEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxEventType commandType;
        int id;
         ::wxHtmlCell* cell;
        const  ::wxPoint* point;
        int pointState = 0;
        const  ::wxMouseEvent* ev;

        static const char *sipKwdList[] = {
            sipName_commandType,
            sipName_id,
            sipName_cell,
            sipName_point,
            sipName_ev,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiJ8J1J9", &commandType, &id, sipType_wxHtmlCell, &cell, sipType_wxPoint, &point, &pointState, sipType_wxMouseEvent, &ev))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHtmlCellEvent(commandType,id,cell,*point,*ev);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(point),sipType_wxPoint,pointState);

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
        const  ::wxHtmlCellEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxHtmlCellEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHtmlCellEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxHtmlCellEvent[] = {{6, 0, 1}};


static PyMethodDef methods_wxHtmlCellEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxHtmlCellEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlCellEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetCell), meth_wxHtmlCellEvent_GetCell, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlCellEvent_GetCell)},
    {SIP_MLNAME_CAST(sipName_GetLinkClicked), meth_wxHtmlCellEvent_GetLinkClicked, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlCellEvent_GetLinkClicked)},
    {SIP_MLNAME_CAST(sipName_GetMouseEvent), meth_wxHtmlCellEvent_GetMouseEvent, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlCellEvent_GetMouseEvent)},
    {SIP_MLNAME_CAST(sipName_GetPoint), meth_wxHtmlCellEvent_GetPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlCellEvent_GetPoint)},
    {SIP_MLNAME_CAST(sipName_SetLinkClicked), SIP_MLMETH_CAST(meth_wxHtmlCellEvent_SetLinkClicked), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlCellEvent_SetLinkClicked)}
};

sipVariableDef variables_wxHtmlCellEvent[] = {
    {PropertyVariable, sipName_Point, &methods_wxHtmlCellEvent[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_MouseEvent, &methods_wxHtmlCellEvent[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_LinkClicked, &methods_wxHtmlCellEvent[2], &methods_wxHtmlCellEvent[5], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Cell, &methods_wxHtmlCellEvent[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlCellEvent, "HtmlCellEvent(commandType, id, cell, point, ev)\n"
"\n"
"This event class is used for the events generated by wxHtmlWindow.");


sipClassTypeDef sipTypeDef__html_wxHtmlCellEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxHtmlCellEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlCellEvent,
        {0, 0, 1},
        6, methods_wxHtmlCellEvent,
        0, SIP_NULLPTR,
        4, variables_wxHtmlCellEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlCellEvent,
    -1,
    -1,
    supers_wxHtmlCellEvent,
    SIP_NULLPTR,
    init_type_wxHtmlCellEvent,
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
    dealloc_wxHtmlCellEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlCellEvent,
    cast_wxHtmlCellEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
