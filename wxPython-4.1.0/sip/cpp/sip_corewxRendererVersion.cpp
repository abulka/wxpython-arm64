/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/renderer.h>



PyDoc_STRVAR(doc_wxRendererVersion_IsCompatible, "IsCompatible(ver) -> bool\n"
"\n"
"Checks if the main program is compatible with the renderer having the\n"
"version ver, returns true if it is and false otherwise.");

extern "C" {static PyObject *meth_wxRendererVersion_IsCompatible(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRendererVersion_IsCompatible(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxRendererVersion* ver;

        static const char *sipKwdList[] = {
            sipName_ver,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J9", sipType_wxRendererVersion, &ver))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxRendererVersion::IsCompatible(*ver);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RendererVersion, sipName_IsCompatible, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRendererVersion(void *, int);}
static void release_wxRendererVersion(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxRendererVersion *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxRendererVersion(sipSimpleWrapper *);}
static void dealloc_wxRendererVersion(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRendererVersion(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxRendererVersion(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRendererVersion(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxRendererVersion *sipCpp = SIP_NULLPTR;

    {
        int version_;
        int age_;

        static const char *sipKwdList[] = {
            sipName_version_,
            sipName_age_,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii", &version_, &age_))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRendererVersion(version_,age_);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxRendererVersion* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxRendererVersion, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxRendererVersion(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxRendererVersion[] = {
    {SIP_MLNAME_CAST(sipName_IsCompatible), SIP_MLMETH_CAST(meth_wxRendererVersion_IsCompatible), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRendererVersion_IsCompatible)}
};


extern "C" {static PyObject *varget_wxRendererVersion_age(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRendererVersion_age(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxRendererVersion *sipCpp = reinterpret_cast< ::wxRendererVersion *>(sipSelf);

    sipVal = sipCpp->age;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static PyObject *varget_wxRendererVersion_version(void *, PyObject *, PyObject *);}
static PyObject *varget_wxRendererVersion_version(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxRendererVersion *sipCpp = reinterpret_cast< ::wxRendererVersion *>(sipSelf);

    sipVal = sipCpp->version;

    return SIPLong_FromLong(sipVal);
}

sipVariableDef variables_wxRendererVersion[] = {
    {InstanceVariable, sipName_age, (PyMethodDef *)varget_wxRendererVersion_age, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_version, (PyMethodDef *)varget_wxRendererVersion_version, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxRendererVersion, "RendererVersion(version_, age_)\n"
"\n"
"This simple struct represents the wxRendererNative interface version\n"
"and is only used as the return value of\n"
"wxRendererNative::GetVersion().");


sipClassTypeDef sipTypeDef__core_wxRendererVersion = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxRendererVersion,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RendererVersion,
        {0, 0, 1},
        1, methods_wxRendererVersion,
        0, SIP_NULLPTR,
        2, variables_wxRendererVersion,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRendererVersion,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxRendererVersion,
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
    dealloc_wxRendererVersion,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxRendererVersion,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};