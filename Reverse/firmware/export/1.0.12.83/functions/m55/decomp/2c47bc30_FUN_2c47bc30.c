/* FUN_2c47bc30 @ 0x2c47bc30 */

void FUN_2c47bc30(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  *DAT_2c47bc80 = (char)param_1;
  piVar1 = DAT_2c47bc84;
  switch(param_1) {
  case 0:
    FUN_2c644958(*DAT_2c47bc84);
    *piVar1 = 0;
  default:
    return;
  case 5:
  case 8:
  case 9:
    break;
  }
  if (*DAT_2c47bc84 != 0) {
    FUN_2c6448b4(*DAT_2c47bc84,5000);
    return;
  }
  iVar2 = FUN_2c64418c(DAT_2c47bc88,0,0);
  *piVar1 = iVar2;
  FUN_2c6448b4(iVar2,5000);
  return;
}

