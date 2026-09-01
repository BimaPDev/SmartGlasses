/* FUN_10067470 @ 0x10067470 */

int FUN_10067470(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    uVar1 = 0x38;
    uVar3 = DAT_100674b4;
  }
  else {
    piVar2 = (int *)(param_1 + 0x1c);
    if (0 < *piVar2) {
      iVar4 = *piVar2;
      *piVar2 = iVar4 + -1;
      if ((iVar4 == 1) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
        (**(code **)(param_1 + 0x20))();
      }
      return iVar4;
    }
    uVar1 = 0x39;
    uVar3 = DAT_100674c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100674bc,uVar1,DAT_100674b8,uVar3);
}

