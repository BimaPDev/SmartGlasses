/* FUN_2c47bbc0 @ 0x2c47bbc0 */

void FUN_2c47bbc0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  *DAT_2c47bc24 = (char)param_1;
  piVar1 = DAT_2c47bc28;
  switch(param_1) {
  case 0:
    FUN_2c644958(*DAT_2c47bc28);
    *piVar1 = 0;
    break;
  case 1:
  case 4:
    FUN_2c644958(*DAT_2c47bc28);
    iVar2 = FUN_2c64418c(DAT_2c47bc2c,0);
    *piVar1 = iVar2;
    FUN_2c6448b4(iVar2,10000);
    return;
  case 2:
  case 3:
    iVar2 = *DAT_2c47bc28;
    if (iVar2 == 0) {
      iVar2 = FUN_2c64418c(DAT_2c47bc2c,0,0);
      *piVar1 = iVar2;
    }
    FUN_2c6448b4(iVar2,5000);
    return;
  }
  return;
}

