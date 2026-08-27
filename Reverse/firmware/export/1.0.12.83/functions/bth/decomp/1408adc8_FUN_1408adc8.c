/* FUN_1408adc8 @ 0x1408adc8 */

void FUN_1408adc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -0xc;
    uVar2 = 0;
    if (*(int *)(param_1 + -0xc) != 0) {
      iVar1 = FUN_1408a798();
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + -0xc);
        if (iVar3 == *(int *)(iVar1 + 0x48)) {
          uVar2 = 0;
        }
        else {
          if (iVar3 != *(int *)(iVar1 + 0x4c)) {
            return;
          }
          uVar2 = 1;
        }
        FUN_1408a70c(iVar1,uVar2,0);
        return;
      }
      uVar2 = *(undefined4 *)(param_1 + -0xc);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_1408ae1c,param_1,iVar3,uVar2);
}

