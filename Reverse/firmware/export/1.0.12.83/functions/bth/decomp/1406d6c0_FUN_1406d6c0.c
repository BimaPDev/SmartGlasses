/* FUN_1406d6c0 @ 0x1406d6c0 */

/* WARNING: Removing unreachable block (ram,0x1406d548) */

void FUN_1406d6c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406d708,0xfb,DAT_1406d704);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406d708,0xfd,DAT_1406d704);
  }
  iVar3 = (*(code *)**(undefined4 **)(iVar3 + 4))(iVar3,param_2,param_3);
  if (iVar3 == 0) {
    return;
  }
  if (param_1 != 0) {
    iVar3 = FUN_14073a58(param_1 + 4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1406d5b4,0x9a,DAT_1406d5b0,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
    }
    (**(code **)(*(int *)(iVar3 + 4) + 4))(iVar3);
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2 != (int *)0x0) {
      do {
        piVar1 = piVar2 + 1;
        piVar2 = (int *)*piVar2;
        if ((*piVar1 == DAT_1406d5a4) || (*piVar1 == DAT_1406d5bc)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_1406d5b8);
        }
      } while (piVar2 != (int *)0x0);
      if (*(int *)(param_1 + 4) != 0) {
        FUN_140739f0(DAT_1406d5a8,param_1);
        FUN_14072a44(0,DAT_1406d5ac);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1406d5b4,0x98,DAT_1406d5b0,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
}

