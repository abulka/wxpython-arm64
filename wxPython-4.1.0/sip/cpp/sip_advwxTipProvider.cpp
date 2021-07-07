/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_adv.h"

        #include <wx/tipdlg.h>



class sipwxTipProvider : public  ::wxTipProvider
{
public:
    sipwxTipProvider(size_t);
    sipwxTipProvider(const  ::wxTipProvider&);
    virtual ~sipwxTipProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxString GetTip() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxTipProvider(const sipwxTipProvider &);
    sipwxTipProvider &operator = (const sipwxTipProvider &);

    char sipPyMethods[1];
};

sipwxTipProvider::sipwxTipProvider(size_t currentTip):  ::wxTipProvider(currentTip), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTipProvider::sipwxTipProvider(const  ::wxTipProvider& a0):  ::wxTipProvider(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxTipProvider::~sipwxTipProvider()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxString sipwxTipProvider::GetTip()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_TipProvider,sipName_GetTip);

    if (!sipMeth)
        return  ::wxString();

    extern  ::wxString sipVH__adv_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__adv_29(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxTipProvider_GetCurrentTip, "GetCurrentTip() -> size_t\n"
"\n"
"Returns the index of the current tip (i.e. the one which would be\n"
"returned by GetTip()).");

extern "C" {static PyObject *meth_wxTipProvider_GetCurrentTip(PyObject *, PyObject *);}
static PyObject *meth_wxTipProvider_GetCurrentTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxTipProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTipProvider, &sipCpp))
        {
            size_t sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCurrentTip();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TipProvider, sipName_GetCurrentTip, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTipProvider_GetTip, "GetTip() -> String\n"
"\n"
"Return the text of the current tip and pass to the next one.");

extern "C" {static PyObject *meth_wxTipProvider_GetTip(PyObject *, PyObject *);}
static PyObject *meth_wxTipProvider_GetTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxTipProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTipProvider, &sipCpp))
        {
             ::wxString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_TipProvider, sipName_GetTip);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetTip());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TipProvider, sipName_GetTip, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTipProvider(void *, int);}
static void release_wxTipProvider(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxTipProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::wxTipProvider *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxTipProvider(sipSimpleWrapper *);}
static void dealloc_wxTipProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxTipProvider *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTipProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxTipProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTipProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxTipProvider *sipCpp = SIP_NULLPTR;

    {
        size_t currentTip;

        static const char *sipKwdList[] = {
            sipName_currentTip,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "=", &currentTip))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTipProvider(currentTip);
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
        const  ::wxTipProvider* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxTipProvider, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxTipProvider(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxTipProvider[] = {
    {SIP_MLNAME_CAST(sipName_GetCurrentTip), meth_wxTipProvider_GetCurrentTip, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTipProvider_GetCurrentTip)},
    {SIP_MLNAME_CAST(sipName_GetTip), meth_wxTipProvider_GetTip, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTipProvider_GetTip)}
};

sipVariableDef variables_wxTipProvider[] = {
    {PropertyVariable, sipName_Tip, &methods_wxTipProvider[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_CurrentTip, &methods_wxTipProvider[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxTipProvider, "TipProvider(currentTip)\n"
"\n"
"This is the class used together with wxShowTip() function.");


sipClassTypeDef sipTypeDef__adv_wxTipProvider = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxTipProvider,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_TipProvider,
        {0, 0, 1},
        2, methods_wxTipProvider,
        0, SIP_NULLPTR,
        2, variables_wxTipProvider,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTipProvider,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxTipProvider,
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
    dealloc_wxTipProvider,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxTipProvider,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
