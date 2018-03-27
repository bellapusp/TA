void DSDV_Agent::
trace (char *fmt,...)
{
  FILE *fp = fopen("dsdv.log","a+");
  fprintf(fp, "\n \n DSDV_Agent::trace\n");

    .....
    ...


  fclose(fp);
}