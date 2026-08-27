/* FUN_140a2434 @ 0x140a2434 */

int * FUN_140a2434(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  if (param_2 == (int *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a2490);
  }
  while( true ) {
    piVar2 = piVar1;
    if (param_2 <= piVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a248c);
    }
    if (-1 < *piVar2 << 0x1f) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2488,piVar2,*piVar2 << 0x1f,piVar2,param_4);
    }
    piVar1 = (int *)piVar2[1];
    if (piVar1 == (int *)0x0) break;
    if (param_2 <= piVar1) {
      if ((-1 < *param_2 << 0x1f) || (piVar1 == param_2)) {
        return piVar2;
      }
LAB_140a246a:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a2488,piVar2 + 1,piVar1,piVar2,param_4);
    }
  }
  piVar1 = (int *)(*param_2 << 0x1f);
  if (-1 < (int)piVar1) {
    return piVar2;
  }
  goto LAB_140a246a;
}

