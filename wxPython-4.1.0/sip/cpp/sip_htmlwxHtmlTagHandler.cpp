/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"

        #include <wx/html/htmlpars.h>

        #include <wx/html/htmltag.h>
        #include <wx/html/htmlpars.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxHtmlTagHandler : public  ::wxHtmlTagHandler
{
public:
    sipwxHtmlTagHandler();
    virtual ~sipwxHtmlTagHandler();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtect_ParseInner(const  ::wxHtmlTag&);
    void sipProtect_ParseInnerSource(const  ::wxString&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void SetParser( ::wxHtmlParser*) SIP_OVERRIDE;
    bool HandleTag(const  ::wxHtmlTag&) SIP_OVERRIDE;
     ::wxString GetSupportedTags() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxHtmlTagHandler(const sipwxHtmlTagHandler &);
    sipwxHtmlTagHandler &operator = (const sipwxHtmlTagHandler &);

    char sipPyMethods[3];
};

sipwxHtmlTagHandler::sipwxHtmlTagHandler():  ::wxHtmlTagHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHtmlTagHandler::~sipwxHtmlTagHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxHtmlTagHandler::SetParser( ::wxHtmlParser*parser)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_SetParser);

    if (!sipMeth)
    {
         ::wxHtmlTagHandler::SetParser(parser);
        return;
    }

    extern void sipVH__html_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxHtmlParser*);

    sipVH__html_18(sipGILState, 0, sipPySelf, sipMeth, parser);
}

bool sipwxHtmlTagHandler::HandleTag(const  ::wxHtmlTag& tag)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_HtmlTagHandler,sipName_HandleTag);

    if (!sipMeth)
        return 0;

    extern bool sipVH__html_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxHtmlTag&);

    return sipVH__html_17(sipGILState, 0, sipPySelf, sipMeth, tag);
}

 ::wxString sipwxHtmlTagHandler::GetSupportedTags()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_HtmlTagHandler,sipName_GetSupportedTags);

    if (!sipMeth)
        return  ::wxString();

    extern  ::wxString sipVH__html_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html_16(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxHtmlTagHandler::sipProtect_ParseInner(const  ::wxHtmlTag& tag)
{
     ::wxHtmlTagHandler::ParseInner(tag);
}

void sipwxHtmlTagHandler::sipProtect_ParseInnerSource(const  ::wxString& source)
{
     ::wxHtmlTagHandler::ParseInnerSource(source);
}


PyDoc_STRVAR(doc_wxHtmlTagHandler_GetSupportedTags, "GetSupportedTags() -> String\n"
"\n"
"Returns list of supported tags.");

extern "C" {static PyObject *meth_wxHtmlTagHandler_GetSupportedTags(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTagHandler_GetSupportedTags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxHtmlTagHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlTagHandler, &sipCpp))
        {
             ::wxString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_HtmlTagHandler, sipName_GetSupportedTags);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetSupportedTags());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTagHandler, sipName_GetSupportedTags, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTagHandler_HandleTag, "HandleTag(tag) -> bool\n"
"\n"
"This is the core method of each handler.");

extern "C" {static PyObject *meth_wxHtmlTagHandler_HandleTag(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTagHandler_HandleTag(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxHtmlTag* tag;
         ::wxHtmlTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_tag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxHtmlTagHandler, &sipCpp, sipType_wxHtmlTag, &tag))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_HtmlTagHandler, sipName_HandleTag);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HandleTag(*tag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTagHandler, sipName_HandleTag, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTagHandler_SetParser, "SetParser(parser)\n"
"\n"
"Assigns parser to this handler.");

extern "C" {static PyObject *meth_wxHtmlTagHandler_SetParser(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTagHandler_SetParser(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxHtmlParser* parser;
         ::wxHtmlTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parser,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxHtmlTagHandler, &sipCpp, sipType_wxHtmlParser, &parser))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxHtmlTagHandler::SetParser(parser) : sipCpp->SetParser(parser));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTagHandler, sipName_SetParser, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTagHandler_GetParser, "GetParser() -> HtmlParser\n"
"\n"
"Returns the parser associated with this tag handler.");

extern "C" {static PyObject *meth_wxHtmlTagHandler_GetParser(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTagHandler_GetParser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlTagHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlTagHandler, &sipCpp))
        {
             ::wxHtmlParser*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetParser();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxHtmlParser,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTagHandler, sipName_GetParser, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTagHandler_ParseInner, "ParseInner(tag)\n"
"\n"
"This method calls parser's wxHtmlParser::DoParsing method for the\n"
"string between this tag and the paired ending tag:");

extern "C" {static PyObject *meth_wxHtmlTagHandler_ParseInner(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTagHandler_ParseInner(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlTag* tag;
        sipwxHtmlTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_tag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxHtmlTagHandler, &sipCpp, sipType_wxHtmlTag, &tag))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_ParseInner(*tag);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTagHandler, sipName_ParseInner, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlTagHandler_ParseInnerSource, "ParseInnerSource(source)\n"
"\n"
"Parses given source as if it was tag's inner code (see\n"
"wxHtmlParser::GetInnerSource).");

extern "C" {static PyObject *meth_wxHtmlTagHandler_ParseInnerSource(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlTagHandler_ParseInnerSource(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* source;
        int sourceState = 0;
        sipwxHtmlTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_source,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlTagHandler, &sipCpp, sipType_wxString,&source, &sourceState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_ParseInnerSource(*source);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(source),sipType_wxString,sourceState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlTagHandler, sipName_ParseInnerSource, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxHtmlTagHandler(void *, const sipTypeDef *);}
static void *cast_wxHtmlTagHandler(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxHtmlTagHandler *sipCpp = reinterpret_cast< ::wxHtmlTagHandler *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlTagHandler(void *, int);}
static void release_wxHtmlTagHandler(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxHtmlTagHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::wxHtmlTagHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlTagHandler(sipSimpleWrapper *);}
static void dealloc_wxHtmlTagHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxHtmlTagHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlTagHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxHtmlTagHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlTagHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxHtmlTagHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHtmlTagHandler();
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
static sipEncodedTypeDef supers_wxHtmlTagHandler[] = {{25, 0, 1}};


static PyMethodDef methods_wxHtmlTagHandler[] = {
    {SIP_MLNAME_CAST(sipName_GetParser), meth_wxHtmlTagHandler_GetParser, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlTagHandler_GetParser)},
    {SIP_MLNAME_CAST(sipName_GetSupportedTags), meth_wxHtmlTagHandler_GetSupportedTags, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlTagHandler_GetSupportedTags)},
    {SIP_MLNAME_CAST(sipName_HandleTag), SIP_MLMETH_CAST(meth_wxHtmlTagHandler_HandleTag), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTagHandler_HandleTag)},
    {SIP_MLNAME_CAST(sipName_ParseInner), SIP_MLMETH_CAST(meth_wxHtmlTagHandler_ParseInner), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTagHandler_ParseInner)},
    {SIP_MLNAME_CAST(sipName_ParseInnerSource), SIP_MLMETH_CAST(meth_wxHtmlTagHandler_ParseInnerSource), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTagHandler_ParseInnerSource)},
    {SIP_MLNAME_CAST(sipName_SetParser), SIP_MLMETH_CAST(meth_wxHtmlTagHandler_SetParser), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlTagHandler_SetParser)}
};

sipVariableDef variables_wxHtmlTagHandler[] = {
    {PropertyVariable, sipName_SupportedTags, &methods_wxHtmlTagHandler[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_Parser, &methods_wxHtmlTagHandler[0], &methods_wxHtmlTagHandler[5], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlTagHandler, "HtmlTagHandler()");


sipClassTypeDef sipTypeDef__html_wxHtmlTagHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxHtmlTagHandler,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlTagHandler,
        {0, 0, 1},
        6, methods_wxHtmlTagHandler,
        0, SIP_NULLPTR,
        2, variables_wxHtmlTagHandler,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlTagHandler,
    -1,
    -1,
    supers_wxHtmlTagHandler,
    SIP_NULLPTR,
    init_type_wxHtmlTagHandler,
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
    dealloc_wxHtmlTagHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlTagHandler,
    cast_wxHtmlTagHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};