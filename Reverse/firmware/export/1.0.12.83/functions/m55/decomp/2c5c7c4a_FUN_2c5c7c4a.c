/* FUN_2c5c7c4a @ 0x2c5c7c4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7c4a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  uint *puStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_14;
  
  iVar2 = FUN_2c5c685c();
  func_0x2c5d51cc(iVar2 + 8);
  iStack_14 = *_LAB_2c5c9850;
  iVar3 = FUN_2c5e33e4();
  if (iVar3 == 1) {
    FUN_2c620fa4(0x7d2,*(undefined4 *)(iVar2 + 0x3a4));
    uVar4 = func_0x2c5c9594(*(undefined4 *)(iVar2 + 0x3bc),_LAB_2c5c9854);
    FUN_2c620fa4(0x7d3,uVar4);
    *(undefined4 *)(iVar2 + 0x3f8) = 0;
    **(undefined1 **)(iVar2 + 0x3f4) = 0;
    iVar3 = FUN_2c5392f4(iVar2 + 0x3f4,*(undefined4 *)(iVar2 + 0x3a4),*(undefined4 *)(iVar2 + 0x3a8)
                        );
    if (*(int *)(iVar3 + 4) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(_LAB_2c5c9860);
    }
    uVar4 = FUN_2c5392f4(iVar3,_LAB_2c5c985c,1);
    FUN_2c5392f4(uVar4,*(undefined4 *)(iVar2 + 0x3c4),*(undefined4 *)(iVar2 + 0x3c8));
    FUN_2c620fa4(0x40a,*(undefined4 *)(iVar2 + 0x3f4));
    FUN_2c620fa4(0x40b,iVar2 + 0x3c0);
    piVar1 = DAT_2c621070;
    if (*_LAB_2c5c9850 == iStack_14) {
      uVar7 = *(undefined4 *)(iVar2 + 0x3dc);
      iStack_1c = *DAT_2c62106c;
      FUN_2c628c58();
      FUN_2c62c3b0(&puStack_2c,0x10);
      uVar4 = DAT_2c621074;
      puStack_2c = (uint *)0x40c;
      *piVar1 = *piVar1 + 1;
      uStack_20 = uVar7;
      piVar5 = (int *)FUN_2c62ca10(uVar4);
      uVar4 = DAT_2c621074;
      while (piVar5 != (int *)0x0) {
        while (((piVar6 = (int *)FUN_2c62ca20(uVar4,piVar5), (char)piVar5[4] != '\0' ||
                ((uint *)*piVar5 != puStack_2c)) || (piVar5[1] == 0))) {
          piVar5 = piVar6;
          if (piVar6 == (int *)0x0) goto LAB_2c620ff6;
        }
        iStack_28 = piVar5[2];
        uStack_24 = piVar5[3];
        (*(code *)piVar5[1])(piVar5,&puStack_2c);
        piVar5 = piVar6;
      }
LAB_2c620ff6:
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
      if (iVar2 + -1 < 1) {
        iVar2 = FUN_2c62ca10(DAT_2c621074);
        uVar4 = DAT_2c621074;
        while (iVar2 != 0) {
          while (iVar3 = FUN_2c62ca20(uVar4,iVar2), *(char *)(iVar2 + 0x10) == '\0') {
            iVar2 = iVar3;
            if (iVar3 == 0) goto LAB_2c621000;
          }
          FUN_2c62c998(uVar4,iVar2);
          FUN_2c62bea8(iVar2);
          iVar2 = iVar3;
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
    FUN_2c620fa4(0x7d2,*(undefined4 *)(iVar2 + 0x3a4));
    uVar4 = func_0x2c5c9594(*(undefined4 *)(iVar2 + 0x3bc),_LAB_2c5c9854);
    FUN_2c620fa4(0x7d3,uVar4);
    FUN_2c620fa4(0x40a,*(undefined4 *)(iVar2 + 0x3a4));
    FUN_2c620fa4(0x40b,iVar2 + 0x3c0);
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

