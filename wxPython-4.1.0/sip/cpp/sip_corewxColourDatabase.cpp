/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/gdicmn.h>

        #include <wx/colour.h>


PyDoc_STRVAR(doc_wxColourDatabase_AddColour, "AddColour(colourName, colour)\n"
"\n"
"Adds a colour to the database.");

extern "C" {static PyObject *meth_wxColourDatabase_AddColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxColourDatabase_AddColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* colourName;
        int colourNameState = 0;
        const  ::wxColour* colour;
        int colourState = 0;
         ::wxColourDatabase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colourName,
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1J1", &sipSelf, sipType_wxColourDatabase, &sipCpp, sipType_wxString,&colourName, &colourNameState, sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->AddColour(*colourName,*colour);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(colourName),sipType_wxString,colourNameState);
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColourDatabase, sipName_AddColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxColourDatabase_Find, "Find(colourName) -> Colour\n"
"\n"
"Finds a colour given the name.");

extern "C" {static PyObject *meth_wxColourDatabase_Find(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxColourDatabase_Find(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* colourName;
        int colourNameState = 0;
        const  ::wxColourDatabase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colourName,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxColourDatabase, &sipCpp, sipType_wxString,&colourName, &colourNameState))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour(sipCpp->Find(*colourName));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(colourName),sipType_wxString,colourNameState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColourDatabase, sipName_Find, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxColourDatabase_FindName, "FindName(colour) -> String\n"
"\n"
"Finds a colour name given the colour.");

extern "C" {static PyObject *meth_wxColourDatabase_FindName(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxColourDatabase_FindName(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxColour* colour;
        int colourState = 0;
        const  ::wxColourDatabase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxColourDatabase, &sipCpp, sipType_wxColour, &colour, &colourState))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->FindName(*colour));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColourDatabase, sipName_FindName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxColourDatabase(void *, int);}
static void release_wxColourDatabase(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxColourDatabase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxColourDatabase(void *, SIP_SSIZE_T, void *);}
static void assign_wxColourDatabase(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxColourDatabase *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxColourDatabase *>(sipSrc);
}


extern "C" {static void *array_wxColourDatabase(SIP_SSIZE_T);}
static void *array_wxColourDatabase(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxColourDatabase[sipNrElem];
}


extern "C" {static void *copy_wxColourDatabase(const void *, SIP_SSIZE_T);}
static void *copy_wxColourDatabase(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxColourDatabase(reinterpret_cast<const  ::wxColourDatabase *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxColourDatabase(sipSimpleWrapper *);}
static void dealloc_wxColourDatabase(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxColourDatabase(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxColourDatabase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxColourDatabase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxColourDatabase *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxColourDatabase();
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
        const  ::wxColourDatabase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxColourDatabase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxColourDatabase(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_wxColourDatabase[] = {
    {SIP_MLNAME_CAST(sipName_AddColour), SIP_MLMETH_CAST(meth_wxColourDatabase_AddColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxColourDatabase_AddColour)},
    {SIP_MLNAME_CAST(sipName_Find), SIP_MLMETH_CAST(meth_wxColourDatabase_Find), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxColourDatabase_Find)},
    {SIP_MLNAME_CAST(sipName_FindName), SIP_MLMETH_CAST(meth_wxColourDatabase_FindName), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxColourDatabase_FindName)}
};

PyDoc_STRVAR(doc_wxColourDatabase, "ColourDatabase()\n"
"\n"
"wxWidgets maintains a database of standard RGB colours for a\n"
"predefined set of named colours.");


sipClassTypeDef sipTypeDef__core_wxColourDatabase = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxColourDatabase,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ColourDatabase,
        {0, 0, 1},
        3, methods_wxColourDatabase,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxColourDatabase,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_wxColourDatabase,
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
    dealloc_wxColourDatabase,
    assign_wxColourDatabase,
    array_wxColourDatabase,
    copy_wxColourDatabase,
    release_wxColourDatabase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
