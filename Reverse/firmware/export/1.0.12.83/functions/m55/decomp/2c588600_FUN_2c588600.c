/* FUN_2c588600 @ 0x2c588600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c588600(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar3 = *(undefined4 *)(param_2 + 4);
  iStack_14 = *_LAB_2c5886f8;
  iVar1 = FUN_2c66b624(_LAB_2c5886fc,uVar3,param_3,0);
  if (iVar1 == 0) {
    uVar3 = FUN_2c5c55d8(0,uVar3);
    iVar1 = func_0x2c5c5970(uVar3,_LAB_2c58870c);
    if (iVar1 == 0) {
      uStack_18 = *(undefined4 *)(_LAB_2c588720 + 4);
      uStack_1c = _LAB_2c588708;
      FUN_2c593c2c(param_1,&uStack_1c,0);
    }
    else {
      uStack_18 = *(undefined4 *)(_LAB_2c588718 + 4);
      uStack_1c = _LAB_2c588708;
      FUN_2c593c2c(param_1,&uStack_1c,0);
      FUN_2c620fa4(0x400,0);
      uVar3 = FUN_2c5c55d8();
      FUN_2c5c5a38(uVar3,0);
    }
  }
  else {
    iVar2 = FUN_2c66b624(_LAB_2c588700);
    iVar1 = _LAB_2c588704;
    if (iVar2 == 0) {
      uVar3 = FUN_2c5c55d8();
      iVar2 = func_0x2c5c5970(uVar3,_LAB_2c58870c);
      iVar1 = _LAB_2c58871c;
      if (iVar2 == 0) {
        FUN_2c5924fc(param_1,_LAB_2c588710);
        FUN_2c512ba4();
        uStack_18 = *(undefined4 *)(_LAB_2c588714 + 4);
        uStack_1c = _LAB_2c588708;
        FUN_2c593c2c(param_1,&uStack_1c,0);
        if (*_LAB_2c5886f8 == iStack_14) {
          uStack_18 = *(undefined4 *)(param_1 + 0xc);
          iStack_14 = 1;
          uStack_1c = _LAB_2c592298;
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c5922a0,0xc9,_LAB_2c592298,_LAB_2c59229c);
        }
        goto LAB_2c5886f4;
      }
    }
    uStack_18 = *(undefined4 *)(iVar1 + 4);
    uStack_1c = _LAB_2c588708;
    FUN_2c593c2c(param_1,&uStack_1c,0);
  }
  if (*_LAB_2c5886f8 == iStack_14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200,DAT_2c5921fc,*(undefined4 *)(param_1 + 0xc));
  }
LAB_2c5886f4:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

