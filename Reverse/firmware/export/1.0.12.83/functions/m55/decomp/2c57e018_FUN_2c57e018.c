/* FUN_2c57e018 @ 0x2c57e018 */

void FUN_2c57e018(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = DAT_2c57e184;
  piVar6 = *(int **)(param_1 + 8);
  iVar3 = *DAT_2c57e180;
  if (piVar6 == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_2c64ca5c(0xc,param_2,param_3,0);
    piVar6 = *(int **)(param_1 + 8);
    puVar2[2] = 0;
    *(undefined4 **)(param_1 + 8) = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    uVar1 = DAT_2c57e184;
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar6;
      iVar8 = piVar6[1];
      if (iVar7 != iVar8) {
        iVar4 = iVar7 + 0xc;
        do {
          *(undefined4 *)(iVar4 + -0xc) = uVar1;
          if (iVar4 != *(int *)(iVar7 + 4)) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          iVar7 = iVar7 + 0x1c;
          iVar4 = iVar4 + 0x1c;
        } while (iVar8 != iVar7);
        iVar8 = *piVar6;
      }
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar8);
      }
      thunk_FUN_2c669588(piVar6,0xc);
    }
  }
  else {
    iVar7 = *piVar6;
    iVar8 = piVar6[1];
    if (iVar7 != iVar8) {
      iVar5 = iVar7 + 0xc;
      iVar4 = iVar7;
      do {
        *(undefined4 *)(iVar5 + -0xc) = uVar1;
        if (*(int *)(iVar4 + 4) != iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        iVar4 = iVar4 + 0x1c;
        iVar5 = iVar5 + 0x1c;
      } while (iVar8 != iVar4);
      piVar6[1] = iVar7;
    }
  }
  piVar6 = *(int **)*param_2;
  if ((int *)*param_2 != piVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c57e194,0x52,DAT_2c57e188,DAT_2c57e190,DAT_2c57e188,piVar6[3]);
  }
  if (*DAT_2c57e180 == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

