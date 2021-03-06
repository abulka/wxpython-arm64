/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/preferences.h>

        #include <wx/window.h>
        #include <wx/preferences.h>


class sipwxPreferencesEditor : public  ::wxPreferencesEditor
{
public:
    sipwxPreferencesEditor(const  ::wxString&);
    virtual ~sipwxPreferencesEditor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Show( ::wxWindow*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPreferencesEditor(const sipwxPreferencesEditor &);
    sipwxPreferencesEditor &operator = (const sipwxPreferencesEditor &);

    char sipPyMethods[1];
};

sipwxPreferencesEditor::sipwxPreferencesEditor(const  ::wxString& title):  ::wxPreferencesEditor(title), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPreferencesEditor::~sipwxPreferencesEditor()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxPreferencesEditor::Show( ::wxWindow*parent)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_Show);

    if (!sipMeth)
    {
         ::wxPreferencesEditor::Show(parent);
        return;
    }

    extern void sipVH__core_133(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxWindow*);

    sipVH__core_133(sipGILState, 0, sipPySelf, sipMeth, parent);
}


PyDoc_STRVAR(doc_wxPreferencesEditor_AddPage, "AddPage(page)\n"
"\n"
"Add a new page to the editor.");

extern "C" {static PyObject *meth_wxPreferencesEditor_AddPage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesEditor_AddPage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPreferencesPage* page;
         ::wxPreferencesEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_page,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ:", &sipSelf, sipType_wxPreferencesEditor, &sipCpp, sipType_wxPreferencesPage, &page))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->AddPage(page);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PreferencesEditor, sipName_AddPage, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesEditor_Show, "Show(parent)\n"
"\n"
"Show the preferences dialog or bring it to the top if it's already\n"
"shown.");

extern "C" {static PyObject *meth_wxPreferencesEditor_Show(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesEditor_Show(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxWindow* parent;
         ::wxPreferencesEditor *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxPreferencesEditor, &sipCpp, sipType_wxWindow, &parent))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxPreferencesEditor::Show(parent) : sipCpp->Show(parent));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PreferencesEditor, sipName_Show, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesEditor_Dismiss, "Dismiss()\n"
"\n"
"Hide the currently shown dialog, if any.");

extern "C" {static PyObject *meth_wxPreferencesEditor_Dismiss(PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesEditor_Dismiss(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPreferencesEditor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPreferencesEditor, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Dismiss();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PreferencesEditor, sipName_Dismiss, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesEditor_ShouldApplyChangesImmediately, "ShouldApplyChangesImmediately() -> bool\n"
"\n"
"Returns whether changes to values in preferences pages should be\n"
"applied immediately or only when the user clicks the OK button.");

extern "C" {static PyObject *meth_wxPreferencesEditor_ShouldApplyChangesImmediately(PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesEditor_ShouldApplyChangesImmediately(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxPreferencesEditor::ShouldApplyChangesImmediately();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PreferencesEditor, sipName_ShouldApplyChangesImmediately, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPreferencesEditor_ShownModally, "ShownModally() -> bool\n"
"\n"
"Returns whether the preferences dialog is shown modally.");

extern "C" {static PyObject *meth_wxPreferencesEditor_ShownModally(PyObject *, PyObject *);}
static PyObject *meth_wxPreferencesEditor_ShownModally(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxPreferencesEditor::ShownModally();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PreferencesEditor, sipName_ShownModally, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPreferencesEditor(void *, int);}
static void release_wxPreferencesEditor(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPreferencesEditor *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPreferencesEditor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPreferencesEditor(sipSimpleWrapper *);}
static void dealloc_wxPreferencesEditor(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPreferencesEditor *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPreferencesEditor(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPreferencesEditor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPreferencesEditor(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPreferencesEditor *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& titledef = wxString();
        const  ::wxString* title = &titledef;
        int titleState = 0;

        static const char *sipKwdList[] = {
            sipName_title,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_wxString,&title, &titleState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPreferencesEditor(*title);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(title),sipType_wxString,titleState);

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


static PyMethodDef methods_wxPreferencesEditor[] = {
    {SIP_MLNAME_CAST(sipName_AddPage), SIP_MLMETH_CAST(meth_wxPreferencesEditor_AddPage), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPreferencesEditor_AddPage)},
    {SIP_MLNAME_CAST(sipName_Dismiss), meth_wxPreferencesEditor_Dismiss, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPreferencesEditor_Dismiss)},
    {SIP_MLNAME_CAST(sipName_ShouldApplyChangesImmediately), meth_wxPreferencesEditor_ShouldApplyChangesImmediately, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPreferencesEditor_ShouldApplyChangesImmediately)},
    {SIP_MLNAME_CAST(sipName_Show), SIP_MLMETH_CAST(meth_wxPreferencesEditor_Show), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPreferencesEditor_Show)},
    {SIP_MLNAME_CAST(sipName_ShownModally), meth_wxPreferencesEditor_ShownModally, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPreferencesEditor_ShownModally)}
};

PyDoc_STRVAR(doc_wxPreferencesEditor, "PreferencesEditor(title=\"\")\n"
"\n"
"Manage preferences dialog.");


sipClassTypeDef sipTypeDef__core_wxPreferencesEditor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPreferencesEditor,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PreferencesEditor,
        {0, 0, 1},
        5, methods_wxPreferencesEditor,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPreferencesEditor,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxPreferencesEditor,
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
    dealloc_wxPreferencesEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPreferencesEditor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
