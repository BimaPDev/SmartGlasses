/* FUN_2c648c70 @ 0x2c648c70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c648c70(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_14 = *_LAB_2c648d3c;
  if (param_1 < 2) {
    uStack_10 = _LAB_2c648d48;
    if (*_LAB_2c648d3c != iStack_14) goto LAB_2c648d38;
  }
  else {
    uVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 4),param_2,param_3,0);
    uVar6 = (uint)((ulonglong)_LAB_2c648d40 * (ulonglong)uVar2 >> 0x23);
    uVar7 = uVar2 + uVar6 * -10;
    if (uVar7 < 8) {
      uVar6 = uVar7 + 0x53 + uVar6 * 8;
      if (uVar6 < 0x90) {
        uStack_18 = (uint)CONCAT11(1,(char)uVar6);
        FUN_2c673bc8(&uStack_18);
        uVar3 = FUN_2c4c02f4(uVar6 & 0xff);
        uVar3 = FUN_2c648600(_LAB_2c648d44,uVar2,uVar3);
        if (*_LAB_2c648d3c == iStack_14) {
          return uVar3;
        }
        goto LAB_2c648d38;
      }
      iVar5 = *_LAB_2c648d3c;
      uStack_10 = _DAT_2c648d4c;
    }
    else {
      iVar5 = *_LAB_2c648d3c;
      uStack_10 = _LAB_2c648d50;
    }
    if (iVar5 != iStack_14) {
LAB_2c648d38:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  iVar4 = *DAT_2c648674;
  iVar5 = FUN_2c66de7c(_LAB_2c648678,0x800,uStack_10,&stack0xfffffff4,&stack0xfffffff4);
  if (-1 < iVar5) {
    if (iVar5 < 0x7ff) {
      if (iVar5 == 0) goto LAB_2c648630;
    }
    else {
      iVar5 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar1 = (code *)FUN_2c648328();
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(_LAB_2c648678,iVar5);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar5);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar4) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

