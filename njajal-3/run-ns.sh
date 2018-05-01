if [ -f trace.log ]
then
rm trace.log
fi
if [ -f debug.log ]
then
rm debug.log
fi
ns njajal-aodv.tcl
