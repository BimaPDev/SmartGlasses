/* FUN_2c567690 @ 0x2c567690 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c567690(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar3 = *(int *)(param_2 + 0x68);
  iStack_1c = *_LAB_2c567824;
  if (iVar3 == 0) {
    iStack_20 = *(int *)(_LAB_2c567848 + 4);
    uStack_24 = _LAB_2c56783c;
    FUN_2c5931e0(param_1,&uStack_24,*(undefined4 *)(param_2 + 0x4c),0);
    if (*_LAB_2c567824 != iStack_1c) goto LAB_2c5677ae;
  }
  else {
    iVar1 = FUN_2c66b624(_LAB_2c567828,iVar3,param_3,0);
    if (iVar1 == 0) {
      iStack_20 = *(int *)(_LAB_2c56784c + 4);
      uStack_24 = _LAB_2c56783c;
      FUN_2c593c2c(param_1,&uStack_24,0);
      if (*_LAB_2c567824 != iStack_1c) goto LAB_2c5677ae;
      goto FUN_2c5921a0;
    }
    iVar3 = FUN_2c66b624(_LAB_2c56782c,iVar3);
    if (iVar3 == 0) {
      iVar1 = *(int *)(_LAB_2c567834 + 4);
      uVar2 = FUN_2c5c55d8();
      iVar3 = func_0x2c5c5970(uVar2,_LAB_2c56782c);
      if (iVar3 != 0) {
        FUN_2c620fa4(0x400,0);
        uVar2 = FUN_2c5c55d8();
        FUN_2c5c5a38(uVar2,0);
        iVar1 = *(int *)(_LAB_2c567844 + 4);
      }
      FUN_2c5a2398();
      func_0x2c5a2410();
      iVar3 = FUN_2c5a3660();
      if (iVar3 != 0) {
        FUN_2c5a2398();
        func_0x2c5a2410();
        iVar3 = func_0x2c5a3588();
        if (iVar3 == 1) {
          iVar1 = *(int *)(_LAB_2c567838 + 4);
        }
        else {
          iVar1 = *(int *)(_LAB_2c567840 + 4);
        }
      }
      iVar3 = _LAB_2c567838;
      FUN_2c567400();
      if (iVar1 == *(int *)(iVar3 + 4)) {
        if (*_LAB_2c567824 == iStack_1c) {
          uStack_18 = _LAB_2c592624;
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c592628,0x144);
        }
        goto LAB_2c5677ae;
      }
      uVar2 = *(undefined4 *)(param_2 + 0x4c);
      iStack_20 = iVar1;
    }
    else {
      uVar2 = FUN_2c5c55d8();
      iVar3 = func_0x2c5c5970(uVar2,*(undefined4 *)(param_2 + 0x68));
      if (iVar3 == 0) {
        iVar3 = *(int *)(_LAB_2c567830 + 4);
      }
      else {
        FUN_2c620fa4(0x400,0);
        uVar2 = FUN_2c5c55d8();
        iVar3 = FUN_2c5c5a38(uVar2,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(_LAB_2c567850 + 4);
        }
        else {
          iVar3 = *(int *)(_LAB_2c567844 + 4);
        }
      }
      iVar1 = func_0x2c5924c4(param_1);
      if ((iVar1 != 0) && (iVar1 = func_0x2c5922b4(param_1), iVar1 != 1)) {
        if (*_LAB_2c567824 == iStack_1c) {
          return;
        }
        goto LAB_2c5677ae;
      }
      uVar2 = *(undefined4 *)(param_2 + 0x4c);
      iStack_20 = iVar3;
    }
    uStack_24 = _LAB_2c56783c;
    FUN_2c5931e0(param_1,&uStack_24,uVar2,0);
    if (*_LAB_2c567824 != iStack_1c) {
LAB_2c5677ae:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
FUN_2c5921a0:
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200,DAT_2c5921fc);
}

