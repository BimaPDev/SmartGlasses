/* FUN_1403ce90 @ 0x1403ce90 */

int FUN_1403ce90(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_14092510;
  switch(param_1) {
  case 1:
    *DAT_14094d5c = param_2;
    return 0;
  case 2:
    *DAT_14086620 = param_2;
    return param_2;
  case 3:
    break;
  case 4:
    return param_2;
  default:
    return param_2;
  case 6:
    *DAT_140950d4 = param_2;
    return param_2;
  case 7:
    *DAT_1408dd14 = param_2;
    return param_2;
  case 8:
    *DAT_14086614 = param_2;
    return param_2;
  case 9:
    *DAT_14050010 = param_2;
    return param_2;
  case 0x1b:
    iVar2 = thunk_FUN_14086600();
    return iVar2;
  }
  bVar1 = *DAT_1409250c;
  if (2 < bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14092518,DAT_14092514);
  }
  if (param_2 != 0) {
    *DAT_1409250c = bVar1 + 1;
    *(int *)(iVar2 + (uint)bVar1 * 4) = param_2;
    return param_2;
  }
  return 0;
}

