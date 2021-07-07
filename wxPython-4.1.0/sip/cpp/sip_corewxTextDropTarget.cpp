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


class sipwxTextDropTarget : public  ::wxTextDropTarget
{
public:
    sipwxTextDropTarget();
    virtual ~sipwxTextDropTarget();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool OnDropText( ::wxCoord, ::wxCoord,const  ::wxString&) SIP_OVERRIDE;
    bool GetData() SIP_OVERRIDE;
     ::wxDragResult OnData( ::wxCoord, ::wxCoord, ::wxDragResult) SIP_OVERRIDE;
     ::wxDragResult OnDragOver( ::wxCoord, ::wxCoord, ::wxDragResult) SIP_OVERRIDE;
    bool OnDrop( ::wxCoord, ::wxCoord) SIP_OVERRIDE;
     ::wxDragResult OnEnter( ::wxCoord, ::wxCoord, ::wxDragResult) SIP_OVERRIDE;
    void OnLeave() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxTextDropTarget(const sipwxTextDropTarget &);
    sipwxTextDropTarget &operator = (const sipwxTextDropTarget &);

    char sipPyMethods[7];
};

sipwxTextDropTarget::sipwxTextDropTarget():  ::wxTextDropTarget(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTextDropTarget::~sipwxTextDropTarget()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxTextDropTarget::OnDropText( ::wxCoord x, ::wxCoord y,const  ::wxString& data)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_TextDropTarget,sipName_OnDropText);

    if (!sipMeth)
        return 0;

    extern bool sipVH__core_85(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord,const  ::wxString&);

    return sipVH__core_85(sipGILState, 0, sipPySelf, sipMeth, x, y, data);
}

bool sipwxTextDropTarget::GetData()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_GetData);

    if (!sipMeth)
        return  ::wxTextDropTarget::GetData();

    extern bool sipVH__core_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__core_6(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxDragResult sipwxTextDropTarget::OnData( ::wxCoord x, ::wxCoord y, ::wxDragResult def)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_OnData);

    if (!sipMeth)
        return  ::wxTextDropTarget::OnData(x,y,def);

    extern  ::wxDragResult sipVH__core_83(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord, ::wxDragResult);

    return sipVH__core_83(sipGILState, 0, sipPySelf, sipMeth, x, y, def);
}

 ::wxDragResult sipwxTextDropTarget::OnDragOver( ::wxCoord x, ::wxCoord y, ::wxDragResult defResult)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_OnDragOver);

    if (!sipMeth)
        return  ::wxTextDropTarget::OnDragOver(x,y,defResult);

    extern  ::wxDragResult sipVH__core_83(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord, ::wxDragResult);

    return sipVH__core_83(sipGILState, 0, sipPySelf, sipMeth, x, y, defResult);
}

bool sipwxTextDropTarget::OnDrop( ::wxCoord x, ::wxCoord y)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_OnDrop);

    if (!sipMeth)
        return  ::wxTextDropTarget::OnDrop(x,y);

    extern bool sipVH__core_84(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord);

    return sipVH__core_84(sipGILState, 0, sipPySelf, sipMeth, x, y);
}

 ::wxDragResult sipwxTextDropTarget::OnEnter( ::wxCoord x, ::wxCoord y, ::wxDragResult defResult)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_OnEnter);

    if (!sipMeth)
        return  ::wxTextDropTarget::OnEnter(x,y,defResult);

    extern  ::wxDragResult sipVH__core_83(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxCoord, ::wxCoord, ::wxDragResult);

    return sipVH__core_83(sipGILState, 0, sipPySelf, sipMeth, x, y, defResult);
}

void sipwxTextDropTarget::OnLeave()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_OnLeave);

    if (!sipMeth)
    {
         ::wxTextDropTarget::OnLeave();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxTextDropTarget_OnDrop, "OnDrop(x, y) -> bool\n"
"\n"
"See wxDropTarget::OnDrop().");

extern "C" {static PyObject *meth_wxTextDropTarget_OnDrop(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDropTarget_OnDrop(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCoord x;
         ::wxCoord y;
         ::wxTextDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxTextDropTarget, &sipCpp, &x, &y))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDropTarget::OnDrop(x,y) : sipCpp->OnDrop(x,y));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextDropTarget, sipName_OnDrop, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDropTarget_OnDropText, "OnDropText(x, y, data) -> bool\n"
"\n"
"Override this function to receive dropped text.");

extern "C" {static PyObject *meth_wxTextDropTarget_OnDropText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDropTarget_OnDropText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxCoord x;
         ::wxCoord y;
        const  ::wxString* data;
        int dataState = 0;
         ::wxTextDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
            sipName_data,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiJ1", &sipSelf, sipType_wxTextDropTarget, &sipCpp, &x, &y, sipType_wxString,&data, &dataState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_TextDropTarget, sipName_OnDropText);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->OnDropText(x,y,*data);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(data),sipType_wxString,dataState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextDropTarget, sipName_OnDropText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTextDropTarget_OnData, "OnData(self, x: int, y: int, def_: DragResult) -> DragResult");

extern "C" {static PyObject *meth_wxTextDropTarget_OnData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTextDropTarget_OnData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxCoord x;
         ::wxCoord y;
         ::wxDragResult def;
         ::wxTextDropTarget *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
            sipName_def,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiiE", &sipSelf, sipType_wxTextDropTarget, &sipCpp, &x, &y, sipType_wxDragResult, &def))
        {
             ::wxDragResult sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxTextDropTarget::OnData(x,y,def) : sipCpp->OnData(x,y,def));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxDragResult);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TextDropTarget, sipName_OnData, doc_wxTextDropTarget_OnData);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxTextDropTarget(void *, const sipTypeDef *);}
static void *cast_wxTextDropTarget(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxTextDropTarget *sipCpp = reinterpret_cast< ::wxTextDropTarget *>(sipCppV);

    if (targetType == sipType_wxDropTarget)
        return static_cast< ::wxDropTarget *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTextDropTarget(void *, int);}
static void release_wxTextDropTarget(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxTextDropTarget *>(sipCppV);
    else
        delete reinterpret_cast< ::wxTextDropTarget *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxTextDropTarget(sipSimpleWrapper *);}
static void dealloc_wxTextDropTarget(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxTextDropTarget *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTextDropTarget(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxTextDropTarget(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTextDropTarget(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxTextDropTarget *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTextDropTarget();
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
static sipEncodedTypeDef supers_wxTextDropTarget[] = {{140, 255, 1}};


static PyMethodDef methods_wxTextDropTarget[] = {
    {SIP_MLNAME_CAST(sipName_OnData), SIP_MLMETH_CAST(meth_wxTextDropTarget_OnData), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextDropTarget_OnData)},
    {SIP_MLNAME_CAST(sipName_OnDrop), SIP_MLMETH_CAST(meth_wxTextDropTarget_OnDrop), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextDropTarget_OnDrop)},
    {SIP_MLNAME_CAST(sipName_OnDropText), SIP_MLMETH_CAST(meth_wxTextDropTarget_OnDropText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTextDropTarget_OnDropText)}
};

PyDoc_STRVAR(doc_wxTextDropTarget, "TextDropTarget()\n"
"\n"
"A predefined drop target for dealing with text data.");


sipClassTypeDef sipTypeDef__core_wxTextDropTarget = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxTextDropTarget,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TextDropTarget,
        {0, 0, 1},
        3, methods_wxTextDropTarget,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTextDropTarget,
    -1,
    -1,
    supers_wxTextDropTarget,
    SIP_NULLPTR,
    init_type_wxTextDropTarget,
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
    dealloc_wxTextDropTarget,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxTextDropTarget,
    cast_wxTextDropTarget,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};