/* FUN_2c5a8470 @ 0x2c5a8470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c5a8470(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  code *pcVar3;
  code *extraout_r3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar3 = _DAT_2c5a84e4;
  iVar5 = param_1[9];
  iVar7 = param_1[10];
  *param_1 = _DAT_2c5a84e4;
  uVar2 = _LAB_2c5a84ec;
  pcVar1 = _LAB_2c5a84e8;
  if (iVar5 != iVar7) {
    iVar4 = iVar5 + 0x10;
    do {
      while (pcVar3 = (code *)**(undefined4 **)(iVar4 + -0x10), pcVar3 != pcVar1) {
        iVar6 = iVar5 + 0x20;
        (*pcVar3)(iVar5);
        iVar4 = iVar4 + 0x20;
        pcVar3 = extraout_r3;
        iVar5 = iVar6;
        param_3 = extraout_r2;
        if (iVar7 == iVar6) goto LAB_2c5a84bc;
      }
      *(undefined4 *)(iVar4 + -0x10) = uVar2;
      if (iVar4 != *(int *)(iVar5 + 8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar5 = iVar5 + 0x20;
      iVar4 = iVar4 + 0x20;
    } while (iVar7 != iVar5);
LAB_2c5a84bc:
    iVar7 = param_1[9];
  }
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar7,param_3,pcVar3,param_4);
  }
  if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

