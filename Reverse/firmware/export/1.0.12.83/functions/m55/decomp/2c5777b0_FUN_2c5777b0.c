/* FUN_2c5777b0 @ 0x2c5777b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5777b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_54;
  undefined1 *apuStack_50 [2];
  undefined1 auStack_48 [16];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c5778bc;
  FUN_2c60438c(*(undefined4 *)(param_1 + 8),param_2,param_3,0);
  iVar8 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar8 != iVar4) {
    do {
      uStack_54 = _LAB_2c5778c0;
      apuStack_50[0] = auStack_48;
      FUN_2c5774e0(apuStack_50,*(int *)(iVar8 + 4),*(int *)(iVar8 + 8) + *(int *)(iVar8 + 4));
      iStack_38 = 0;
      iStack_34 = 0;
      iVar5 = *(int *)(iVar8 + 0x20) - *(int *)(iVar8 + 0x1c);
      iStack_30 = 0;
      if (iVar5 == 0) {
        iVar2 = 0;
      }
      else {
        if (*_LAB_2c5778c4 == 0) {
          FUN_2c4723c4();
          *_LAB_2c5778c4 = 1;
        }
        iVar2 = FUN_2c47245c(0,iVar5);
      }
      iStack_30 = iVar5 + iVar2;
      piVar6 = *(int **)(iVar8 + 0x1c);
      piVar9 = *(int **)(iVar8 + 0x20);
      iStack_38 = iVar2;
      if (piVar6 != piVar9) {
        iVar7 = iVar2 + 8;
        iVar5 = iVar2;
        iStack_34 = iVar2;
        do {
          *(int *)(iVar7 + -8) = iVar7;
          iVar7 = iVar7 + 0x18;
          iVar2 = iVar5 + 0x18;
          iVar3 = *piVar6;
          piVar1 = piVar6 + 1;
          piVar6 = piVar6 + 6;
          FUN_2c5774e0(iVar5,iVar3,*piVar1 + iVar3);
          iVar5 = iVar2;
        } while (piVar9 != piVar6);
      }
      iStack_34 = iVar2;
      FUN_2c57761c(param_1,&uStack_54);
      uStack_54 = _LAB_2c5778c0;
      iVar5 = iStack_34;
      if (iStack_38 != iStack_34) {
        iVar7 = iStack_38 + 8;
        iVar2 = iStack_38;
        do {
          if (*(int *)(iVar7 + -8) != iVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          iVar2 = iVar2 + 0x18;
          iVar7 = iVar7 + 0x18;
          iVar5 = iStack_38;
        } while (iStack_34 != iVar2);
      }
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar5);
      }
      if (apuStack_50[0] != auStack_48) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar8 = iVar8 + 0x28;
    } while (iVar4 != iVar8);
  }
  if (*_LAB_2c5778bc != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

