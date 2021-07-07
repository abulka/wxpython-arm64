/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/dnd.h>

        #include <wx/dataobj.h>


class sipwxDropTarget : public  ::wxDropTarget
{
public:
    sipwxDropTarget( ::wxDataObject*);
    virtual ~sipwxDropTarget();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void OnLeave() SIP_OVERRIDE;
     ::wxDragResult OnEnter( ::wxCoord, ::wxCoord, ::wxDragResult) SIP_OVERRIDE;
    bool OnDrop( ::wxCoord, ::wxCoord) SIP_OVERRIDE;
     ::wxDragResult OnDragOver( ::wxCoord, ::wxCoord, ::wxDragResult) SIP_OVERRIDE;
     ::wxDragResult OnData( ::wxCoord, ::wxCoord, ::wxDragResult) SIP_OVERRIDE;
    bool GetData() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxDropTarget(const sipwxDropTarget &);
    sipwxDropTarget &operator = (const sipwxDropTarget &);

    char sipPyMethods[6];
};

sipwxDropTarget::sipwxDropTarget( ::wxDataObject*data):  ::wxDropTarget(data), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxDropTarget::~sipwxDropTarget()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxDropTarget::OnLeave()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_OnLeave);

    if (!sipMeth)
    {
         ::wxDropTarget::OnLeave();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxDragResult sipwxDropTarget::OnEnter( ::wxCoord x, ::wxCoord y, ::wxDragResult defResult)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_OnEnter);

    if (!sipMeth)
        return  ::wxDropTarget::OnEnter(x,y,defResult);

    extern  ::wxDragResult sipVH__core_83(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord, ::wxDragResult);

    return sipVH__core_83(sipGILState, 0, sipPySelf, sipMeth, x, y, defResult);
}

bool sipwxDropTarget::OnDrop( ::wxCoord x, ::wxCoord y)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_OnDrop);

    if (!sipMeth)
        return  ::wxDropTarget::OnDrop(x,y);

    extern bool sipVH__core_84(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord);

    return sipVH__core_84(sipGILState, 0, sipPySelf, sipMeth, x, y);
}

 ::wxDragResult sipwxDropTarget::OnDragOver( ::wxCoord x, ::wxCoord y, ::wxDragResult defResult)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_OnDragOver);

    if (!sipMeth)
        return  ::wxDropTarget::OnDragOver(x,y,defResult);

    extern  ::wxDragResult sipVH__core_83(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord, ::wxDragResult);

    return sipVH__core_83(sipGILState, 0, sipPySelf, sipMeth, x, y, defResult);
}

 ::wxDragResult sipwxDropTarget::OnData( ::wxCoord x, ::wxCoord y, ::wxDragResult defResult)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_DropTarget,sipName_OnData);

    if (!sipMeth)
        return ::wxDragError;

    extern  ::wxDragResult sipVH__core_83(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord, ::wxDragResult);

    return sipVH__core_83(sipGILState, 0, sipPySelf, sipMeth, x, y, defResult);
}

bool sipwxDropTarget::GetData()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_GetData);

    if (!sipMeth)
        return  ::wxDropTarget::GetData();

    extern bool sipVH__core_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_6(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxDropTarget_GetData, "GetData() -> bool\n"
"\n"
"This method may only be called from within OnData().");

extern "C" {static PyObject *meth_wxDropTarget_GetData(PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_GetData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDropTarget *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropTarget, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDropTarget::GetData() : sipCpp->GetData());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_GetData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_OnData, "OnData(x, y, defResult) -> DragResult\n"
"\n"
"Called after OnDrop() returns true.");

extern "C" {static PyObject *meth_wxDropTarget_OnData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_OnData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxCoord x;
         ::wxCoord y;
         ::wxDragResult defResult;
         ::wxDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
            sipName_defResult,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiE", &sipSelf, sipType_wxDropTarget, &sipCpp, &x, &y, sipType_wxDragResult, &defResult))
        {
             ::wxDragResult sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DropTarget, sipName_OnData);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->OnData(x,y,defResult);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDragResult);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_OnData, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_OnDragOver, "OnDragOver(x, y, defResult) -> DragResult\n"
"\n"
"Called when the mouse is being dragged over the drop target.");

extern "C" {static PyObject *meth_wxDropTarget_OnDragOver(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_OnDragOver(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCoord x;
         ::wxCoord y;
         ::wxDragResult defResult;
         ::wxDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
            sipName_defResult,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiE", &sipSelf, sipType_wxDropTarget, &sipCpp, &x, &y, sipType_wxDragResult, &defResult))
        {
             ::wxDragResult sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDropTarget::OnDragOver(x,y,defResult) : sipCpp->OnDragOver(x,y,defResult));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDragResult);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_OnDragOver, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_OnDrop, "OnDrop(x, y) -> bool\n"
"\n"
"Called when the user drops a data object on the target.");

extern "C" {static PyObject *meth_wxDropTarget_OnDrop(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_OnDrop(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCoord x;
         ::wxCoord y;
         ::wxDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxDropTarget, &sipCpp, &x, &y))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDropTarget::OnDrop(x,y) : sipCpp->OnDrop(x,y));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_OnDrop, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_OnEnter, "OnEnter(x, y, defResult) -> DragResult\n"
"\n"
"Called when the mouse enters the drop target.");

extern "C" {static PyObject *meth_wxDropTarget_OnEnter(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_OnEnter(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCoord x;
         ::wxCoord y;
         ::wxDragResult defResult;
         ::wxDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
            sipName_defResult,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiE", &sipSelf, sipType_wxDropTarget, &sipCpp, &x, &y, sipType_wxDragResult, &defResult))
        {
             ::wxDragResult sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxDropTarget::OnEnter(x,y,defResult) : sipCpp->OnEnter(x,y,defResult));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDragResult);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_OnEnter, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_OnLeave, "OnLeave()\n"
"\n"
"Called when the mouse leaves the drop target.");

extern "C" {static PyObject *meth_wxDropTarget_OnLeave(PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_OnLeave(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDropTarget *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropTarget, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxDropTarget::OnLeave() : sipCpp->OnLeave());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_OnLeave, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_GetDataObject, "GetDataObject() -> DataObject\n"
"\n"
"Returns the data wxDataObject associated with the drop target.");

extern "C" {static PyObject *meth_wxDropTarget_GetDataObject(PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_GetDataObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxDropTarget *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropTarget, &sipCpp))
        {
             ::wxDataObject*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDataObject();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxDataObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_GetDataObject, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_SetDataObject, "SetDataObject(data)\n"
"\n"
"Sets the data wxDataObject associated with the drop target and deletes\n"
"any previously associated data object.");

extern "C" {static PyObject *meth_wxDropTarget_SetDataObject(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_SetDataObject(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDataObject* data;
         ::wxDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_data,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ:", &sipSelf, sipType_wxDropTarget, &sipCpp, sipType_wxDataObject, &data))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDataObject(data);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_SetDataObject, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_SetDefaultAction, "SetDefaultAction(action)\n"
"\n"
"Sets the default action for drag and drop.");

extern "C" {static PyObject *meth_wxDropTarget_SetDefaultAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_SetDefaultAction(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDragResult action;
         ::wxDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_action,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxDropTarget, &sipCpp, sipType_wxDragResult, &action))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDefaultAction(action);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_SetDefaultAction, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxDropTarget_GetDefaultAction, "GetDefaultAction() -> DragResult\n"
"\n"
"Returns default action for drag and drop or wxDragNone if this not\n"
"specified.");

extern "C" {static PyObject *meth_wxDropTarget_GetDefaultAction(PyObject *, PyObject *);}
static PyObject *meth_wxDropTarget_GetDefaultAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDropTarget *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxDropTarget, &sipCpp))
        {
             ::wxDragResult sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetDefaultAction();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDragResult);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DropTarget, sipName_GetDefaultAction, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxDropTarget(void *, int);}
static void release_wxDropTarget(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxDropTarget *>(sipCppV);
    else
        delete reinterpret_cast< ::wxDropTarget *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxDropTarget(sipSimpleWrapper *);}
static void dealloc_wxDropTarget(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxDropTarget *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxDropTarget(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxDropTarget(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxDropTarget(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxDropTarget *sipCpp = SIP_NULLPTR;

    {
         ::wxDataObject* data = 0;
        PyObject *dataWrapper = 0;

        static const char *sipKwdList[] = {
            sipName_data,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|@J8", &dataWrapper, sipType_wxDataObject, &data))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxDropTarget(data);
            Py_END_ALLOW_THREADS

            sipTransferTo(dataWrapper, (PyObject *)sipSelf);

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


static PyMethodDef methods_wxDropTarget[] = {
    {SIP_MLNAME_CAST(sipName_GetData), meth_wxDropTarget_GetData, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropTarget_GetData)},
    {SIP_MLNAME_CAST(sipName_GetDataObject), meth_wxDropTarget_GetDataObject, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropTarget_GetDataObject)},
    {SIP_MLNAME_CAST(sipName_GetDefaultAction), meth_wxDropTarget_GetDefaultAction, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropTarget_GetDefaultAction)},
    {SIP_MLNAME_CAST(sipName_OnData), SIP_MLMETH_CAST(meth_wxDropTarget_OnData), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDropTarget_OnData)},
    {SIP_MLNAME_CAST(sipName_OnDragOver), SIP_MLMETH_CAST(meth_wxDropTarget_OnDragOver), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDropTarget_OnDragOver)},
    {SIP_MLNAME_CAST(sipName_OnDrop), SIP_MLMETH_CAST(meth_wxDropTarget_OnDrop), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDropTarget_OnDrop)},
    {SIP_MLNAME_CAST(sipName_OnEnter), SIP_MLMETH_CAST(meth_wxDropTarget_OnEnter), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDropTarget_OnEnter)},
    {SIP_MLNAME_CAST(sipName_OnLeave), meth_wxDropTarget_OnLeave, METH_VARARGS, SIP_MLDOC_CAST(doc_wxDropTarget_OnLeave)},
    {SIP_MLNAME_CAST(sipName_SetDataObject), SIP_MLMETH_CAST(meth_wxDropTarget_SetDataObject), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDropTarget_SetDataObject)},
    {SIP_MLNAME_CAST(sipName_SetDefaultAction), SIP_MLMETH_CAST(meth_wxDropTarget_SetDefaultAction), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxDropTarget_SetDefaultAction)}
};

sipVariableDef variables_wxDropTarget[] = {
    {PropertyVariable, sipName_DefaultAction, &methods_wxDropTarget[2], &methods_wxDropTarget[9], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DataObject, &methods_wxDropTarget[1], &methods_wxDropTarget[8], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Data, &methods_wxDropTarget[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxDropTarget, "DropTarget(data=None)\n"
"\n"
"This class represents a target for a drag and drop operation.");


sipClassTypeDef sipTypeDef__core_wxDropTarget = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxDropTarget,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_DropTarget,
        {0, 0, 1},
        10, methods_wxDropTarget,
        0, SIP_NULLPTR,
        3, variables_wxDropTarget,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxDropTarget,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxDropTarget,
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
    dealloc_wxDropTarget,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxDropTarget,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};