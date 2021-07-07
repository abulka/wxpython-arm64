/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html.h"

        #include <wx/html/winpars.h>

        #include <wx/html/winpars.h>
        #include <wx/html/htmlpars.h>
        #include <wx/html/htmltag.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>
    wxHtmlWinParser* _wxHtmlWinTagHandler_GetParser(wxHtmlWinTagHandler* self)
    {
        return (wxHtmlWinParser*)self->GetParser();
    }


class sipwxHtmlWinTagHandler : public  ::wxHtmlWinTagHandler
{
public:
    sipwxHtmlWinTagHandler();
    virtual ~sipwxHtmlWinTagHandler();

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
     ::wxString GetSupportedTags() SIP_OVERRIDE;
    bool HandleTag(const  ::wxHtmlTag&) SIP_OVERRIDE;
    void SetParser( ::wxHtmlParser*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxHtmlWinTagHandler(const sipwxHtmlWinTagHandler &);
    sipwxHtmlWinTagHandler &operator = (const sipwxHtmlWinTagHandler &);

    char sipPyMethods[3];
};

sipwxHtmlWinTagHandler::sipwxHtmlWinTagHandler():  ::wxHtmlWinTagHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxHtmlWinTagHandler::~sipwxHtmlWinTagHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxString sipwxHtmlWinTagHandler::GetSupportedTags()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_HtmlWinTagHandler,sipName_GetSupportedTags);

    if (!sipMeth)
        return  ::wxString();

    extern  ::wxString sipVH__html_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__html_16(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxHtmlWinTagHandler::HandleTag(const  ::wxHtmlTag& tag)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_HtmlWinTagHandler,sipName_HandleTag);

    if (!sipMeth)
        return 0;

    extern bool sipVH__html_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxHtmlTag&);

    return sipVH__html_17(sipGILState, 0, sipPySelf, sipMeth, tag);
}

void sipwxHtmlWinTagHandler::SetParser( ::wxHtmlParser*parser)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_SetParser);

    if (!sipMeth)
    {
         ::wxHtmlWinTagHandler::SetParser(parser);
        return;
    }

    extern void sipVH__html_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxHtmlParser*);

    sipVH__html_18(sipGILState, 0, sipPySelf, sipMeth, parser);
}

void sipwxHtmlWinTagHandler::sipProtect_ParseInner(const  ::wxHtmlTag& tag)
{
     ::wxHtmlTagHandler::ParseInner(tag);
}

void sipwxHtmlWinTagHandler::sipProtect_ParseInnerSource(const  ::wxString& source)
{
     ::wxHtmlTagHandler::ParseInnerSource(source);
}


PyDoc_STRVAR(doc_wxHtmlWinTagHandler_ParseInner, "ParseInner(tag)\n"
"\n"
"This method calls parser's wxHtmlParser::DoParsing method for the\n"
"string between this tag and the paired ending tag:");

extern "C" {static PyObject *meth_wxHtmlWinTagHandler_ParseInner(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlWinTagHandler_ParseInner(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxHtmlTag* tag;
        sipwxHtmlWinTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_tag,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxHtmlWinTagHandler, &sipCpp, sipType_wxHtmlTag, &tag))
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
    sipNoMethod(sipParseErr, sipName_HtmlWinTagHandler, sipName_ParseInner, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlWinTagHandler_ParseInnerSource, "ParseInnerSource(source)\n"
"\n"
"Parses given source as if it was tag's inner code (see\n"
"wxHtmlParser::GetInnerSource).");

extern "C" {static PyObject *meth_wxHtmlWinTagHandler_ParseInnerSource(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlWinTagHandler_ParseInnerSource(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* source;
        int sourceState = 0;
        sipwxHtmlWinTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_source,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxHtmlWinTagHandler, &sipCpp, sipType_wxString,&source, &sourceState))
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
    sipNoMethod(sipParseErr, sipName_HtmlWinTagHandler, sipName_ParseInnerSource, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlWinTagHandler_SetParser, "SetParser(parser)\n"
"\n"
"Assigns parser to this handler.");

extern "C" {static PyObject *meth_wxHtmlWinTagHandler_SetParser(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxHtmlWinTagHandler_SetParser(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxHtmlParser* parser;
         ::wxHtmlWinTagHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parser,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxHtmlWinTagHandler, &sipCpp, sipType_wxHtmlParser, &parser))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxHtmlWinTagHandler::SetParser(parser) : sipCpp->SetParser(parser));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlWinTagHandler, sipName_SetParser, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxHtmlWinTagHandler_GetParser, "GetParser() -> HtmlWinParser");

extern "C" {static PyObject *meth_wxHtmlWinTagHandler_GetParser(PyObject *, PyObject *);}
static PyObject *meth_wxHtmlWinTagHandler_GetParser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxHtmlWinTagHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxHtmlWinTagHandler, &sipCpp))
        {
             ::wxHtmlWinParser*sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxHtmlWinTagHandler_GetParser(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_wxHtmlWinParser,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_HtmlWinTagHandler, sipName_GetParser, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxHtmlWinTagHandler(void *, const sipTypeDef *);}
static void *cast_wxHtmlWinTagHandler(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxHtmlWinTagHandler *sipCpp = reinterpret_cast< ::wxHtmlWinTagHandler *>(sipCppV);

    if (targetType == sipType_wxHtmlTagHandler)
        return static_cast< ::wxHtmlTagHandler *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxHtmlWinTagHandler(void *, int);}
static void release_wxHtmlWinTagHandler(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxHtmlWinTagHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::wxHtmlWinTagHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxHtmlWinTagHandler(sipSimpleWrapper *);}
static void dealloc_wxHtmlWinTagHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxHtmlWinTagHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxHtmlWinTagHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxHtmlWinTagHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxHtmlWinTagHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxHtmlWinTagHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxHtmlWinTagHandler();
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
static sipEncodedTypeDef supers_wxHtmlWinTagHandler[] = {{32, 255, 1}};


static PyMethodDef methods_wxHtmlWinTagHandler[] = {
    {SIP_MLNAME_CAST(sipName_GetParser), meth_wxHtmlWinTagHandler_GetParser, METH_VARARGS, SIP_MLDOC_CAST(doc_wxHtmlWinTagHandler_GetParser)},
    {SIP_MLNAME_CAST(sipName_ParseInner), SIP_MLMETH_CAST(meth_wxHtmlWinTagHandler_ParseInner), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_ParseInnerSource), SIP_MLMETH_CAST(meth_wxHtmlWinTagHandler_ParseInnerSource), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_SetParser), SIP_MLMETH_CAST(meth_wxHtmlWinTagHandler_SetParser), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxHtmlWinTagHandler_SetParser)}
};

sipVariableDef variables_wxHtmlWinTagHandler[] = {
    {PropertyVariable, sipName_Parser, &methods_wxHtmlWinTagHandler[0], &methods_wxHtmlWinTagHandler[3], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxHtmlWinTagHandler, "HtmlWinTagHandler()\n"
"\n"
"This is basically wxHtmlTagHandler except that it is extended with\n"
"protected member m_WParser pointing to the wxHtmlWinParser object\n"
"(value of this member is identical to wxHtmlParser's m_Parser).");


sipClassTypeDef sipTypeDef__html_wxHtmlWinTagHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxHtmlWinTagHandler,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_HtmlWinTagHandler,
        {0, 0, 1},
        4, methods_wxHtmlWinTagHandler,
        0, SIP_NULLPTR,
        1, variables_wxHtmlWinTagHandler,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxHtmlWinTagHandler,
    -1,
    -1,
    supers_wxHtmlWinTagHandler,
    SIP_NULLPTR,
    init_type_wxHtmlWinTagHandler,
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
    dealloc_wxHtmlWinTagHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxHtmlWinTagHandler,
    cast_wxHtmlWinTagHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};