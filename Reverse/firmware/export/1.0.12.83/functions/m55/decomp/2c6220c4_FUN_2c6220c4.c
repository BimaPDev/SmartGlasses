/* FUN_2c6220c4 @ 0x2c6220c4 */

int FUN_2c6220c4(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  if (*param_1 == '\0') {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    iVar3 = (int)pcVar2 - (int)param_1;
    iVar1 = iVar3 + 1;
  }
  iVar1 = FUN_2c62be98(0x40,iVar1);
  if (iVar1 != 0) {
    FUN_2c62c0d8(iVar1,param_1,iVar3);
    *(undefined1 *)(iVar1 + iVar3) = 0;
  }
  return iVar1;
}

