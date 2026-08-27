/* thunk_FUN_140b4ef4 @ 0x1409e908 */

undefined4 thunk_FUN_140b4ef4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140b4f60,DAT_140b4f5c);
  }
  if (param_1[2] == 0) {
    return 0;
  }
  piVar4 = (int *)*param_1;
  if (piVar4[1] != param_2) {
    piVar1 = (int *)*piVar4;
    if ((int *)*piVar4 == (int *)0x0) {
      return 0;
    }
    do {
      piVar3 = piVar1;
      if (piVar3[1] == param_2) {
        iVar2 = FUN_140b4c04(param_1,piVar3);
        *piVar4 = iVar2;
        if ((int *)param_1[1] != piVar3) {
          return 1;
        }
        param_1[1] = (int)piVar4;
        return 1;
      }
      piVar1 = (int *)*piVar3;
      piVar4 = piVar3;
    } while ((int *)*piVar3 != (int *)0x0);
    return 0;
  }
  iVar2 = FUN_140b4c04(param_1,piVar4);
  if (param_1[1] == *param_1) {
    param_1[1] = iVar2;
  }
  *param_1 = iVar2;
  return 1;
}

