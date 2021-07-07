/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/property.h>

        #include <wx/dc.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/property.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/editors.h>
        #include <wx/gdicmn.h>


class sipwxPGCellRenderer : public  ::wxPGCellRenderer
{
public:
    sipwxPGCellRenderer();
    virtual ~sipwxPGCellRenderer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void DrawCaptionSelectionRect( ::wxDC&,int,int,int,int) const SIP_OVERRIDE;
     ::wxSize GetImageSize(const  ::wxPGProperty*,int,int) const SIP_OVERRIDE;
    bool Render( ::wxDC&,const  ::wxRect&,const  ::wxPropertyGrid*, ::wxPGProperty*,int,int,int) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPGCellRenderer(const sipwxPGCellRenderer &);
    sipwxPGCellRenderer &operator = (const sipwxPGCellRenderer &);

    char sipPyMethods[3];
};

sipwxPGCellRenderer::sipwxPGCellRenderer():  ::wxPGCellRenderer(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPGCellRenderer::~sipwxPGCellRenderer()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxPGCellRenderer::DrawCaptionSelectionRect( ::wxDC& dc,int x,int y,int w,int h) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_DrawCaptionSelectionRect);

    if (!sipMeth)
    {
         ::wxPGCellRenderer::DrawCaptionSelectionRect(dc,x,y,w,h);
        return;
    }

    extern void sipVH__propgrid_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,int,int,int,int);

    sipVH__propgrid_2(sipGILState, 0, sipPySelf, sipMeth, dc, x, y, w, h);
}

 ::wxSize sipwxPGCellRenderer::GetImageSize(const  ::wxPGProperty*property,int column,int item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_GetImageSize);

    if (!sipMeth)
        return  ::wxPGCellRenderer::GetImageSize(property,column,item);

    extern  ::wxSize sipVH__propgrid_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxPGProperty*,int,int);

    return sipVH__propgrid_1(sipGILState, 0, sipPySelf, sipMeth, property, column, item);
}

bool sipwxPGCellRenderer::Render( ::wxDC& dc,const  ::wxRect& rect,const  ::wxPropertyGrid*propertyGrid, ::wxPGProperty*property,int column,int item,int flags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_PGCellRenderer,sipName_Render);

    if (!sipMeth)
        return 0;

    extern bool sipVH__propgrid_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&,const  ::wxPropertyGrid*, ::wxPGProperty*,int,int,int);

    return sipVH__propgrid_0(sipGILState, 0, sipPySelf, sipMeth, dc, rect, propertyGrid, property, column, item, flags);
}


PyDoc_STRVAR(doc_wxPGCellRenderer_Render, "Render(dc, rect, propertyGrid, property, column, item, flags) -> bool\n"
"\n"
"Returns true if rendered something in the foreground (text or bitmap).");

extern "C" {static PyObject *meth_wxPGCellRenderer_Render(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_Render(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        const  ::wxPropertyGrid* propertyGrid;
         ::wxPGProperty* property;
        int column;
        int item;
        int flags;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_propertyGrid,
            sipName_property,
            sipName_column,
            sipName_item,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1J8J8iii", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, sipType_wxPropertyGrid, &propertyGrid, sipType_wxPGProperty, &property, &column, &item, &flags))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PGCellRenderer, sipName_Render);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Render(*dc,*rect,propertyGrid,property,column,item,flags);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_Render, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCellRenderer_GetImageSize, "GetImageSize(property, column, item) -> wx.Size\n"
"\n"
"Returns size of the image in front of the editable area.");

extern "C" {static PyObject *meth_wxPGCellRenderer_GetImageSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_GetImageSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxPGProperty* property;
        int column;
        int item;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_property,
            sipName_column,
            sipName_item,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8ii", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxPGProperty, &property, &column, &item))
        {
             ::wxSize*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxSize((sipSelfWasArg ? sipCpp-> ::wxPGCellRenderer::GetImageSize(property,column,item) : sipCpp->GetImageSize(property,column,item)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_GetImageSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCellRenderer_DrawCaptionSelectionRect, "DrawCaptionSelectionRect(dc, x, y, w, h)\n"
"\n"
"Paints property category selection rectangle.");

extern "C" {static PyObject *meth_wxPGCellRenderer_DrawCaptionSelectionRect(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_DrawCaptionSelectionRect(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxDC* dc;
        int x;
        int y;
        int w;
        int h;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_x,
            sipName_y,
            sipName_w,
            sipName_h,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9iiii", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxDC, &dc, &x, &y, &w, &h))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPGCellRenderer::DrawCaptionSelectionRect(*dc,x,y,w,h) : sipCpp->DrawCaptionSelectionRect(*dc,x,y,w,h));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_DrawCaptionSelectionRect, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCellRenderer_DrawText, "DrawText(dc, rect, imageWidth, text)\n"
"\n"
"Utility to draw vertically centered text.");

extern "C" {static PyObject *meth_wxPGCellRenderer_DrawText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_DrawText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        int imageWidth;
        const  ::wxString* text;
        int textState = 0;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_imageWidth,
            sipName_text,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1iJ1", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, &imageWidth, sipType_wxString,&text, &textState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->DrawText(*dc,*rect,imageWidth,*text);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_DrawText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCellRenderer_DrawEditorValue, "DrawEditorValue(dc, rect, xOffset, text, property, editor)\n"
"\n"
"Utility to draw editor's value, or vertically aligned text if editor\n"
"is NULL.");

extern "C" {static PyObject *meth_wxPGCellRenderer_DrawEditorValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_DrawEditorValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        int xOffset;
        const  ::wxString* text;
        int textState = 0;
         ::wxPGProperty* property;
        const  ::wxPGEditor* editor;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_xOffset,
            sipName_text,
            sipName_property,
            sipName_editor,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1iJ1J8J8", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, &xOffset, sipType_wxString,&text, &textState, sipType_wxPGProperty, &property, sipType_wxPGEditor, &editor))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->DrawEditorValue(*dc,*rect,xOffset,*text,property,editor);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);
            sipReleaseType(const_cast< ::wxString *>(text),sipType_wxString,textState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_DrawEditorValue, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCellRenderer_PreDrawCell, "PreDrawCell(dc, rect, cell, flags) -> int\n"
"\n"
"Utility to render cell bitmap and set text colour plus bg brush\n"
"colour.");

extern "C" {static PyObject *meth_wxPGCellRenderer_PreDrawCell(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_PreDrawCell(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDC* dc;
        const  ::wxRect* rect;
        int rectState = 0;
        const  ::wxPGCell* cell;
        int flags;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_rect,
            sipName_cell,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J1J9i", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxDC, &dc, sipType_wxRect, &rect, &rectState, sipType_wxPGCell, &cell, &flags))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->PreDrawCell(*dc,*rect,*cell,flags);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRect *>(rect),sipType_wxRect,rectState);

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_PreDrawCell, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGCellRenderer_PostDrawCell, "PostDrawCell(dc, propGrid, cell, flags)\n"
"\n"
"Utility to be called after drawing is done, to revert whatever changes\n"
"PreDrawCell() did.");

extern "C" {static PyObject *meth_wxPGCellRenderer_PostDrawCell(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGCellRenderer_PostDrawCell(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxDC* dc;
        const  ::wxPropertyGrid* propGrid;
        const  ::wxPGCell* cell;
        int flags;
        const  ::wxPGCellRenderer *sipCpp;

        static const char *sipKwdList[] = {
            sipName_dc,
            sipName_propGrid,
            sipName_cell,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9J8J9i", &sipSelf, sipType_wxPGCellRenderer, &sipCpp, sipType_wxDC, &dc, sipType_wxPropertyGrid, &propGrid, sipType_wxPGCell, &cell, &flags))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->PostDrawCell(*dc,propGrid,*cell,flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGCellRenderer, sipName_PostDrawCell, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPGCellRenderer(void *, const sipTypeDef *);}
static void *cast_wxPGCellRenderer(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPGCellRenderer *sipCpp = reinterpret_cast< ::wxPGCellRenderer *>(sipCppV);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPGCellRenderer(void *, int);}
static void release_wxPGCellRenderer(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPGCellRenderer *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPGCellRenderer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPGCellRenderer(sipSimpleWrapper *);}
static void dealloc_wxPGCellRenderer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPGCellRenderer *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPGCellRenderer(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPGCellRenderer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPGCellRenderer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPGCellRenderer *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGCellRenderer();
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
static sipEncodedTypeDef supers_wxPGCellRenderer[] = {{24, 0, 1}};


static PyMethodDef methods_wxPGCellRenderer[] = {
    {SIP_MLNAME_CAST(sipName_DrawCaptionSelectionRect), SIP_MLMETH_CAST(meth_wxPGCellRenderer_DrawCaptionSelectionRect), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_DrawCaptionSelectionRect)},
    {SIP_MLNAME_CAST(sipName_DrawEditorValue), SIP_MLMETH_CAST(meth_wxPGCellRenderer_DrawEditorValue), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_DrawEditorValue)},
    {SIP_MLNAME_CAST(sipName_DrawText), SIP_MLMETH_CAST(meth_wxPGCellRenderer_DrawText), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_DrawText)},
    {SIP_MLNAME_CAST(sipName_GetImageSize), SIP_MLMETH_CAST(meth_wxPGCellRenderer_GetImageSize), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_GetImageSize)},
    {SIP_MLNAME_CAST(sipName_PostDrawCell), SIP_MLMETH_CAST(meth_wxPGCellRenderer_PostDrawCell), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_PostDrawCell)},
    {SIP_MLNAME_CAST(sipName_PreDrawCell), SIP_MLMETH_CAST(meth_wxPGCellRenderer_PreDrawCell), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_PreDrawCell)},
    {SIP_MLNAME_CAST(sipName_Render), SIP_MLMETH_CAST(meth_wxPGCellRenderer_Render), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGCellRenderer_Render)}
};

static sipEnumMemberDef enummembers_wxPGCellRenderer[] = {
    {sipName_ChoicePopup, static_cast<int>( ::wxPGCellRenderer::ChoicePopup), -1},
    {sipName_Control, static_cast<int>( ::wxPGCellRenderer::Control), -1},
    {sipName_Disabled, static_cast<int>( ::wxPGCellRenderer::Disabled), -1},
    {sipName_DontUseCellBgCol, static_cast<int>( ::wxPGCellRenderer::DontUseCellBgCol), -1},
    {sipName_DontUseCellColours, static_cast<int>( ::wxPGCellRenderer::DontUseCellColours), -1},
    {sipName_DontUseCellFgCol, static_cast<int>( ::wxPGCellRenderer::DontUseCellFgCol), -1},
    {sipName_Selected, static_cast<int>( ::wxPGCellRenderer::Selected), -1},
};

PyDoc_STRVAR(doc_wxPGCellRenderer, "PGCellRenderer()\n"
"\n"
"Base class for wxPropertyGrid cell renderers.");


sipClassTypeDef sipTypeDef__propgrid_wxPGCellRenderer = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxPGCellRenderer,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PGCellRenderer,
        {0, 0, 1},
        7, methods_wxPGCellRenderer,
        7, enummembers_wxPGCellRenderer,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPGCellRenderer,
    -1,
    -1,
    supers_wxPGCellRenderer,
    SIP_NULLPTR,
    init_type_wxPGCellRenderer,
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
    dealloc_wxPGCellRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPGCellRenderer,
    cast_wxPGCellRenderer,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
