/* FUN_2c567854 @ 0x2c567854 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c567854(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5678fc;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uStack_24 = *(undefined4 *)(param_2 + 0x20);
  iVar2 = FUN_2c56751c(uVar3,uStack_24,_LAB_2c567900,0);
  if ((iVar2 == 0) || (iVar2 = FUN_2c56751c(uVar3,uStack_24,_LAB_2c567904), iVar2 == 0)) {
    if (*_LAB_2c5678fc == iStack_14) {
      iStack_14 = *_LAB_2c56766c;
      FUN_2c620fa4(0x400,0,0,0);
      uVar3 = FUN_2c5c55d8();
      FUN_2c5c5a38(uVar3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c5678f6:
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar2 = FUN_2c56751c(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),_LAB_2c567908
                      );
  if (iVar2 == 0) {
    uStack_18 = *(undefined4 *)(_LAB_2c56790c + 4);
    iStack_1c = _LAB_2c567910;
    FUN_2c593c2c(param_1,&iStack_1c,0);
    if (*_LAB_2c5678fc == iStack_14) {
      uStack_18 = DAT_2c592548;
      iStack_14 = DAT_2c592544;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c59254c,0x12f);
    }
    goto LAB_2c5678f6;
  }
  if (*_LAB_2c5678fc != iStack_14) goto LAB_2c5678f6;
  iVar2 = *(int *)(param_2 + 0x68);
  iStack_1c = *_LAB_2c567824;
  if (iVar2 == 0) {
    iStack_20 = *(int *)(_LAB_2c567848 + 4);
    uStack_24 = _LAB_2c56783c;
    FUN_2c5931e0(param_1,&uStack_24,*(undefined4 *)(param_2 + 0x4c),0);
    if (*_LAB_2c567824 != iStack_1c) goto LAB_2c5677ae;
  }
  else {
    iVar1 = FUN_2c66b624(_LAB_2c567828,iVar2,0,0);
    if (iVar1 == 0) {
      iStack_20 = *(int *)(_LAB_2c56784c + 4);
      uStack_24 = _LAB_2c56783c;
      FUN_2c593c2c(param_1,&uStack_24,0);
      if (*_LAB_2c567824 != iStack_1c) goto LAB_2c5677ae;
      goto FUN_2c5921a0;
    }
    iVar2 = FUN_2c66b624(_LAB_2c56782c,iVar2);
    if (iVar2 == 0) {
      iVar1 = *(int *)(_LAB_2c567834 + 4);
      uVar3 = FUN_2c5c55d8();
      iVar2 = func_0x2c5c5970(uVar3,_LAB_2c56782c);
      if (iVar2 != 0) {
        FUN_2c620fa4(0x400,0);
        uVar3 = FUN_2c5c55d8();
        FUN_2c5c5a38(uVar3,0);
        iVar1 = *(int *)(_LAB_2c567844 + 4);
      }
      FUN_2c5a2398();
      func_0x2c5a2410();
      iVar2 = FUN_2c5a3660();
      if (iVar2 != 0) {
        FUN_2c5a2398();
        func_0x2c5a2410();
        iVar2 = func_0x2c5a3588();
        if (iVar2 == 1) {
          iVar1 = *(int *)(_LAB_2c567838 + 4);
        }
        else {
          iVar1 = *(int *)(_LAB_2c567840 + 4);
        }
      }
      iVar2 = _LAB_2c567838;
      FUN_2c567400();
      if (iVar1 == *(int *)(iVar2 + 4)) {
        if (*_LAB_2c567824 == iStack_1c) {
          iStack_14 = _LAB_2c592620;
          uStack_18 = _LAB_2c592624;
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c592628,0x144);
        }
        goto LAB_2c5677ae;
      }
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      iStack_20 = iVar1;
    }
    else {
      uVar3 = FUN_2c5c55d8();
      iVar2 = func_0x2c5c5970(uVar3,*(undefined4 *)(param_2 + 0x68));
      if (iVar2 == 0) {
        iVar2 = *(int *)(_LAB_2c567830 + 4);
      }
      else {
        FUN_2c620fa4(0x400,0);
        uVar3 = FUN_2c5c55d8();
        iVar2 = FUN_2c5c5a38(uVar3,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(_LAB_2c567850 + 4);
        }
        else {
          iVar2 = *(int *)(_LAB_2c567844 + 4);
        }
      }
      iVar1 = func_0x2c5924c4(param_1);
      if ((iVar1 != 0) && (iVar1 = func_0x2c5922b4(param_1), iVar1 != 1)) {
        if (*_LAB_2c567824 == iStack_1c) {
          return;
        }
        goto LAB_2c5677ae;
      }
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      iStack_20 = iVar2;
    }
    uStack_24 = _LAB_2c56783c;
    FUN_2c5931e0(param_1,&uStack_24,uVar3,0);
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

