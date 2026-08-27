/* FUN_1409e888 @ 0x1409e888 */

void FUN_1409e888(int *param_1,code *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == (code *)0x0)) {
    return;
  }
  if ((param_1 != (int *)0x0) && (param_2 != (code *)0x0)) {
    piVar1 = (int *)*param_1;
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      (*param_2)(piVar1[1],param_3);
      piVar1 = (int *)iVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140b4fec,DAT_140b4fe8);
}

