/* FUN_2c58990c @ 0x2c58990c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58990c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c589a50;
  if (param_2 == 0) {
    iStack_18 = *(int *)(_LAB_2c589a74 + 4);
    uStack_1c = _LAB_2c589a60;
    FUN_2c593c2c(param_1,&uStack_1c,0);
    if (*_LAB_2c589a50 != iStack_14) goto LAB_2c5899fa;
  }
  else {
    iVar1 = FUN_2c66b624(_LAB_2c589a54,param_2,param_3,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(_LAB_2c589a78 + 4);
    }
    else {
      iVar1 = FUN_2c66b624(_LAB_2c589a58,param_2);
      if (iVar1 == 0) {
        iVar1 = *(int *)(_LAB_2c589a64 + 4);
        uVar2 = FUN_2c5c55d8();
        iVar3 = func_0x2c5c5970(uVar2,_LAB_2c589a58);
        if (iVar3 != 0) {
          FUN_2c620fa4(0x400,0);
          uVar2 = FUN_2c5c55d8();
          FUN_2c5c5a38(uVar2,0);
          iVar1 = *(int *)(_LAB_2c589a70 + 4);
        }
        FUN_2c5a2398();
        func_0x2c5a2410();
        iVar3 = FUN_2c5a3660();
        if (iVar3 != 0) {
          FUN_2c5a2398();
          func_0x2c5a2410();
          iVar1 = func_0x2c5a3588();
          if (iVar1 == 1) {
            iVar1 = *(int *)(_LAB_2c589a68 + 4);
          }
          else {
            iVar1 = *(int *)(_LAB_2c589a6c + 4);
          }
        }
        iVar3 = _LAB_2c589a68;
        FUN_2c58934c();
        if (iVar1 == *(int *)(iVar3 + 4)) {
          if (*_LAB_2c589a50 == iStack_14) {
            iStack_14 = _LAB_2c592620;
            iStack_18 = _LAB_2c592624;
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(4,_LAB_2c592628,0x144);
          }
          goto LAB_2c5899fa;
        }
      }
      else {
        uVar2 = FUN_2c5c55d8();
        iVar1 = func_0x2c5c5970(uVar2,param_2);
        if (iVar1 == 0) {
          iVar1 = *(int *)(_LAB_2c589a5c + 4);
        }
        else {
          FUN_2c620fa4(0x400,0);
          uVar2 = FUN_2c5c55d8();
          iVar1 = FUN_2c5c5a38(uVar2,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(_LAB_2c589a7c + 4);
          }
          else {
            iVar1 = *(int *)(_LAB_2c589a70 + 4);
          }
        }
      }
    }
    iStack_18 = iVar1;
    uStack_1c = _LAB_2c589a60;
    FUN_2c593c2c(param_1,&uStack_1c,0);
    if (*_LAB_2c589a50 != iStack_14) {
LAB_2c5899fa:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200,DAT_2c5921fc,*(undefined4 *)(param_1 + 0xc));
}

