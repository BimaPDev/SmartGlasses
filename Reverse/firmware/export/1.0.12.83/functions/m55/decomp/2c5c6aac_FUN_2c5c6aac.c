/* FUN_2c5c6aac @ 0x2c5c6aac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c6aac(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_14;
  
  func_0x2c5d51cc(param_1 + 8);
  iStack_14 = *_LAB_2c5c9850;
  iVar2 = FUN_2c5e33e4();
  if (iVar2 == 1) {
    FUN_2c620fa4(0x7d2,*(undefined4 *)(param_1 + 0x3a4));
    uVar3 = func_0x2c5c9594(*(undefined4 *)(param_1 + 0x3bc),_LAB_2c5c9854);
    FUN_2c620fa4(0x7d3,uVar3);
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    **(undefined1 **)(param_1 + 0x3f4) = 0;
    iVar2 = FUN_2c5392f4(param_1 + 0x3f4,*(undefined4 *)(param_1 + 0x3a4),
                         *(undefined4 *)(param_1 + 0x3a8));
    if (*(int *)(iVar2 + 4) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(_LAB_2c5c9860);
    }
    uVar3 = FUN_2c5392f4(iVar2,_LAB_2c5c985c,1);
    FUN_2c5392f4(uVar3,*(undefined4 *)(param_1 + 0x3c4),*(undefined4 *)(param_1 + 0x3c8));
    FUN_2c620fa4(0x40a,*(undefined4 *)(param_1 + 0x3f4));
    FUN_2c620fa4(0x40b,param_1 + 0x3c0);
    piVar1 = DAT_2c621070;
    if (*_LAB_2c5c9850 == iStack_14) {
      uVar7 = *(undefined4 *)(param_1 + 0x3dc);
      iStack_1c = *DAT_2c62106c;
      FUN_2c628c58();
      FUN_2c62c3b0(&puStack_2c,0x10);
      uVar3 = DAT_2c621074;
      puStack_2c = (uint *)0x40c;
      *piVar1 = *piVar1 + 1;
      uStack_20 = uVar7;
      piVar4 = (int *)FUN_2c62ca10(uVar3);
      uVar3 = DAT_2c621074;
      while (piVar4 != (int *)0x0) {
        while (((piVar5 = (int *)FUN_2c62ca20(uVar3,piVar4), (char)piVar4[4] != '\0' ||
                ((uint *)*piVar4 != puStack_2c)) || (piVar4[1] == 0))) {
          piVar4 = piVar5;
          if (piVar5 == (int *)0x0) goto LAB_2c620ff6;
        }
        iStack_28 = piVar4[2];
        uStack_24 = piVar4[3];
        (*(code *)piVar4[1])(piVar4,&puStack_2c);
        piVar4 = piVar5;
      }
LAB_2c620ff6:
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
      if (iVar2 + -1 < 1) {
        iVar2 = FUN_2c62ca10(DAT_2c621074);
        uVar3 = DAT_2c621074;
        while (iVar2 != 0) {
          while (iVar6 = FUN_2c62ca20(uVar3,iVar2), *(char *)(iVar2 + 0x10) == '\0') {
            iVar2 = iVar6;
            if (iVar6 == 0) goto LAB_2c621000;
          }
          FUN_2c62c998(uVar3,iVar2);
          FUN_2c62bea8(iVar2);
          iVar2 = iVar6;
        }
      }
LAB_2c621000:
      if (*DAT_2c62106c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
  }
  else {
    FUN_2c620fa4(0x7d2,*(undefined4 *)(param_1 + 0x3a4));
    uVar3 = func_0x2c5c9594(*(undefined4 *)(param_1 + 0x3bc),_LAB_2c5c9854);
    FUN_2c620fa4(0x7d3,uVar3);
    FUN_2c620fa4(0x40a,*(undefined4 *)(param_1 + 0x3a4));
    FUN_2c620fa4(0x40b,param_1 + 0x3c0);
    iStack_28 = 3;
    uStack_24 = *_LAB_2c5c9858 & 0xffffff;
    puStack_2c = &uStack_24;
    FUN_2c620fa4(0x40c,&uStack_24);
    if (puStack_2c != &uStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c5c9850 == iStack_14) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

