/* FUN_2c50f968 @ 0x2c50f968 */

int FUN_2c50f968(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) &&
      (iVar1 = FUN_2c606c14(*param_1,DAT_2c50f9b0), iVar1 != 0)) &&
     (iVar1 = FUN_2c606c34(*param_1), iVar1 != 0)) {
    iVar3 = *param_1;
    piVar2 = (int *)FUN_2c62ca10(iVar3 + 0x24);
    while (piVar2 != (int *)0x0) {
      if (param_1 == piVar2) {
        return iVar1;
      }
      piVar2 = (int *)FUN_2c62ca20(iVar3 + 0x24);
    }
  }
  return 0;
}

