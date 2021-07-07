/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_richtext.h"

        #include <wx/richtext/richtextbuffer.h>

        #include <wx/richtext/richtextbuffer.h>
        #include <wx/dc.h>
        #include <wx/richtext/richtextbuffer.h>
        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxRichTextRenderer : public  ::wxRichTextRenderer
{
public:
    sipwxRichTextRenderer();
    sipwxRichTextRenderer(const  ::wxRichTextRenderer&);
    virtual ~sipwxRichTextRenderer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool MeasureBullet( ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&, ::wxSize&) SIP_OVERRIDE;
    bool EnumerateStandardBulletNames( ::wxArrayString&) SIP_OVERRIDE;
    bool DrawBitmapBullet( ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&,const  ::wxRect&) SIP_OVERRIDE;
    bool DrawTextBullet( ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&,const  ::wxRect&,const  ::wxString&) SIP_OVERRIDE;
    bool DrawStandardBullet( ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&,const  ::wxRect&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxRichTextRenderer(const sipwxRichTextRenderer &);
    sipwxRichTextRenderer &operator = (const sipwxRichTextRenderer &);

    char sipPyMethods[5];
};

sipwxRichTextRenderer::sipwxRichTextRenderer():  ::wxRichTextRenderer(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxRichTextRenderer::sipwxRichTextRenderer(const  ::wxRichTextRenderer& a0):  ::wxRichTextRenderer(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxRichTextRenderer::~sipwxRichTextRenderer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxRichTextRenderer::MeasureBullet( ::wxRichTextParagraph*paragraph, ::wxDC& dc,const  ::wxRichTextAttr& attr, ::wxSize& sz)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_RichTextRenderer,sipName_MeasureBullet);

    if (!sipMeth)
        return 0;

    extern bool sipVH__richtext_128(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&, ::wxSize&);

    return sipVH__richtext_128(sipGILState, 0, sipPySelf, sipMeth, paragraph, dc, attr, sz);
}

bool sipwxRichTextRenderer::EnumerateStandardBulletNames( ::wxArrayString& bulletNames)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_RichTextRenderer,sipName_EnumerateStandardBulletNames);

    if (!sipMeth)
        return 0;

    extern bool sipVH__richtext_127(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxArrayString&);

    return sipVH__richtext_127(sipGILState, 0, sipPySelf, sipMeth, bulletNames);
}

bool sipwxRichTextRenderer::DrawBitmapBullet( ::wxRichTextParagraph*paragraph, ::wxDC& dc,const  ::wxRichTextAttr& attr,const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_RichTextRenderer,sipName_DrawBitmapBullet);

    if (!sipMeth)
        return 0;

    extern bool sipVH__richtext_125(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&,const  ::wxRect&);

    return sipVH__richtext_125(sipGILState, 0, sipPySelf, sipMeth, paragraph, dc, attr, rect);
}

bool sipwxRichTextRenderer::DrawTextBullet( ::wxRichTextParagraph*paragraph, ::wxDC& dc,const  ::wxRichTextAttr& attr,const  ::wxRect& rect,const  ::wxString& text)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_RichTextRenderer,sipName_DrawTextBullet);

    if (!sipMeth)
        return 0;

    extern bool sipVH__richtext_126(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&,const  ::wxRect&,const  ::wxString&);

    return sipVH__richtext_126(sipGILState, 0, sipPySelf, sipMeth, paragraph, dc, attr, rect, text);
}

bool sipwxRichTextRenderer::DrawStandardBullet( ::wxRichTextParagraph*paragraph, ::wxDC& dc,const  ::wxRichTextAttr& attr,const  ::wxRect& rect)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_RichTextRenderer,sipName_DrawStandardBullet);

    if (!sipMeth)
        return 0;

    extern bool sipVH__richtext_125(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxRichTextParagraph*, ::wxDC&,const  ::wxRichTextAttr&,const  ::wxRect&);

    return sipVH__richtext_125(sipGILState, 0, sipPySelf, sipMeth, paragraph, dc, attr, rect);
}


PyDoc_STRVAR(doc_wxRichTextRenderer_DrawStandardBullet, "DrawStandardBullet(paragraph, dc, attr, rect) -> bool\n"
"\n"
"Draws a standard bullet, as specified by the value of GetBulletName.");

extern "C" {static PyObject *meth_wxRichTextRenderer_DrawStandardBullet(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRenderer_DrawStandardBullet(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxRichTextParagraph* paragraph;
         ::wxDC* dc;
        const  ::wxRichTextAttr* attr;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxRichTextRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_paragraph,
            sipName_dc,
            sipName_attr,
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J9J9J1", &sipSelf, sipType_wxRichTextRenderer, &sipCpp, sipType_wxRichTextParagraph, &paragraph, sipType_wxDC, &dc, sipType_wxRichTextAttr, &attr, sipType_wxRect, &rect, &rectState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_RichTextRenderer, sipName_DrawStandardBullet);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DrawStandardBullet(paragraph,*dc,*attr,*rect);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRenderer, sipName_DrawStandardBullet, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextRenderer_DrawTextBullet, "DrawTextBullet(paragraph, dc, attr, rect, text) -> bool\n"
"\n"
"Draws a bullet that can be described by text, such as numbered or\n"
"symbol bullets.");

extern "C" {static PyObject *meth_wxRichTextRenderer_DrawTextBullet(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRenderer_DrawTextBullet(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxRichTextParagraph* paragraph;
         ::wxDC* dc;
        const  ::wxRichTextAttr* attr;
        const  ::wxRect* rect;
        int rectState = 0;
        const  ::wxString* text;
        int textState = 0;
         ::wxRichTextRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_paragraph,
            sipName_dc,
            sipName_attr,
            sipName_rect,
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J9J9J1J1", &sipSelf, sipType_wxRichTextRenderer, &sipCpp, sipType_wxRichTextParagraph, &paragraph, sipType_wxDC, &dc, sipType_wxRichTextAttr, &attr, sipType_wxRect, &rect, &rectState, sipType_wxString,&text, &textState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_RichTextRenderer, sipName_DrawTextBullet);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DrawTextBullet(paragraph,*dc,*attr,*rect,*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRenderer, sipName_DrawTextBullet, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextRenderer_DrawBitmapBullet, "DrawBitmapBullet(paragraph, dc, attr, rect) -> bool\n"
"\n"
"Draws a bitmap bullet, where the bullet bitmap is specified by the\n"
"value of GetBulletName.");

extern "C" {static PyObject *meth_wxRichTextRenderer_DrawBitmapBullet(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRenderer_DrawBitmapBullet(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxRichTextParagraph* paragraph;
         ::wxDC* dc;
        const  ::wxRichTextAttr* attr;
        const  ::wxRect* rect;
        int rectState = 0;
         ::wxRichTextRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_paragraph,
            sipName_dc,
            sipName_attr,
            sipName_rect,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J9J9J1", &sipSelf, sipType_wxRichTextRenderer, &sipCpp, sipType_wxRichTextParagraph, &paragraph, sipType_wxDC, &dc, sipType_wxRichTextAttr, &attr, sipType_wxRect, &rect, &rectState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_RichTextRenderer, sipName_DrawBitmapBullet);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DrawBitmapBullet(paragraph,*dc,*attr,*rect);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRenderer, sipName_DrawBitmapBullet, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextRenderer_EnumerateStandardBulletNames, "EnumerateStandardBulletNames(bulletNames) -> bool\n"
"\n"
"Enumerate the standard bullet names currently supported.");

extern "C" {static PyObject *meth_wxRichTextRenderer_EnumerateStandardBulletNames(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRenderer_EnumerateStandardBulletNames(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxArrayString* bulletNames;
        int bulletNamesState = 0;
         ::wxRichTextRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_bulletNames,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxRichTextRenderer, &sipCpp, sipType_wxArrayString,&bulletNames, &bulletNamesState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_RichTextRenderer, sipName_EnumerateStandardBulletNames);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->EnumerateStandardBulletNames(*bulletNames);
            Py_END_ALLOW_THREADS
            sipReleaseType(bulletNames,sipType_wxArrayString,bulletNamesState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRenderer, sipName_EnumerateStandardBulletNames, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxRichTextRenderer_MeasureBullet, "MeasureBullet(paragraph, dc, attr, sz) -> bool\n"
"\n"
"Measure the bullet.");

extern "C" {static PyObject *meth_wxRichTextRenderer_MeasureBullet(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxRichTextRenderer_MeasureBullet(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxRichTextParagraph* paragraph;
         ::wxDC* dc;
        const  ::wxRichTextAttr* attr;
         ::wxSize* sz;
        int szState = 0;
         ::wxRichTextRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_paragraph,
            sipName_dc,
            sipName_attr,
            sipName_sz,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J9J9J1", &sipSelf, sipType_wxRichTextRenderer, &sipCpp, sipType_wxRichTextParagraph, &paragraph, sipType_wxDC, &dc, sipType_wxRichTextAttr, &attr, sipType_wxSize, &sz, &szState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_RichTextRenderer, sipName_MeasureBullet);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->MeasureBullet(paragraph,*dc,*attr,*sz);
            Py_END_ALLOW_THREADS
            sipReleaseType(sz,sipType_wxSize,szState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RichTextRenderer, sipName_MeasureBullet, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxRichTextRenderer(void *, const sipTypeDef *);}
static void *cast_wxRichTextRenderer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxRichTextRenderer *sipCpp = reinterpret_cast< ::wxRichTextRenderer *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRichTextRenderer(void *, int);}
static void release_wxRichTextRenderer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxRichTextRenderer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxRichTextRenderer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxRichTextRenderer(sipSimpleWrapper *);}
static void dealloc_wxRichTextRenderer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxRichTextRenderer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxRichTextRenderer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxRichTextRenderer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxRichTextRenderer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxRichTextRenderer *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxRichTextRenderer();
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
        const  ::wxRichTextRenderer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxRichTextRenderer, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxRichTextRenderer(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxRichTextRenderer[] = {{42, 0, 1}};


static PyMethodDef methods_wxRichTextRenderer[] = {
    {SIP_MLNAME_CAST(sipName_DrawBitmapBullet), SIP_MLMETH_CAST(meth_wxRichTextRenderer_DrawBitmapBullet), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRenderer_DrawBitmapBullet)},
    {SIP_MLNAME_CAST(sipName_DrawStandardBullet), SIP_MLMETH_CAST(meth_wxRichTextRenderer_DrawStandardBullet), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRenderer_DrawStandardBullet)},
    {SIP_MLNAME_CAST(sipName_DrawTextBullet), SIP_MLMETH_CAST(meth_wxRichTextRenderer_DrawTextBullet), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRenderer_DrawTextBullet)},
    {SIP_MLNAME_CAST(sipName_EnumerateStandardBulletNames), SIP_MLMETH_CAST(meth_wxRichTextRenderer_EnumerateStandardBulletNames), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRenderer_EnumerateStandardBulletNames)},
    {SIP_MLNAME_CAST(sipName_MeasureBullet), SIP_MLMETH_CAST(meth_wxRichTextRenderer_MeasureBullet), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxRichTextRenderer_MeasureBullet)}
};

PyDoc_STRVAR(doc_wxRichTextRenderer, "RichTextRenderer()\n"
"\n"
"This class isolates some common drawing functionality.");


sipClassTypeDef sipTypeDef__richtext_wxRichTextRenderer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxRichTextRenderer,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_RichTextRenderer,
        {0, 0, 1},
        5, methods_wxRichTextRenderer,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxRichTextRenderer,
    -1,
    -1,
    supers_wxRichTextRenderer,
    SIP_NULLPTR,
    init_type_wxRichTextRenderer,
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
    dealloc_wxRichTextRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxRichTextRenderer,
    cast_wxRichTextRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
