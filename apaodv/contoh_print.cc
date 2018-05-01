FILE *fp = fopen("function.log","a+");
fprintf(fp, "%s\n", __FUNCTION__);
fclose(fp);