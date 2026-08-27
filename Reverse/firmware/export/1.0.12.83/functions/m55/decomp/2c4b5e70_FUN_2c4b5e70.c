/* FUN_2c4b5e70 @ 0x2c4b5e70 */

int FUN_2c4b5e70(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_2c4b5ea8;
  iVar1 = 0;
  do {
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar1 + 1;
    if (param_1 < *pcVar2) {
      if ((int)*pcVar2 + (int)DAT_2c4b5ea8[iVar1] <= param_1 * 2) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
    iVar1 = iVar3;
  } while (iVar3 != 7);
  return 7;
}

