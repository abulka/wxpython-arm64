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

        #include <wx/propgrid/property.h>


class sipwxPGChoicesData : public  ::wxPGChoicesData
{
public:
    sipwxPGChoicesData();
    ~sipwxPGChoicesData();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPGChoicesData(const sipwxPGChoicesData &);
    sipwxPGChoicesData &operator = (const sipwxPGChoicesData &);
};

sipwxPGChoicesData::sipwxPGChoicesData():  ::wxPGChoicesData(), sipPySelf(SIP_NULLPTR)
{
}

sipwxPGChoicesData::~sipwxPGChoicesData()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_wxPGChoicesData_CopyDataFrom, "CopyDataFrom(data)");

extern "C" {static PyObject *meth_wxPGChoicesData_CopyDataFrom(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGChoicesData_CopyDataFrom(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPGChoicesData* data;
         ::wxPGChoicesData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_data,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8", &sipSelf, sipType_wxPGChoicesData, &sipCpp, sipType_wxPGChoicesData, &data))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->CopyDataFrom(data);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGChoicesData, sipName_CopyDataFrom, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGChoicesData_Insert, "Insert(index, item) -> PGChoiceEntry");

extern "C" {static PyObject *meth_wxPGChoicesData_Insert(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGChoicesData_Insert(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int index;
        const  ::wxPGChoiceEntry* item;
         ::wxPGChoicesData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_index,
            sipName_item,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BiJ9", &sipSelf, sipType_wxPGChoicesData, &sipCpp, &index, sipType_wxPGChoiceEntry, &item))
        {
             ::wxPGChoiceEntry*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Insert(index,*item);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGChoiceEntry,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGChoicesData, sipName_Insert, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGChoicesData_Clear, "Clear()");

extern "C" {static PyObject *meth_wxPGChoicesData_Clear(PyObject *, PyObject *);}
static PyObject *meth_wxPGChoicesData_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPGChoicesData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGChoicesData, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Clear();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGChoicesData, sipName_Clear, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGChoicesData_GetCount, "GetCount() -> unsignedint");

extern "C" {static PyObject *meth_wxPGChoicesData_GetCount(PyObject *, PyObject *);}
static PyObject *meth_wxPGChoicesData_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPGChoicesData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPGChoicesData, &sipCpp))
        {
            uint sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetCount();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGChoicesData, sipName_GetCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPGChoicesData_Item, "Item(i) -> PGChoiceEntry");

extern "C" {static PyObject *meth_wxPGChoicesData_Item(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPGChoicesData_Item(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint i;
         ::wxPGChoicesData *sipCpp;

        static const char *sipKwdList[] = {
            sipName_i,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxPGChoicesData, &sipCpp, &i))
        {
             ::wxPGChoiceEntry*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->Item(i);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxPGChoiceEntry,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PGChoicesData, sipName_Item, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPGChoicesData(void *, const sipTypeDef *);}
static void *cast_wxPGChoicesData(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPGChoicesData *sipCpp = reinterpret_cast< ::wxPGChoicesData *>(sipCppV);

    if (targetType == sipType_wxRefCounter)
        return static_cast< ::wxRefCounter *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPGChoicesData(void *, int);}
static void release_wxPGChoicesData(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPGChoicesData *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPGChoicesData(sipSimpleWrapper *);}
static void dealloc_wxPGChoicesData(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPGChoicesData *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPGChoicesData(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPGChoicesData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPGChoicesData(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPGChoicesData *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPGChoicesData();
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
static sipEncodedTypeDef supers_wxPGChoicesData[] = {{24, 0, 1}};


static PyMethodDef methods_wxPGChoicesData[] = {
    {SIP_MLNAME_CAST(sipName_Clear), meth_wxPGChoicesData_Clear, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPGChoicesData_Clear)},
    {SIP_MLNAME_CAST(sipName_CopyDataFrom), SIP_MLMETH_CAST(meth_wxPGChoicesData_CopyDataFrom), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGChoicesData_CopyDataFrom)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_wxPGChoicesData_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPGChoicesData_GetCount)},
    {SIP_MLNAME_CAST(sipName_Insert), SIP_MLMETH_CAST(meth_wxPGChoicesData_Insert), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGChoicesData_Insert)},
    {SIP_MLNAME_CAST(sipName_Item), SIP_MLMETH_CAST(meth_wxPGChoicesData_Item), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPGChoicesData_Item)}
};

sipVariableDef variables_wxPGChoicesData[] = {
    {PropertyVariable, sipName_Count, &methods_wxPGChoicesData[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPGChoicesData, "PGChoicesData()");


sipClassTypeDef sipTypeDef__propgrid_wxPGChoicesData = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPGChoicesData,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PGChoicesData,
        {0, 0, 1},
        5, methods_wxPGChoicesData,
        0, SIP_NULLPTR,
        1, variables_wxPGChoicesData,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPGChoicesData,
    -1,
    -1,
    supers_wxPGChoicesData,
    SIP_NULLPTR,
    init_type_wxPGChoicesData,
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
    dealloc_wxPGChoicesData,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPGChoicesData,
    cast_wxPGChoicesData,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
