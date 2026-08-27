/* FUN_2c64895c @ 0x2c64895c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64895c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *DAT_2c648a58;
  if (param_1 < 3) {
    uVar4 = _DAT_2c648a64;
    if (*DAT_2c648a58 != iStack_1c) goto LAB_2c648a52;
  }
  else {
    uVar3 = FUN_2c6684cc(*(undefined4 *)(param_2 + 4),param_2,param_3,0);
    uVar5 = (uint)((ulonglong)_LAB_2c648a5c * (ulonglong)uVar3 >> 0x23);
    uVar6 = uVar3 + uVar5 * -10;
    if (uVar6 < 8) {
      uVar6 = uVar6 + uVar5 * 8;
      if (uVar6 < 0x51) {
        uVar5 = FUN_2c6684cc(*(undefined4 *)(param_2 + 8));
        if (uVar5 < 2) {
          uStack_20 = (undefined1 *)(uint)CONCAT11(1,(char)uVar6);
          FUN_2c673bc8(&uStack_20,1);
          FUN_2c4c0248((uint)uStack_20 & 0xff,1,uVar5 & 0xff);
          uVar4 = FUN_2c648600(DAT_2c648a60,uVar3,uVar5);
          if (*DAT_2c648a58 == iStack_1c) {
            return uVar4;
          }
          goto LAB_2c648a52;
        }
        uVar4 = _LAB_2c648a6c;
        if (*DAT_2c648a58 != iStack_1c) goto LAB_2c648a52;
        goto code_r0x2c648600;
      }
      iVar1 = *DAT_2c648a58;
      uVar4 = _DAT_2c648a68;
    }
    else {
      iVar1 = *DAT_2c648a58;
      uVar4 = _LAB_2c648a70;
    }
    if (iVar1 != iStack_1c) {
LAB_2c648a52:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
code_r0x2c648600:
  iStack_1c = *DAT_2c648674;
  uStack_20 = &stack0xfffffff4;
  iVar1 = FUN_2c66de7c(_LAB_2c648678,0x800,uVar4);
  if (-1 < iVar1) {
    if (iVar1 < 0x7ff) {
      if (iVar1 == 0) goto LAB_2c648630;
    }
    else {
      iVar1 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar2 = (code *)FUN_2c648328();
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(_LAB_2c648678,iVar1);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar1);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iStack_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

