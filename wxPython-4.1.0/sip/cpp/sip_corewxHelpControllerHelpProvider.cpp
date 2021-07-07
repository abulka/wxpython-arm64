/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/cshelp.h>

        #include <wx/help.h>
        #include <wx/cshelp.h>
        #include <wx/gdicmn.h>
        #include <wx/event.h>


class sipwxHelpControllerHelpProvider : public  ::wxHelpControllerHelpProvider
{
public:
    sipwxHelpControllerHelpProvider( ::wxHelpControllerBase*);
    virtual ~sipwxHelpControllerHelpProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool ShowHelpAtPoint( ::wxWindowBase*,const  ::wxPoint&, ::wxHelpEvent::Origin) SIP_OVERRIDE;
    bool ShowHelp( ::wxWindowBase*) SIP_OVERRIDE;
    void RemoveHelp( ::wxWindowBase*) SIP_OVERRIDE;
    void AddHelp( ::wxWindowID,const  ::wxString&) SIP_OVERRIDE;
    void AddHelp( ::wxWindowBase*,const  ::wxString&) SIP_OVERRIDE;
     ::wxString GetHelp(const  ::wxWindowBase*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxHelpControllerHelpProvider(const sipwxHelpControllerHelpProvider &);
    sipwxHelpControllerHelpProvider &operator = (const sipwxHelpControllerHelpProvider &);

    char sipPyMethods[6];
};

sipwxHelpControllerHelpProvider::sipwxHelpControllerHelpProvider( ::wxHelpControllerBase*hc):  ::wxHelpControllerHelpProvider(hc), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHelpControllerHelpProvider::~sipwxHelpControllerHelpProvider()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxHelpControllerHelpProvider::ShowHelpAtPoint( ::wxWindowBase*window,const  ::wxPoint& point, ::wxHelpEvent::Origin origin)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_ShowHelpAtPoint);

    if (!sipMeth)
        return  ::wxHelpControllerHelpProvider::ShowHelpAtPoint(window,point,origin);

    extern bool sipVH__core_200(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindowBase*,const  ::wxPoint&, ::wxHelpEvent::Origin);

    return sipVH__core_200(sipGILState, 0, sipPySelf, sipMeth, window, point, origin);
}

bool sipwxHelpControllerHelpProvider::ShowHelp( ::wxWindowBase*window)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_ShowHelp);

    if (!sipMeth)
        return  ::wxHelpControllerHelpProvider::ShowHelp(window);

    extern bool sipVH__core_199(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindowBase*);

    return sipVH__core_199(sipGILState, 0, sipPySelf, sipMeth, window);
}

void sipwxHelpControllerHelpProvider::RemoveHelp( ::wxWindowBase*window)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_RemoveHelp);

    if (!sipMeth)
    {
         ::wxHelpControllerHelpProvider::RemoveHelp(window);
        return;
    }

    extern void sipVH__core_119(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindowBase*);

    sipVH__core_119(sipGILState, 0, sipPySelf, sipMeth, window);
}

void sipwxHelpControllerHelpProvider::AddHelp( ::wxWindowID id,const  ::wxString& text)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_AddHelp);

    if (!sipMeth)
    {
         ::wxHelpControllerHelpProvider::AddHelp(id,text);
        return;
    }

    extern void sipVH__core_197(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindowID,const  ::wxString&);

    sipVH__core_197(sipGILState, 0, sipPySelf, sipMeth, id, text);
}

void sipwxHelpControllerHelpProvider::AddHelp( ::wxWindowBase*window,const  ::wxString& text)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_AddHelp);

    if (!sipMeth)
    {
         ::wxHelpControllerHelpProvider::AddHelp(window,text);
        return;
    }

    extern void sipVH__core_196(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindowBase*,const  ::wxString&);

    sipVH__core_196(sipGILState, 0, sipPySelf, sipMeth, window, text);
}

 ::wxString sipwxHelpControllerHelpProvider::GetHelp(const  ::wxWindowBase*window)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_GetHelp);

    if (!sipMeth)
        return  ::wxHelpControllerHelpProvider::GetHelp(window);

    extern  ::wxString sipVH__core_201(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxWindowBase*);

    return sipVH__core_201(sipGILState, 0, sipPySelf, sipMeth, window);
}


PyDoc_STRVAR(doc_wxHelpControllerHelpProvider_GetHelpController, "GetHelpController() -> HelpControllerBase\n"
"\n"
"Returns the help controller associated with this help provider.");

extern "C" {static PyObject *meth_wxHelpControllerHelpProvider_GetHelpController(PyObject *, PyObject *);}
static PyObject *meth_wxHelpControllerHelpProvider_GetHelpController(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHelpControllerHelpProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHelpControllerHelpProvider, &sipCpp))
        {
             ::wxHelpControllerBase*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetHelpController();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxHelpControllerBase,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HelpControllerHelpProvider, sipName_GetHelpController, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHelpControllerHelpProvider_SetHelpController, "SetHelpController(hc)\n"
"\n"
"Sets the help controller associated with this help provider.");

extern "C" {static PyObject *meth_wxHelpControllerHelpProvider_SetHelpController(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHelpControllerHelpProvider_SetHelpController(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHelpControllerBase* hc;
         ::wxHelpControllerHelpProvider *sipCpp;

        static const char *sipKwdList[] = {
            sipName_hc,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxHelpControllerHelpProvider, &sipCpp, sipType_wxHelpControllerBase, &hc))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetHelpController(hc);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HelpControllerHelpProvider, sipName_SetHelpController, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxHelpControllerHelpProvider(void *, const sipTypeDef *);}
static void *cast_wxHelpControllerHelpProvider(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxHelpControllerHelpProvider *sipCpp = reinterpret_cast< ::wxHelpControllerHelpProvider *>(sipCppV);

    if (targetType == sipType_wxSimpleHelpProvider)
        return static_cast< ::wxSimpleHelpProvider *>(sipCpp);

    if (targetType == sipType_wxHelpProvider)
        return static_cast< ::wxHelpProvider *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHelpControllerHelpProvider(void *, int);}
static void release_wxHelpControllerHelpProvider(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxHelpControllerHelpProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::wxHelpControllerHelpProvider *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHelpControllerHelpProvider(sipSimpleWrapper *);}
static void dealloc_wxHelpControllerHelpProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxHelpControllerHelpProvider *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHelpControllerHelpProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxHelpControllerHelpProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHelpControllerHelpProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxHelpControllerHelpProvider *sipCpp = SIP_NULLPTR;

    {
         ::wxHelpControllerBase* hc = 0;

        static const char *sipKwdList[] = {
            sipName_hc,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxHelpControllerBase, &hc))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHelpControllerHelpProvider(hc);
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
static sipEncodedTypeDef supers_wxHelpControllerHelpProvider[] = {{482, 255, 1}};


static PyMethodDef methods_wxHelpControllerHelpProvider[] = {
    {SIP_MLNAME_CAST(sipName_GetHelpController), meth_wxHelpControllerHelpProvider_GetHelpController, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHelpControllerHelpProvider_GetHelpController)},
    {SIP_MLNAME_CAST(sipName_SetHelpController), SIP_MLMETH_CAST(meth_wxHelpControllerHelpProvider_SetHelpController), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHelpControllerHelpProvider_SetHelpController)}
};

sipVariableDef variables_wxHelpControllerHelpProvider[] = {
    {PropertyVariable, sipName_HelpController, &methods_wxHelpControllerHelpProvider[0], &methods_wxHelpControllerHelpProvider[1], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHelpControllerHelpProvider, "HelpControllerHelpProvider(hc=None)\n"
"\n"
"wxHelpControllerHelpProvider is an implementation of wxHelpProvider\n"
"which supports both context identifiers and plain text help strings.");


sipClassTypeDef sipTypeDef__core_wxHelpControllerHelpProvider = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxHelpControllerHelpProvider,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HelpControllerHelpProvider,
        {0, 0, 1},
        2, methods_wxHelpControllerHelpProvider,
        0, SIP_NULLPTR,
        1, variables_wxHelpControllerHelpProvider,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHelpControllerHelpProvider,
    -1,
    -1,
    supers_wxHelpControllerHelpProvider,
    SIP_NULLPTR,
    init_type_wxHelpControllerHelpProvider,
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
    dealloc_wxHelpControllerHelpProvider,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHelpControllerHelpProvider,
    cast_wxHelpControllerHelpProvider,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
