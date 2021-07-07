/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/advprops.h>

        #include <wx/colour.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxColourPropertyValue : public  ::wxColourPropertyValue
{
public:
    sipwxColourPropertyValue();
    sipwxColourPropertyValue(const  ::wxColourPropertyValue&);
    sipwxColourPropertyValue(const  ::wxColour&);
    sipwxColourPropertyValue( ::wxUint32);
    sipwxColourPropertyValue( ::wxUint32,const  ::wxColour&);
    ~sipwxColourPropertyValue();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxColourPropertyValue(const sipwxColourPropertyValue &);
    sipwxColourPropertyValue &operator = (const sipwxColourPropertyValue &);
};

sipwxColourPropertyValue::sipwxColourPropertyValue():  ::wxColourPropertyValue(), sipPySelf(SIP_NULLPTR)
{
}

sipwxColourPropertyValue::sipwxColourPropertyValue(const  ::wxColourPropertyValue& v):  ::wxColourPropertyValue(v), sipPySelf(SIP_NULLPTR)
{
}

sipwxColourPropertyValue::sipwxColourPropertyValue(const  ::wxColour& colour):  ::wxColourPropertyValue(colour), sipPySelf(SIP_NULLPTR)
{
}

sipwxColourPropertyValue::sipwxColourPropertyValue( ::wxUint32 type):  ::wxColourPropertyValue(type), sipPySelf(SIP_NULLPTR)
{
}

sipwxColourPropertyValue::sipwxColourPropertyValue( ::wxUint32 type,const  ::wxColour& colour):  ::wxColourPropertyValue(type,colour), sipPySelf(SIP_NULLPTR)
{
}

sipwxColourPropertyValue::~sipwxColourPropertyValue()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_wxColourPropertyValue_Init, "Init(type, colour)");

extern "C" {static PyObject *meth_wxColourPropertyValue_Init(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxColourPropertyValue_Init(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxUint32 type;
        const  ::wxColour* colour;
        int colourState = 0;
         ::wxColourPropertyValue *sipCpp;

        static const char *sipKwdList[] = {
            sipName_type,
            sipName_colour,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BuJ1", &sipSelf, sipType_wxColourPropertyValue, &sipCpp, &type, sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Init(type,*colour);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColourPropertyValue, sipName_Init, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxColourPropertyValue(void *, const sipTypeDef *);}
static void *cast_wxColourPropertyValue(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxColourPropertyValue *sipCpp = reinterpret_cast< ::wxColourPropertyValue *>(sipCppV);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxColourPropertyValue(void *, int);}
static void release_wxColourPropertyValue(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxColourPropertyValue *>(sipCppV);
    else
        delete reinterpret_cast< ::wxColourPropertyValue *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxColourPropertyValue(void *, SIP_SSIZE_T, void *);}
static void assign_wxColourPropertyValue(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxColourPropertyValue *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxColourPropertyValue *>(sipSrc);
}


extern "C" {static void *array_wxColourPropertyValue(SIP_SSIZE_T);}
static void *array_wxColourPropertyValue(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxColourPropertyValue[sipNrElem];
}


extern "C" {static void *copy_wxColourPropertyValue(const void *, SIP_SSIZE_T);}
static void *copy_wxColourPropertyValue(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxColourPropertyValue(reinterpret_cast<const  ::wxColourPropertyValue *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxColourPropertyValue(sipSimpleWrapper *);}
static void dealloc_wxColourPropertyValue(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxColourPropertyValue *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxColourPropertyValue(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxColourPropertyValue(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxColourPropertyValue(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxColourPropertyValue *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourPropertyValue();
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
        const  ::wxColourPropertyValue* v;

        static const char *sipKwdList[] = {
            sipName_v,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxColourPropertyValue, &v))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourPropertyValue(*v);
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
        const  ::wxColour* colour;
        int colourState = 0;

        static const char *sipKwdList[] = {
            sipName_colour,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourPropertyValue(*colour);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

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
         ::wxUint32 type;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "u", &type))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourPropertyValue(type);
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
         ::wxUint32 type;
        const  ::wxColour* colour;
        int colourState = 0;

        static const char *sipKwdList[] = {
            sipName_type,
            sipName_colour,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "uJ1", &type, sipType_wxColour, &colour, &colourState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourPropertyValue(type,*colour);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxColour *>(colour),sipType_wxColour,colourState);

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
static sipEncodedTypeDef supers_wxColourPropertyValue[] = {{20, 0, 1}};


static PyMethodDef methods_wxColourPropertyValue[] = {
    {SIP_MLNAME_CAST(sipName_Init), SIP_MLMETH_CAST(meth_wxColourPropertyValue_Init), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxColourPropertyValue_Init)}
};


extern "C" {static PyObject *varget_wxColourPropertyValue_m_colour(void *, PyObject *, PyObject *);}
static PyObject *varget_wxColourPropertyValue_m_colour(void *sipSelf, PyObject *, PyObject *)
{
     ::wxColour*sipVal;
     ::wxColourPropertyValue *sipCpp = reinterpret_cast< ::wxColourPropertyValue *>(sipSelf);

    sipVal = &sipCpp->m_colour;

    return sipConvertFromType(sipVal, sipType_wxColour, SIP_NULLPTR);
}


extern "C" {static int varset_wxColourPropertyValue_m_colour(void *, PyObject *, PyObject *);}
static int varset_wxColourPropertyValue_m_colour(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxColour*sipVal;
     ::wxColourPropertyValue *sipCpp = reinterpret_cast< ::wxColourPropertyValue *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::wxColour *>(sipForceConvertToType(sipPy, sipType_wxColour, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->m_colour = *sipVal;

    sipReleaseType(sipVal, sipType_wxColour, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_wxColourPropertyValue_m_type(void *, PyObject *, PyObject *);}
static PyObject *varget_wxColourPropertyValue_m_type(void *sipSelf, PyObject *, PyObject *)
{
     ::wxUint32 sipVal;
     ::wxColourPropertyValue *sipCpp = reinterpret_cast< ::wxColourPropertyValue *>(sipSelf);

    sipVal = sipCpp->m_type;

    return PyLong_FromUnsignedLong(sipVal);
}


extern "C" {static int varset_wxColourPropertyValue_m_type(void *, PyObject *, PyObject *);}
static int varset_wxColourPropertyValue_m_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::wxUint32 sipVal;
     ::wxColourPropertyValue *sipCpp = reinterpret_cast< ::wxColourPropertyValue *>(sipSelf);

    sipVal = sipLong_AsUnsignedInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->m_type = sipVal;

    return 0;
}

sipVariableDef variables_wxColourPropertyValue[] = {
    {InstanceVariable, sipName_m_colour, (PyMethodDef *)varget_wxColourPropertyValue_m_colour, (PyMethodDef *)varset_wxColourPropertyValue_m_colour, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_m_type, (PyMethodDef *)varget_wxColourPropertyValue_m_type, (PyMethodDef *)varset_wxColourPropertyValue_m_type, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxColourPropertyValue, "ColourPropertyValue()\n"
"ColourPropertyValue(v)\n"
"ColourPropertyValue(colour)\n"
"ColourPropertyValue(type)\n"
"ColourPropertyValue(type, colour)\n"
"\n"
"Because text, background and other colours tend to differ between\n"
"platforms, wxSystemColourProperty must be able to select between\n"
"system colour and, when necessary, to pick a custom one.");


sipClassTypeDef sipTypeDef__propgrid_wxColourPropertyValue = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxColourPropertyValue,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ColourPropertyValue,
        {0, 0, 1},
        1, methods_wxColourPropertyValue,
        0, SIP_NULLPTR,
        2, variables_wxColourPropertyValue,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxColourPropertyValue,
    -1,
    -1,
    supers_wxColourPropertyValue,
    SIP_NULLPTR,
    init_type_wxColourPropertyValue,
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
    dealloc_wxColourPropertyValue,
    assign_wxColourPropertyValue,
    array_wxColourPropertyValue,
    copy_wxColourPropertyValue,
    release_wxColourPropertyValue,
    cast_wxColourPropertyValue,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
