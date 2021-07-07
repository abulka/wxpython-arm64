/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/translation.h>

        #include <wx/translation.h>


PyDoc_STRVAR(doc_wxTranslations_SetLoader, "SetLoader(loader)\n"
"\n"
"Changes loader use to read catalogs to a non-default one.");

extern "C" {static PyObject *meth_wxTranslations_SetLoader(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_SetLoader(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTranslationsLoader* loader;
         ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_loader,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ:", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxTranslationsLoader, &loader))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLoader(loader);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_SetLoader, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_SetLanguage, "SetLanguage(lang)\n"
"SetLanguage(lang)\n"
"\n"
"Sets translations language to use.\n"
"");

extern "C" {static PyObject *meth_wxTranslations_SetLanguage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_SetLanguage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxLanguage lang;
         ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_lang,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxLanguage, &lang))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLanguage(lang);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::wxString* lang;
        int langState = 0;
         ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_lang,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&lang, &langState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetLanguage(*lang);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(lang),sipType_wxString,langState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_SetLanguage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_GetAvailableTranslations, "GetAvailableTranslations(domain) -> ArrayString\n"
"\n"
"Returns list of all translations of domain that were found.");

extern "C" {static PyObject *meth_wxTranslations_GetAvailableTranslations(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_GetAvailableTranslations(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* domain;
        int domainState = 0;
        const  ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_domain,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&domain, &domainState))
        {
             ::wxArrayString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxArrayString(sipCpp->GetAvailableTranslations(*domain));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxArrayString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_GetAvailableTranslations, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_GetBestTranslation, "GetBestTranslation(domain, msgIdLanguage) -> String\n"
"GetBestTranslation(domain, msgIdLanguage=\"en\") -> String\n"
"\n"
"Returns the best UI language for the domain.\n"
"");

extern "C" {static PyObject *meth_wxTranslations_GetBestTranslation(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_GetBestTranslation(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* domain;
        int domainState = 0;
         ::wxLanguage msgIdLanguage;
         ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_domain,
            sipName_msgIdLanguage,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1E", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&domain, &domainState, sipType_wxLanguage, &msgIdLanguage))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetBestTranslation(*domain,msgIdLanguage));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    {
        const  ::wxString* domain;
        int domainState = 0;
        const  ::wxString& msgIdLanguagedef = "en";
        const  ::wxString* msgIdLanguage = &msgIdLanguagedef;
        int msgIdLanguageState = 0;
         ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_domain,
            sipName_msgIdLanguage,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&domain, &domainState, sipType_wxString,&msgIdLanguage, &msgIdLanguageState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetBestTranslation(*domain,*msgIdLanguage));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);
            sipReleaseType(const_cast< ::wxString *>(msgIdLanguage),sipType_wxString,msgIdLanguageState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_GetBestTranslation, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_AddStdCatalog, "AddStdCatalog() -> bool\n"
"\n"
"Add standard wxWidgets catalogs (\"wxstd\" and possible port-specific\n"
"catalogs).");

extern "C" {static PyObject *meth_wxTranslations_AddStdCatalog(PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_AddStdCatalog(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTranslations *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxTranslations, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->AddStdCatalog();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_AddStdCatalog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_AddCatalog, "AddCatalog(domain, msgIdLanguage=LANGUAGE_ENGLISH_US) -> bool\n"
"\n"
"Add a catalog for use with the current locale.");

extern "C" {static PyObject *meth_wxTranslations_AddCatalog(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_AddCatalog(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* domain;
        int domainState = 0;
         ::wxLanguage msgIdLanguage = wxLANGUAGE_ENGLISH_US;
         ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_domain,
            sipName_msgIdLanguage,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|E", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&domain, &domainState, sipType_wxLanguage, &msgIdLanguage))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->AddCatalog(*domain,msgIdLanguage);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_AddCatalog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_IsLoaded, "IsLoaded(domain) -> bool\n"
"\n"
"Check if the given catalog is loaded, and returns true if it is.");

extern "C" {static PyObject *meth_wxTranslations_IsLoaded(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_IsLoaded(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* domain;
        int domainState = 0;
        const  ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_domain,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&domain, &domainState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsLoaded(*domain);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_IsLoaded, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_GetTranslatedString, "GetTranslatedString(origString, domain=EmptyString) -> String\n"
"GetTranslatedString(origString, n, domain=EmptyString) -> String\n"
"\n"
"Retrieves the translation for a string in all loaded domains unless\n"
"the domain parameter is specified (and then only this catalog/domain\n"
"is searched).\n"
"");

extern "C" {static PyObject *meth_wxTranslations_GetTranslatedString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_GetTranslatedString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* origString;
        int origStringState = 0;
        const  ::wxString& domaindef = wxEmptyString;
        const  ::wxString* domain = &domaindef;
        int domainState = 0;
        const  ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_origString,
            sipName_domain,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&origString, &origStringState, sipType_wxString,&domain, &domainState))
        {
            const  ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetTranslatedString(*origString,*domain);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(origString),sipType_wxString,origStringState);
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(const_cast< ::wxString *>(sipRes),sipType_wxString,SIP_NULLPTR);
        }
    }

    {
        const  ::wxString* origString;
        int origStringState = 0;
        uint n;
        const  ::wxString& domaindef = wxEmptyString;
        const  ::wxString* domain = &domaindef;
        int domainState = 0;
        const  ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_origString,
            sipName_n,
            sipName_domain,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1u|J1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&origString, &origStringState, &n, sipType_wxString,&domain, &domainState))
        {
            const  ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetTranslatedString(*origString,n,*domain);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(origString),sipType_wxString,origStringState);
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(const_cast< ::wxString *>(sipRes),sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_GetTranslatedString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_GetHeaderValue, "GetHeaderValue(header, domain=EmptyString) -> String\n"
"\n"
"Returns the header value for header header.");

extern "C" {static PyObject *meth_wxTranslations_GetHeaderValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_GetHeaderValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* header;
        int headerState = 0;
        const  ::wxString& domaindef = wxEmptyString;
        const  ::wxString* domain = &domaindef;
        int domainState = 0;
        const  ::wxTranslations *sipCpp;

        static const char *sipKwdList[] = {
            sipName_header,
            sipName_domain,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_wxTranslations, &sipCpp, sipType_wxString,&header, &headerState, sipType_wxString,&domain, &domainState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetHeaderValue(*header,*domain));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(header),sipType_wxString,headerState);
            sipReleaseType(const_cast< ::wxString *>(domain),sipType_wxString,domainState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_GetHeaderValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_Get, "Get() -> Translations\n"
"\n"
"Returns current translations object, may return NULL.");

extern "C" {static PyObject *meth_wxTranslations_Get(PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_Get(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::wxTranslations*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxTranslations::Get();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxTranslations,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_Get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxTranslations_Set, "Set(t)\n"
"\n"
"Sets current translations object.");

extern "C" {static PyObject *meth_wxTranslations_Set(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxTranslations_Set(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxTranslations* t;

        static const char *sipKwdList[] = {
            sipName_t,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J:", sipType_wxTranslations, &t))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
             ::wxTranslations::Set(t);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Translations, sipName_Set, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxTranslations(void *, int);}
static void release_wxTranslations(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxTranslations *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxTranslations(void *, SIP_SSIZE_T, void *);}
static void assign_wxTranslations(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxTranslations *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxTranslations *>(sipSrc);
}


extern "C" {static void *array_wxTranslations(SIP_SSIZE_T);}
static void *array_wxTranslations(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxTranslations[sipNrElem];
}


extern "C" {static void *copy_wxTranslations(const void *, SIP_SSIZE_T);}
static void *copy_wxTranslations(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxTranslations(reinterpret_cast<const  ::wxTranslations *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxTranslations(sipSimpleWrapper *);}
static void dealloc_wxTranslations(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxTranslations(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxTranslations(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxTranslations(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxTranslations *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTranslations();
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
        const  ::wxTranslations* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxTranslations, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxTranslations(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxTranslations[] = {
    {SIP_MLNAME_CAST(sipName_AddCatalog), SIP_MLMETH_CAST(meth_wxTranslations_AddCatalog), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_AddCatalog)},
    {SIP_MLNAME_CAST(sipName_AddStdCatalog), meth_wxTranslations_AddStdCatalog, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTranslations_AddStdCatalog)},
    {SIP_MLNAME_CAST(sipName_Get), meth_wxTranslations_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_wxTranslations_Get)},
    {SIP_MLNAME_CAST(sipName_GetAvailableTranslations), SIP_MLMETH_CAST(meth_wxTranslations_GetAvailableTranslations), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_GetAvailableTranslations)},
    {SIP_MLNAME_CAST(sipName_GetBestTranslation), SIP_MLMETH_CAST(meth_wxTranslations_GetBestTranslation), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_GetBestTranslation)},
    {SIP_MLNAME_CAST(sipName_GetHeaderValue), SIP_MLMETH_CAST(meth_wxTranslations_GetHeaderValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_GetHeaderValue)},
    {SIP_MLNAME_CAST(sipName_GetTranslatedString), SIP_MLMETH_CAST(meth_wxTranslations_GetTranslatedString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_GetTranslatedString)},
    {SIP_MLNAME_CAST(sipName_IsLoaded), SIP_MLMETH_CAST(meth_wxTranslations_IsLoaded), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_IsLoaded)},
    {SIP_MLNAME_CAST(sipName_Set), SIP_MLMETH_CAST(meth_wxTranslations_Set), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_Set)},
    {SIP_MLNAME_CAST(sipName_SetLanguage), SIP_MLMETH_CAST(meth_wxTranslations_SetLanguage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_SetLanguage)},
    {SIP_MLNAME_CAST(sipName_SetLoader), SIP_MLMETH_CAST(meth_wxTranslations_SetLoader), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxTranslations_SetLoader)}
};

PyDoc_STRVAR(doc_wxTranslations, "Translations()\n"
"\n"
"This class allows getting translations for strings.");


sipClassTypeDef sipTypeDef__core_wxTranslations = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxTranslations,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Translations,
        {0, 0, 1},
        11, methods_wxTranslations,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxTranslations,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxTranslations,
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
    dealloc_wxTranslations,
    assign_wxTranslations,
    array_wxTranslations,
    copy_wxTranslations,
    release_wxTranslations,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
