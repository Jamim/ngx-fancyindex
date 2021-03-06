#! /usr/bin/awk -f
#
# Copyright © Adrian Perez <aperez@igalia.com>
#
# Converts an HTML template into a C header suitable for inclusion.
# Take a look at the HACKING.rst file to know how to use it :-)
#
# This code is placed in the public domain.

BEGIN {
	varname = 0;
	print "/* Automagically generated, do not edit! */"
	vars_count = 0;
}

/^<!--[[:space:]]*var[[:space:]]+[^[:space:]]+[[:space:]]*-->$/ {
	if (varname) print ";";
	if ($3 == "NONE") {
		varname = 0;
		next;
	}
	varname = $3;
	vars[vars_count++] = varname;
	print "static const u_char " varname "[] = \"\"";
	next;
}

/^$/ {
	if (!varname) next;
	print "\"\\n\"";
	next;
}

$1 == "<title>" || $1 == "<h1>" || $1 == "<h2>" {
	gsub(/\t/, "\\t");
	print "\"" $0 "\"";
	next;
}

$1 == "</title>" || $1 == "</h1>" || $1 == "</h2>" {
	print "\"" $1 "\\n\"";
	next;
}

{
	if (!varname) next;
	# Order matters
	gsub(/[\v\n\r\f]+/, "");
	gsub(/\\/, "\\\\");
	gsub(/"/, "\\\"");
	gsub(/\t/, "\\t");
	print "\"" $0 "\\n\""
}


END {
	if (varname) print ";";
	print "#define NFI_TEMPLATE_SIZE (0 \\";
	for (var in vars) {
		print "\t+ nfi_sizeof_ssz(" vars[var] ") \\";
	}
	print "\t)"
}
