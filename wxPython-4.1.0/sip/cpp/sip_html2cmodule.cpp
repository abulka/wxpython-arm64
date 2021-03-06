/*
 * Module code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_html2.h"

        #include <wx/object.h>
        #include <wx/filesys.h>
        #include <wx/event.h>
        #include <wx/gdicmn.h>
        #include <wx/validate.h>
        #include <wx/window.h>
        #include <wx/gdicmn.h>
        #include <wx/webview.h>

/* Define the strings used by this module. */
const char sipStrings__html2[] = {
    'G', 'e', 't', 'M', 'a', 'i', 'n', 'W', 'i', 'n', 'd', 'o', 'w', 'O', 'f', 'C', 'o', 'm', 'p', 'o', 's', 'i', 't', 'e', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'N', 'a', 'v', 'i', 'g', 'a', 't', 'i', 'o', 'n', 'A', 'c', 't', 'i', 'o', 'n', 'F', 'l', 'a', 'g', 's', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'U', 'S', 'E', 'R', '_', 'C', 'A', 'N', 'C', 'E', 'L', 'L', 'E', 'D', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'F', 'I', 'N', 'D', '_', 'H', 'I', 'G', 'H', 'L', 'I', 'G', 'H', 'T', '_', 'R', 'E', 'S', 'U', 'L', 'T', 0,
    'w', 'x', 'E', 'V', 'T', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'T', 'I', 'T', 'L', 'E', '_', 'C', 'H', 'A', 'N', 'G', 'E', 'D', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'C', 'E', 'R', 'T', 'I', 'F', 'I', 'C', 'A', 'T', 'E', 0,
    'M', 'S', 'W', 'S', 'e', 't', 'M', 'o', 'd', 'e', 'r', 'n', 'E', 'm', 'u', 'l', 'a', 't', 'i', 'o', 'n', 'L', 'e', 'v', 'e', 'l', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'I', 'E', '_', 'E', 'm', 'u', 'l', 'a', 't', 'i', 'o', 'n', 'L', 'e', 'v', 'e', 'l', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'C', 'O', 'N', 'N', 'E', 'C', 'T', 'I', 'O', 'N', 0,
    'G', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'o', 'r', 'd', 'e', 'r', 'F', 'o', 'r', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'I', 's', 'A', 'c', 'c', 'e', 's', 's', 'T', 'o', 'D', 'e', 'v', 'T', 'o', 'o', 'l', 's', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'N', 'O', 'T', '_', 'F', 'O', 'U', 'N', 'D', 0,
    'G', 'e', 't', 'C', 'l', 'a', 's', 's', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0,
    'w', 'x', 'E', 'V', 'T', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', 'I', 'G', 'A', 'T', 'I', 'N', 'G', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '1', '1', '_', 'F', 'O', 'R', 'C', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '1', '0', '_', 'F', 'O', 'R', 'C', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'A', 'C', 'T', 'I', 'O', 'N', '_', 'O', 'T', 'H', 'E', 'R', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'F', 'I', 'N', 'D', '_', 'E', 'N', 'T', 'I', 'R', 'E', '_', 'W', 'O', 'R', 'D', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'S', 'E', 'C', 'U', 'R', 'I', 'T', 'Y', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'N', 'a', 'v', 'i', 'g', 'a', 't', 'i', 'o', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'T', 'Y', 'P', 'E', '_', 'L', 'A', 'Y', 'O', 'U', 'T', 0,
    'H', 'a', 's', 'T', 'r', 'a', 'n', 's', 'p', 'a', 'r', 'e', 'n', 't', 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u', 'n', 'd', 0,
    'A', 'c', 'c', 'e', 'p', 't', 's', 'F', 'o', 'c', 'u', 's', 'F', 'r', 'o', 'm', 'K', 'e', 'y', 'b', 'o', 'a', 'r', 'd', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'A', 'r', 'c', 'h', 'i', 'v', 'e', 'H', 'a', 'n', 'd', 'l', 'e', 'r', 0,
    'w', 'x', 'E', 'V', 'T', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'E', 'W', 'W', 'I', 'N', 'D', 'O', 'W', 0,
    'w', 'x', 'E', 'V', 'T', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', 'I', 'G', 'A', 'T', 'E', 'D', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '9', '_', 'F', 'O', 'R', 'C', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '8', '_', 'F', 'O', 'R', 'C', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'A', 'C', 'T', 'I', 'O', 'N', '_', 'U', 'S', 'E', 'R', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'A', 'C', 'T', 'I', 'O', 'N', '_', 'N', 'O', 'N', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'F', 'I', 'N', 'D', '_', 'M', 'A', 'T', 'C', 'H', '_', 'C', 'A', 'S', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'R', 'E', 'L', 'O', 'A', 'D', '_', 'N', 'O', '_', 'C', 'A', 'C', 'H', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'R', 'E', 'Q', 'U', 'E', 'S', 'T', 0,
    'A', 'c', 'c', 'e', 'p', 't', 's', 'F', 'o', 'c', 'u', 's', 'R', 'e', 'c', 'u', 'r', 's', 'i', 'v', 'e', 'l', 'y', 0,
    'E', 'n', 'a', 'b', 'l', 'e', 'A', 'c', 'c', 'e', 's', 's', 'T', 'o', 'D', 'e', 'v', 'T', 'o', 'o', 'l', 's', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'F', 'I', 'N', 'D', '_', 'B', 'A', 'C', 'K', 'W', 'A', 'R', 'D', 'S', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'R', 'E', 'L', 'O', 'A', 'D', '_', 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'T', 'Y', 'P', 'E', '_', 'T', 'E', 'X', 'T', 0,
    'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'D', 'a', 't', 'a', 'F', 'r', 'o', 'm', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'O', 'T', 'H', 'E', 'R', 0,
    'W', 'e', 'b', 'V', 'i', 'e', 'w', 'B', 'a', 'c', 'k', 'e', 'n', 'd', 'D', 'e', 'f', 'a', 'u', 'l', 't', 0,
    'M', 'S', 'W', 'S', 'e', 't', 'E', 'm', 'u', 'l', 'a', 't', 'i', 'o', 'n', 'L', 'e', 'v', 'e', 'l', 0,
    'I', 's', 'C', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'H', 'i', 's', 't', 'o', 'r', 'y', 'I', 't', 'e', 'm', 0,
    'w', 'x', 'E', 'V', 'T', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'L', 'O', 'A', 'D', 'E', 'D', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'F', 'I', 'N', 'D', '_', 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'R', 'e', 'l', 'o', 'a', 'd', 'F', 'l', 'a', 'g', 's', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'N', 'A', 'V', '_', 'E', 'R', 'R', '_', 'A', 'U', 'T', 'H', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'L', 'A', 'R', 'G', 'E', 'S', 'T', 0,
    'W', 'e', 'b', 'V', 'i', 'e', 'w', 'B', 'a', 'c', 'k', 'e', 'n', 'd', 'W', 'e', 'b', 'K', 'i', 't', 0,
    'W', 'e', 'b', 'V', 'i', 'e', 'w', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'U', 'R', 'L', 'S', 't', 'r', 0,
    'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'D', 'a', 't', 'a', 'T', 'o', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'S', 'h', 'o', 'u', 'l', 'd', 'I', 'n', 'h', 'e', 'r', 'i', 't', 'C', 'o', 'l', 'o', 'u', 'r', 's', 0,
    'I', 'n', 'f', 'o', 'r', 'm', 'F', 'i', 'r', 's', 't', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'G', 'e', 't', 'N', 'a', 'v', 'i', 'g', 'a', 't', 'i', 'o', 'n', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'w', 'x', 'E', 'V', 'T', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'E', 'R', 'R', 'O', 'R', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'M', 'E', 'D', 'I', 'U', 'M', 0,
    'D', 'o', 'G', 'e', 't', 'B', 'e', 's', 't', 'C', 'l', 'i', 'e', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'G', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 'A', 'r', 'e', 'a', 'O', 'r', 'i', 'g', 'i', 'n', 0,
    'I', 's', 'B', 'a', 'c', 'k', 'e', 'n', 'd', 'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 0,
    'G', 'e', 't', 'B', 'a', 'c', 'k', 'w', 'a', 'r', 'd', 'H', 'i', 's', 't', 'o', 'r', 'y', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'F', 'S', 'H', 'a', 'n', 'd', 'l', 'e', 'r', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '1', '1', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '1', '0', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'F', 'i', 'n', 'd', 'F', 'l', 'a', 'g', 's', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'L', 'A', 'R', 'G', 'E', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'S', 'M', 'A', 'L', 'L', 0,
    'D', 'o', 'S', 'e', 't', 'W', 'i', 'n', 'd', 'o', 'w', 'V', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'G', 'e', 't', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'S', 'o', 'u', 'r', 'c', 'e', 0,
    'G', 'e', 't', 'F', 'o', 'r', 'w', 'a', 'r', 'd', 'H', 'i', 's', 't', 'o', 'r', 'y', 0,
    'E', 'n', 'a', 'b', 'l', 'e', 'C', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '9', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '8', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', 'I', 'E', '_', 'E', 'M', 'U', '_', 'I', 'E', '7', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'F', 'I', 'N', 'D', '_', 'W', 'R', 'A', 'P', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'Z', 'o', 'o', 'm', 'T', 'y', 'p', 'e', 0,
    'W', 'E', 'B', 'V', 'I', 'E', 'W', '_', 'Z', 'O', 'O', 'M', '_', 'T', 'I', 'N', 'Y', 0,
    'I', 'n', 'h', 'e', 'r', 'i', 't', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0,
    'a', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 'O', 't', 'h', 'e', 'r', 'D', 'i', 'r', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'F', 'a', 'c', 't', 'o', 'r', 'y', 0,
    'G', 'e', 't', 'N', 'a', 't', 'i', 'v', 'e', 'B', 'a', 'c', 'k', 'e', 'n', 'd', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'H', 'a', 'n', 'd', 'l', 'e', 'r', 0,
    'W', 'e', 'b', 'V', 'i', 'e', 'w', 'B', 'a', 'c', 'k', 'e', 'n', 'd', 'I', 'E', 0,
    'G', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'o', 'r', 'd', 'e', 'r', 0,
    'G', 'e', 't', 'E', 'v', 'e', 'n', 't', 'C', 'a', 't', 'e', 'g', 'o', 'r', 'y', 0,
    'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'F', 'a', 'c', 't', 'o', 'r', 'y', 0,
    'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'H', 'a', 'n', 'd', 'l', 'e', 'r', 0,
    'G', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'T', 'i', 't', 'l', 'e', 0,
    'G', 'e', 't', 'S', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'T', 'e', 'x', 't', 0,
    'D', 'e', 'l', 'e', 't', 'e', 'S', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'D', 'o', 'G', 'e', 't', 'B', 'o', 'r', 'd', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'S', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'G', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'C', 'a', 'n', 'S', 'e', 't', 'Z', 'o', 'o', 'm', 'T', 'y', 'p', 'e', 0,
    'C', 'l', 'e', 'a', 'r', 'S', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'W', 'e', 'b', 'V', 'i', 'e', 'w', 'N', 'a', 'm', 'e', 'S', 't', 'r', 0,
    'D', 'o', 'S', 'e', 't', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 's', 0,
    'O', 'n', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'I', 'd', 'l', 'e', 0,
    'G', 'e', 't', 'P', 'a', 'g', 'e', 'S', 'o', 'u', 'r', 'c', 'e', 0,
    'G', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'U', 'R', 'L', 0,
    'E', 'n', 'a', 'b', 'l', 'e', 'H', 'i', 's', 't', 'o', 'r', 'y', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 'Z', 'o', 'o', 'm', 0,
    'D', 'o', 'G', 'e', 't', 'B', 'e', 's', 't', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'G', 'e', 't', 'P', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'H', 'a', 's', 'S', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'C', 'l', 'e', 'a', 'r', 'H', 'i', 's', 't', 'o', 'r', 'y', 0,
    'C', 'a', 'n', 'G', 'o', 'F', 'o', 'r', 'w', 'a', 'r', 'd', 0,
    'D', 'o', 'M', 'o', 'v', 'e', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'S', 'e', 't', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 0,
    'G', 'e', 't', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 0,
    'A', 'c', 'c', 'e', 'p', 't', 's', 'F', 'o', 'c', 'u', 's', 0,
    'P', 'r', 'o', 'c', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'U', 'S', 'E', '_', 'W', 'E', 'B', 'V', 'I', 'E', 'W', 0,
    'm', 'o', 'd', 'e', 'r', 'n', 'L', 'e', 'v', 'e', 'l', 0,
    'G', 'e', 't', 'Z', 'o', 'o', 'm', 'T', 'y', 'p', 'e', 0,
    'S', 'e', 't', 'E', 'd', 'i', 't', 'a', 'b', 'l', 'e', 0,
    'G', 'e', 't', 'P', 'a', 'g', 'e', 'T', 'e', 'x', 't', 0,
    'S', 'e', 't', 'C', 'a', 'n', 'F', 'o', 'c', 'u', 's', 0,
    'R', 'e', 'm', 'o', 'v', 'e', 'C', 'h', 'i', 'l', 'd', 0,
    'j', 'a', 'v', 'a', 's', 'c', 'r', 'i', 'p', 't', 0,
    'w', 'i', 'd', 't', 'h', 'T', 'i', 't', 'l', 'e', 0,
    'I', 's', 'E', 'd', 'i', 't', 'a', 'b', 'l', 'e', 0,
    'I', 'n', 'i', 't', 'D', 'i', 'a', 'l', 'o', 'g', 0,
    'G', 'e', 't', 'T', 'a', 'r', 'g', 'e', 't', 0,
    'R', 'u', 'n', 'S', 'c', 'r', 'i', 'p', 't', 0,
    'C', 'a', 'n', 'G', 'o', 'B', 'a', 'c', 'k', 0,
    'w', 'x', 'W', 'e', 'b', 'V', 'i', 'e', 'w', 0,
    'S', 'e', 'l', 'e', 'c', 't', 'A', 'l', 'l', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'M', 'a', 'x', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'M', 'i', 'n', 0,
    'D', 'o', 'S', 'e', 't', 'S', 'i', 'z', 'e', 0,
    'D', 'o', 'G', 'e', 't', 'S', 'i', 'z', 'e', 0,
    'v', 'a', 'l', 'i', 'd', 'a', 't', 'o', 'r', 0,
    's', 'i', 'z', 'e', 'F', 'l', 'a', 'g', 's', 0,
    'T', 'r', 'y', 'B', 'e', 'f', 'o', 'r', 'e', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'w', 'x', '.', '_', 'h', 't', 'm', 'l', '2', 0,
    'z', 'o', 'o', 'm', 'T', 'y', 'p', 'e', 0,
    'C', 'a', 'n', 'P', 'a', 's', 't', 'e', 0,
    'G', 'e', 't', 'T', 'i', 't', 'l', 'e', 0,
    'D', 'o', 'F', 'r', 'e', 'e', 'z', 'e', 0,
    'D', 'o', 'E', 'n', 'a', 'b', 'l', 'e', 0,
    'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 0,
    'c', 'a', 'n', 'F', 'o', 'c', 'u', 's', 0,
    'A', 'd', 'd', 'C', 'h', 'i', 'l', 'd', 0,
    'T', 'r', 'y', 'A', 'f', 't', 'e', 'r', 0,
    'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 0,
    'f', 'a', 'c', 't', 'o', 'r', 'y', 0,
    'b', 'a', 'c', 'k', 'e', 'n', 'd', 0,
    'S', 'e', 't', 'P', 'a', 'g', 'e', 0,
    'b', 'a', 's', 'e', 'U', 'r', 'l', 0,
    'L', 'o', 'a', 'd', 'U', 'R', 'L', 0,
    'G', 'e', 't', 'Z', 'o', 'o', 'm', 0,
    'S', 'e', 't', 'Z', 'o', 'o', 'm', 0,
    'G', 'e', 't', 'F', 'i', 'l', 'e', 0,
    'C', 'a', 'n', 'U', 'n', 'd', 'o', 0,
    'C', 'a', 'n', 'R', 'e', 'd', 'o', 0,
    'C', 'a', 'n', 'C', 'o', 'p', 'y', 0,
    'u', 'n', 'i', 't', 'M', 'a', 'x', 0,
    'u', 'n', 'i', 't', 'M', 'i', 'n', 0,
    'v', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'h', 'a', 'n', 'd', 'l', 'e', 'r', 0,
    'G', 'e', 't', 'N', 'a', 'm', 'e', 0,
    'D', 'e', 's', 't', 'r', 'o', 'y', 0,
    'o', 'u', 't', 'p', 'u', 't', 0,
    'R', 'e', 'l', 'o', 'a', 'd', 0,
    's', 'c', 'h', 'e', 'm', 'e', 0,
    'G', 'e', 't', 'U', 'r', 'l', 0,
    'c', 'l', 'i', 'e', 'n', 't', 0,
    'I', 's', 'B', 'u', 's', 'y', 0,
    'd', 'i', 'a', 'l', 'o', 'g', 0,
    'C', 'a', 'n', 'C', 'u', 't', 0,
    'r', 'o', 'w', 'M', 'a', 'x', 0,
    'r', 'o', 'w', 'M', 'i', 'n', 0,
    'D', 'o', 'T', 'h', 'a', 'w', 0,
    't', 'a', 'r', 'g', 'e', 't', 0,
    'G', 'e', 't', 'U', 'R', 'L', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 0,
    'C', 'r', 'e', 'a', 't', 'e', 0,
    's', 't', 'r', 'e', 'a', 'm', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'h', 'e', 'i', 'g', 'h', 't', 0,
    'P', 'r', 'i', 'n', 't', 0,
    'p', 'o', 'p', 'u', 'p', 0,
    's', 'i', 'z', 'e', 'r', 0,
    'C', 'l', 'o', 'n', 'e', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'v', 'e', 'l', 0,
    'c', 'h', 'i', 'l', 'd', 0,
    't', 'i', 't', 'l', 'e', 0,
    's', 't', 'y', 'l', 'e', 0,
    'w', 'i', 'd', 't', 'h', 0,
    'c', 'o', 'u', 'n', 't', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'h', 'r', 'e', 'f', 0,
    'z', 'o', 'o', 'm', 0,
    'u', 'n', 'i', 't', 0,
    'i', 'n', 'c', 'H', 0,
    'i', 'n', 'c', 'W', 0,
    'm', 'a', 'x', 'H', 0,
    'm', 'a', 'x', 'W', 0,
    'm', 'i', 'n', 'H', 0,
    'm', 'i', 'n', 'W', 0,
    'S', 't', 'o', 'p', 0,
    'h', 't', 'm', 'l', 0,
    's', 'h', 'o', 'w', 0,
    't', 'e', 'x', 't', 0,
    't', 'y', 'p', 'e', 0,
    'F', 'i', 'n', 'd', 0,
    'r', 'e', 'c', 't', 0,
    's', 'i', 'z', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    't', 'i', 'm', 'e', 0,
    'i', 't', 'e', 'm', 0,
    'i', 'n', 'f', 'o', 0,
    'u', 'r', 'i', 0,
    'i', 'd', 'x', 0,
    'm', 's', 'g', 0,
    'N', 'e', 'w', 0,
    'u', 'r', 'l', 0,
    'r', 'o', 'w', 0,
    'p', 'o', 's', 0,
    'd', 'c', 0,
    'i', 'd', 0,
};
#if !wxUSE_WEBVIEW
const char* wxWebViewDefaultURLStr = "";
const char* wxWebViewNameStr = "";
const char* wxWebViewBackendWebKit = "";
const char* wxWebViewBackendIE = "";
const char* wxWebViewBackendDefault = "";
wxEventType wxEVT_WEBVIEW_NAVIGATING;
wxEventType wxEVT_WEBVIEW_NAVIGATED;
wxEventType wxEVT_WEBVIEW_LOADED;
wxEventType wxEVT_WEBVIEW_ERROR;
wxEventType wxEVT_WEBVIEW_NEWWINDOW;
wxEventType wxEVT_WEBVIEW_TITLE_CHANGED;
#endif //!wxUSE_WEBVIEW


 ::wxWebView* sipVH__html2_23(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxWindow*parent, ::wxWindowID id,const  ::wxString& url,const  ::wxPoint& pos,const  ::wxSize& size,long style,const  ::wxString& name)
{
     ::wxWebView* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "DiNNNlN", parent, sipType_wxWindow, SIP_NULLPTR, id, new  ::wxString(url), sipType_wxString, SIP_NULLPTR, new  ::wxPoint(pos), sipType_wxPoint, SIP_NULLPTR, new  ::wxSize(size), sipType_wxSize, SIP_NULLPTR, style, new  ::wxString(name), sipType_wxString, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_wxWebView, &sipRes);

    return sipRes;
}

 ::wxWebView* sipVH__html2_22(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxWebView* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_wxWebView, &sipRes);

    return sipRes;
}

 ::wxEvent* sipVH__html2_21(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxEvent* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H2", sipType_wxEvent, &sipRes);

    return sipRes;
}

 ::wxEventCategory sipVH__html2_20(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxEventCategory sipRes = ::wxEVT_CATEGORY_UI;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "F", sipType_wxEventCategory, &sipRes);

    return sipRes;
}

 ::wxBorder sipVH__html2_19(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxBorder sipRes = ::wxBORDER_DEFAULT;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "F", sipType_wxBorder, &sipRes);

    return sipRes;
}

void sipVH__html2_18(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxWindowVariant variant)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "F", variant, sipType_wxWindowVariant);
}

void sipVH__html2_17(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int x,int y,int width,int height)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "iiii", x, y, width, height);
}

 ::wxSize sipVH__html2_16(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxSize sipRes;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_wxSize, &sipRes);

    return sipRes;
}

void sipVH__html2_15(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int minW,int minH,int maxW,int maxH,int incW,int incH)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "iiiiii", minW, minH, maxW, maxH, incW, incH);
}

void sipVH__html2_14(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int width,int height)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "ii", width, height);
}

void sipVH__html2_13(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int x,int y,int width,int height,int sizeFlags)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "iiiii", x, y, width, height, sizeFlags);
}

void sipVH__html2_12(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int*x,int*y)
{
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "(ii)", x, y);
}

 ::wxWindow* sipVH__html2_11(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxWindow* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_wxWindow, &sipRes);

    return sipRes;
}

void sipVH__html2_10(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "");
}

void sipVH__html2_9(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const  ::wxValidator& validator)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", const_cast< ::wxValidator *>(&validator), sipType_wxValidator, SIP_NULLPTR);
}

 ::wxValidator* sipVH__html2_8(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxValidator* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_wxValidator, &sipRes);

    return sipRes;
}

 ::wxPoint sipVH__html2_7(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxPoint sipRes;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_wxPoint, &sipRes);

    return sipRes;
}

bool sipVH__html2_6(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int direction,int size,int availableOtherDir)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "iii", direction, size, availableOtherDir);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

void sipVH__html2_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, bool canFocus)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "b", canFocus);
}

bool sipVH__html2_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

bool sipVH__html2_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxEvent& event)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "D", &event, sipType_wxEvent, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

void sipVH__html2_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod,  ::wxWindowBase*child)
{
    sipCallProcedureMethod(sipGILState, sipErrorHandler, sipPySelf, sipMethod, "D", child, sipType_wxWindowBase, SIP_NULLPTR);
}

 ::wxString sipVH__html2_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
     ::wxString sipRes;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_wxString, &sipRes);

    return sipRes;
}

 ::wxFSFile* sipVH__html2_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const  ::wxString& uri)
{
     ::wxFSFile* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(SIP_NULLPTR, sipMethod, "N", new  ::wxString(uri), sipType_wxString, SIP_NULLPTR);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H2", sipType_wxFSFile, &sipRes);

    return sipRes;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewIE_EmulationLevel, {0}, 0}, sipNameNr_WebViewIE_EmulationLevel, -1, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewNavigationActionFlags, {0}, 0}, sipNameNr_WebViewNavigationActionFlags, -1, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewFindFlags, {0}, 0}, sipNameNr_WebViewFindFlags, -1, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewReloadFlags, {0}, 0}, sipNameNr_WebViewReloadFlags, -1, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewNavigationError, {0}, 0}, sipNameNr_WebViewNavigationError, -1, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewZoomType, {0}, 0}, sipNameNr_WebViewZoomType, -1, SIP_NULLPTR},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_wxWebViewZoom, {0}, 0}, sipNameNr_WebViewZoom, -1, SIP_NULLPTR},
};

/* These are the enum members of all global enums. */
static sipEnumMemberDef enummembers[] = {
    {sipName_WEBVIEWIE_EMU_DEFAULT, static_cast<int>(::wxWEBVIEWIE_EMU_DEFAULT), 8},
    {sipName_WEBVIEWIE_EMU_IE10, static_cast<int>(::wxWEBVIEWIE_EMU_IE10), 8},
    {sipName_WEBVIEWIE_EMU_IE10_FORCE, static_cast<int>(::wxWEBVIEWIE_EMU_IE10_FORCE), 8},
    {sipName_WEBVIEWIE_EMU_IE11, static_cast<int>(::wxWEBVIEWIE_EMU_IE11), 8},
    {sipName_WEBVIEWIE_EMU_IE11_FORCE, static_cast<int>(::wxWEBVIEWIE_EMU_IE11_FORCE), 8},
    {sipName_WEBVIEWIE_EMU_IE7, static_cast<int>(::wxWEBVIEWIE_EMU_IE7), 8},
    {sipName_WEBVIEWIE_EMU_IE8, static_cast<int>(::wxWEBVIEWIE_EMU_IE8), 8},
    {sipName_WEBVIEWIE_EMU_IE8_FORCE, static_cast<int>(::wxWEBVIEWIE_EMU_IE8_FORCE), 8},
    {sipName_WEBVIEWIE_EMU_IE9, static_cast<int>(::wxWEBVIEWIE_EMU_IE9), 8},
    {sipName_WEBVIEWIE_EMU_IE9_FORCE, static_cast<int>(::wxWEBVIEWIE_EMU_IE9_FORCE), 8},
    {sipName_WEBVIEW_FIND_BACKWARDS, static_cast<int>(::wxWEBVIEW_FIND_BACKWARDS), 5},
    {sipName_WEBVIEW_FIND_DEFAULT, static_cast<int>(::wxWEBVIEW_FIND_DEFAULT), 5},
    {sipName_WEBVIEW_FIND_ENTIRE_WORD, static_cast<int>(::wxWEBVIEW_FIND_ENTIRE_WORD), 5},
    {sipName_WEBVIEW_FIND_HIGHLIGHT_RESULT, static_cast<int>(::wxWEBVIEW_FIND_HIGHLIGHT_RESULT), 5},
    {sipName_WEBVIEW_FIND_MATCH_CASE, static_cast<int>(::wxWEBVIEW_FIND_MATCH_CASE), 5},
    {sipName_WEBVIEW_FIND_WRAP, static_cast<int>(::wxWEBVIEW_FIND_WRAP), 5},
    {sipName_WEBVIEW_NAV_ACTION_NONE, static_cast<int>(::wxWEBVIEW_NAV_ACTION_NONE), 9},
    {sipName_WEBVIEW_NAV_ACTION_OTHER, static_cast<int>(::wxWEBVIEW_NAV_ACTION_OTHER), 9},
    {sipName_WEBVIEW_NAV_ACTION_USER, static_cast<int>(::wxWEBVIEW_NAV_ACTION_USER), 9},
    {sipName_WEBVIEW_NAV_ERR_AUTH, static_cast<int>(::wxWEBVIEW_NAV_ERR_AUTH), 10},
    {sipName_WEBVIEW_NAV_ERR_CERTIFICATE, static_cast<int>(::wxWEBVIEW_NAV_ERR_CERTIFICATE), 10},
    {sipName_WEBVIEW_NAV_ERR_CONNECTION, static_cast<int>(::wxWEBVIEW_NAV_ERR_CONNECTION), 10},
    {sipName_WEBVIEW_NAV_ERR_NOT_FOUND, static_cast<int>(::wxWEBVIEW_NAV_ERR_NOT_FOUND), 10},
    {sipName_WEBVIEW_NAV_ERR_OTHER, static_cast<int>(::wxWEBVIEW_NAV_ERR_OTHER), 10},
    {sipName_WEBVIEW_NAV_ERR_REQUEST, static_cast<int>(::wxWEBVIEW_NAV_ERR_REQUEST), 10},
    {sipName_WEBVIEW_NAV_ERR_SECURITY, static_cast<int>(::wxWEBVIEW_NAV_ERR_SECURITY), 10},
    {sipName_WEBVIEW_NAV_ERR_USER_CANCELLED, static_cast<int>(::wxWEBVIEW_NAV_ERR_USER_CANCELLED), 10},
    {sipName_WEBVIEW_RELOAD_DEFAULT, static_cast<int>(::wxWEBVIEW_RELOAD_DEFAULT), 11},
    {sipName_WEBVIEW_RELOAD_NO_CACHE, static_cast<int>(::wxWEBVIEW_RELOAD_NO_CACHE), 11},
    {sipName_WEBVIEW_ZOOM_LARGE, static_cast<int>(::wxWEBVIEW_ZOOM_LARGE), 12},
    {sipName_WEBVIEW_ZOOM_LARGEST, static_cast<int>(::wxWEBVIEW_ZOOM_LARGEST), 12},
    {sipName_WEBVIEW_ZOOM_MEDIUM, static_cast<int>(::wxWEBVIEW_ZOOM_MEDIUM), 12},
    {sipName_WEBVIEW_ZOOM_SMALL, static_cast<int>(::wxWEBVIEW_ZOOM_SMALL), 12},
    {sipName_WEBVIEW_ZOOM_TINY, static_cast<int>(::wxWEBVIEW_ZOOM_TINY), 12},
    {sipName_WEBVIEW_ZOOM_TYPE_LAYOUT, static_cast<int>(::wxWEBVIEW_ZOOM_TYPE_LAYOUT), 13},
    {sipName_WEBVIEW_ZOOM_TYPE_TEXT, static_cast<int>(::wxWEBVIEW_ZOOM_TYPE_TEXT), 13},
};


/*
 * This defines each type in this module.
 */
sipTypeDef *sipExportedTypes__html2[] = {
    &sipTypeDef__html2_wxWebView.ctd_base,
    &sipTypeDef__html2_wxWebViewArchiveHandler.ctd_base,
    &sipTypeDef__html2_wxWebViewEvent.ctd_base,
    &sipTypeDef__html2_wxWebViewFSHandler.ctd_base,
    &sipTypeDef__html2_wxWebViewFactory.ctd_base,
    &enumTypes[2].etd_base,
    &sipTypeDef__html2_wxWebViewHandler.ctd_base,
    &sipTypeDef__html2_wxWebViewHistoryItem.ctd_base,
    &enumTypes[0].etd_base,
    &enumTypes[1].etd_base,
    &enumTypes[4].etd_base,
    &enumTypes[3].etd_base,
    &enumTypes[6].etd_base,
    &enumTypes[5].etd_base,
};


/* This defines the types that this module needs to import from _core. */
sipImportedTypeDef sipImportedTypes__html2__core[] = {
    {"wxBorder"},
    {"wxCommandEvent"},
    {"wxControl"},
    {"wxEvent"},
    {"wxEventCategory"},
    {"wxEvtHandler"},
    {"wxFSFile"},
    {"wxInputStream"},
    {"wxNotifyEvent"},
    {"wxObject"},
    {"wxPoint"},
    {"wxSize"},
    {"wxString"},
    {"wxTrackable"},
    {"wxValidator"},
    {"wxVisualAttributes"},
    {"wxWindow"},
    {"wxWindowBase"},
    {"wxWindowVariant"},
    {SIP_NULLPTR}
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"wx._core", sipImportedTypes__html2__core, SIP_NULLPTR, SIP_NULLPTR},
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR}
};


/* Define the strings to be added to this module dictionary. */
static sipStringInstanceDef stringInstances[] = {
    {sipName_WebViewBackendDefault, wxWebViewBackendDefault, 'N'},
    {sipName_WebViewBackendIE, wxWebViewBackendIE, 'N'},
    {sipName_WebViewBackendWebKit, wxWebViewBackendWebKit, 'N'},
    {sipName_WebViewDefaultURLStr, wxWebViewDefaultURLStr, 'N'},
    {sipName_WebViewNameStr, wxWebViewNameStr, 'N'},
    {0, 0, 0}
};


/* Define the ints to be added to this module dictionary. */
static sipIntInstanceDef intInstances[] = {
    {sipName_USE_WEBVIEW, wxUSE_WEBVIEW},
    {sipName_wxEVT_WEBVIEW_ERROR, wxEVT_WEBVIEW_ERROR},
    {sipName_wxEVT_WEBVIEW_LOADED, wxEVT_WEBVIEW_LOADED},
    {sipName_wxEVT_WEBVIEW_NAVIGATED, wxEVT_WEBVIEW_NAVIGATED},
    {sipName_wxEVT_WEBVIEW_NAVIGATING, wxEVT_WEBVIEW_NAVIGATING},
    {sipName_wxEVT_WEBVIEW_NEWWINDOW, wxEVT_WEBVIEW_NEWWINDOW},
    {sipName_wxEVT_WEBVIEW_TITLE_CHANGED, wxEVT_WEBVIEW_TITLE_CHANGED},
    {0, 0}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI__html2 = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_wx__html2,
    0,
    sipStrings__html2,
    importsTable,
    SIP_NULLPTR,
    14,
    sipExportedTypes__html2,
    SIP_NULLPTR,
    36,
    enummembers,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, stringInstances, intInstances, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI__html2;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit__html2
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        init_html2
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {SIP_NULLPTR, SIP_NULLPTR, 0, SIP_NULLPTR}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "wx._html2",
        SIP_NULLPTR,
        -1,
        sip_methods,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_NULLPTR
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_wx__html2, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_wx__html2), sip_methods);
#endif

    if (sipModule == SIP_NULLPTR)
        SIP_MODULE_RETURN(SIP_NULLPTR);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule("wx.siplib");
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>("wx.siplib"));
#endif

    if (sip_sipmod == SIP_NULLPTR)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(SIP_NULLPTR);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == SIP_NULLPTR || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == SIP_NULLPTR || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(SIP_NULLPTR);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI__html2 = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, "wx.siplib._C_API"));
#else
    sipAPI__html2 = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI__html2 == SIP_NULLPTR)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(SIP_NULLPTR);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI__html2,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(SIP_NULLPTR);
    }
    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI__html2,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(SIP_NULLPTR);
    }

    SIP_MODULE_RETURN(sipModule);
}
