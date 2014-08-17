/* Automagically generated, do not edit! */
static const u_char t01_head1[] = ""
"<!DOCTYPE html>"
"\n"
"<html lang=\"en\">"
"\n"
"<head>"
"<meta charset=\"utf-8\">"
"<meta name=\"viewport\" content=\"width=device-width\">"
"        <link rel=\"stylesheet\" href=\"//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css\">"
"\n"
;
static const u_char t02_head2[] = ""
"\n"
"<title>Index of"
;
static const u_char t03_head3[] = ""
"</title>"
"\n"
"</head>"
;
static const u_char t04_body1[] = ""
"<body>"
"<h1>Index of"
;
static const u_char t05_body2[] = ""
"</h1>"
"\n"
;
static const u_char t06_list1[] = ""
"<table id=\"list\">"
"\n"
"<colgroup>"
"<col />"
"<col />"
"<col />"
"</colgroup>"
"\n"
"<thead>"
"<tr>"
"<th><a href=\"?C=N&amp;O=A\">File Name</a>&nbsp;<a href=\"?C=N&amp;O=D\">&nbsp;↓&nbsp;</a></th>"
"<th><a href=\"?C=S&amp;O=A\">File Size</a>&nbsp;<a href=\"?C=S&amp;O=D\">&nbsp;↓&nbsp;</a></th>"
"<th><a href=\"?C=M&amp;O=A\">Date</a>&nbsp;<a href=\"?C=M&amp;O=D\">&nbsp;↓&nbsp;</a></th>"
"</tr>"
"</thead>"
"\n"
"<tbody>"
;
static const u_char t_parentdir_entry[] = ""
"<tr class=\"o\">"
"<td><a href=\"../?C=N&amp;O=A\">Parent directory/</a></td>"
"<td>-</td>"
"<td>-</td>"
"</tr>"
"\n"
;
static const u_char t07_list2[] = ""
"</tbody>"
"</table>"
;
static const u_char t08_foot1[] = ""
"\n"
"        <script>"
"        (function () {"
"            'use strict';"
"\n"
"            window.addEventListener('DOMContentLoaded', function () {"
"                var i,"
"                    links = document.querySelector('tbody').querySelectorAll('a');"
"\n"
"                /* ngfancyindex doesn't encode the URIs properly. */"
"                for (i = 0; i < links.length; i += 1) {"
"                    links[i].href = encodeURI(links[i].href);"
"                }"
"            });"
"        }());"
"        </script>"
"\n"
"</body>"
"\n"
"\n"
"</html>"
;
#define NFI_TEMPLATE_SIZE (0 \
	+ nfi_sizeof_ssz(t01_head1) \
	+ nfi_sizeof_ssz(t02_head2) \
	+ nfi_sizeof_ssz(t03_head3) \
	+ nfi_sizeof_ssz(t04_body1) \
	+ nfi_sizeof_ssz(t05_body2) \
	+ nfi_sizeof_ssz(t06_list1) \
	+ nfi_sizeof_ssz(t_parentdir_entry) \
	+ nfi_sizeof_ssz(t07_list2) \
	+ nfi_sizeof_ssz(t08_foot1) \
	)
