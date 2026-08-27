/* FUN_14032710 @ 0x14032710 */

void FUN_14032710(int param_1)

{
  undefined2 *puVar1;
  short *psVar2;
  
  psVar2 = DAT_14032764;
  if (param_1 == 2) {
    if ((*DAT_14032764 != 0xff) && (*DAT_1403276c == '\0')) {
      FUN_14031518((char)*DAT_14032764);
    }
  }
  else if ((param_1 == 4) && (*DAT_1403276c != '\0')) {
    *DAT_1403276c = '\0';
    FUN_14034918();
    psVar2 = DAT_14032764;
    if (*DAT_14032770 != 0) {
      FUN_1402e37c(0x2309);
      psVar2 = DAT_14032764;
    }
  }
  puVar1 = DAT_14032768;
  *psVar2 = 0xff;
  *puVar1 = 0;
  return;
}

