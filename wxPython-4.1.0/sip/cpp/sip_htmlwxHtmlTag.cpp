/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"

        #include <wx/html/htmltag.h>

        #include <wx/colour.h>


PyDoc_STRVAR(doc_wxHtmlTag_GetAllParams, "GetAllParams() -> String\n"
"\n"
"Returns a string containing all parameters.");

extern "C" {static PyObject *meth_wxHtmlTag_GetAllParams(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_GetAllParams(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlTag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlTag, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetAllParams());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_GetAllParams, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_GetName, "GetName() -> String\n"
"\n"
"Returns tag's name.");

extern "C" {static PyObject *meth_wxHtmlTag_GetName(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlTag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlTag, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_GetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_GetParam, "GetParam(par, with_quotes=False) -> String\n"
"\n"
"Returns the value of the parameter.");

extern "C" {static PyObject *meth_wxHtmlTag_GetParam(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_GetParam(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* par;
        int parState = 0;
        bool with_quotes = 0;
        const  ::wxHtmlTag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_par,
            sipName_with_quotes,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|b", &sipSelf, sipType_wxHtmlTag, &sipCpp, sipType_wxString,&par, &parState, &with_quotes))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetParam(*par,with_quotes));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(par),sipType_wxString,parState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_GetParam, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_GetParamAsColour, "GetParamAsColour(par) -> (bool, clr)\n"
"\n"
"Interprets tag parameter par as colour specification and saves its\n"
"value into wxColour variable pointed by clr.");

extern "C" {static PyObject *meth_wxHtmlTag_GetParamAsColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_GetParamAsColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* par;
        int parState = 0;
         ::wxColour* clr;
        const  ::wxHtmlTag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_par,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlTag, &sipCpp, sipType_wxString,&par, &parState))
        {
            bool sipRes;
            clr = new  ::wxColour();

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetParamAsColour(*par,clr);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(par),sipType_wxString,parState);

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(bN)",sipRes,clr,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_GetParamAsColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_GetParamAsInt, "GetParamAsInt(par) -> (bool, value)\n"
"\n"
"Interprets tag parameter par as an integer and saves its value into\n"
"int variable pointed by value.");

extern "C" {static PyObject *meth_wxHtmlTag_GetParamAsInt(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_GetParamAsInt(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* par;
        int parState = 0;
        int value;
        const  ::wxHtmlTag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_par,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlTag, &sipCpp, sipType_wxString,&par, &parState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetParamAsInt(*par,&value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(par),sipType_wxString,parState);

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(bi)",sipRes,value);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_GetParamAsInt, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_GetParamAsString, "GetParamAsString(par, value) -> bool\n"
"\n"
"Get the value of the parameter.");

extern "C" {static PyObject *meth_wxHtmlTag_GetParamAsString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_GetParamAsString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* par;
        int parState = 0;
         ::wxString* value;
        int valueState = 0;
        const  ::wxHtmlTag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_par,
            sipName_value,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J0", &sipSelf, sipType_wxHtmlTag, &sipCpp, sipType_wxString,&par, &parState, sipType_wxString,&value, &valueState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetParamAsString(*par,value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(par),sipType_wxString,parState);
            sipReleaseType(value,sipType_wxString,valueState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_GetParamAsString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_HasEnding, "HasEnding() -> bool\n"
"\n"
"Returns true if this tag is paired with ending tag, false otherwise.");

extern "C" {static PyObject *meth_wxHtmlTag_HasEnding(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_HasEnding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlTag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlTag, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HasEnding();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_HasEnding, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_HasParam, "HasParam(par) -> bool\n"
"\n"
"Returns true if the tag has a parameter of the given name.");

extern "C" {static PyObject *meth_wxHtmlTag_HasParam(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_HasParam(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* par;
        int parState = 0;
        const  ::wxHtmlTag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_par,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlTag, &sipCpp, sipType_wxString,&par, &parState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HasParam(*par);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(par),sipType_wxString,parState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_HasParam, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTag_ParseAsColour, "ParseAsColour(str) -> (bool, clr)\n"
"\n"
"Parses the given string as an HTML colour.");

extern "C" {static PyObject *meth_wxHtmlTag_ParseAsColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTag_ParseAsColour(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* str;
        int strState = 0;
         ::wxColour* clr;

        static const char *sipKwdList[] = {
            sipName_str,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_wxString,&str, &strState))
        {
            bool sipRes;
            clr = new  ::wxColour();

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxHtmlTag::ParseAsColour(*str,clr);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(str),sipType_wxString,strState);

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(bN)",sipRes,clr,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTag, sipName_ParseAsColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlTag(void *, int);}
static void release_wxHtmlTag(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxHtmlTag *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlTag(sipSimpleWrapper *);}
static void dealloc_wxHtmlTag(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlTag(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_wxHtmlTag[] = {
    {SIP_MLNAME_CAST(sipName_GetAllParams), meth_wxHtmlTag_GetAllParams, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlTag_GetAllParams)},
    {SIP_MLNAME_CAST(sipName_GetName), meth_wxHtmlTag_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlTag_GetName)},
    {SIP_MLNAME_CAST(sipName_GetParam), SIP_MLMETH_CAST(meth_wxHtmlTag_GetParam), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTag_GetParam)},
    {SIP_MLNAME_CAST(sipName_GetParamAsColour), SIP_MLMETH_CAST(meth_wxHtmlTag_GetParamAsColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTag_GetParamAsColour)},
    {SIP_MLNAME_CAST(sipName_GetParamAsInt), SIP_MLMETH_CAST(meth_wxHtmlTag_GetParamAsInt), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTag_GetParamAsInt)},
    {SIP_MLNAME_CAST(sipName_GetParamAsString), SIP_MLMETH_CAST(meth_wxHtmlTag_GetParamAsString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTag_GetParamAsString)},
    {SIP_MLNAME_CAST(sipName_HasEnding), meth_wxHtmlTag_HasEnding, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlTag_HasEnding)},
    {SIP_MLNAME_CAST(sipName_HasParam), SIP_MLMETH_CAST(meth_wxHtmlTag_HasParam), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTag_HasParam)},
    {SIP_MLNAME_CAST(sipName_ParseAsColour), SIP_MLMETH_CAST(meth_wxHtmlTag_ParseAsColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTag_ParseAsColour)}
};

sipVariableDef variables_wxHtmlTag[] = {
    {PropertyVariable, sipName_Name, &methods_wxHtmlTag[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AllParams, &methods_wxHtmlTag[0], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlTag, "This class represents a single HTML tag.");


sipClassTypeDef sipTypeDef__html_wxHtmlTag = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxHtmlTag,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlTag,
        {0, 0, 1},
        9, methods_wxHtmlTag,
        0, SIP_NULLPTR,
        2, variables_wxHtmlTag,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlTag,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
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
    dealloc_wxHtmlTag,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlTag,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
