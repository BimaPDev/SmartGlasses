/* FUN_2c4f0618 @ 0x2c4f0618 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f0618(int param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined1 auStack_34 [2];
  undefined2 uStack_32;
  int iStack_30;
  int iStack_2c;
  
  pbVar2 = _LAB_2c4f06d4;
  uVar7 = (uint)((ulonglong)_LAB_2c4f06cc * (ulonglong)param_2 >> 0x20);
  iStack_2c = *DAT_2c4f06d0;
  if ((uint)((ulonglong)_LAB_2c4f06cc * (ulonglong)param_4 >> 0x27) != uVar7 >> 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f06e0,_LAB_2c4f06e4,param_2);
  }
  uVar6 = 0;
  uStack_38 = 0;
  uStack_36 = 0x39;
  if (0x3b < param_2) {
    uVar4 = (uint)*_LAB_2c4f06d4;
    iVar5 = param_1 + 2;
    do {
      iVar3 = DAT_2c4f06d8;
      *(undefined1 *)(iVar5 + -2) = 1;
      uVar6 = uVar6 + 1;
      uVar1 = *(undefined1 *)(iVar3 + uVar4);
      *(undefined1 *)(iVar5 + 0x39) = 0;
      *(undefined1 *)(iVar5 + -1) = uVar1;
      uStack_32 = 0xf0;
      iStack_30 = param_3;
      FUN_2c4ca92c(*DAT_2c4f06dc,auStack_34,&uStack_38,iVar5,&uStack_36,0xffff);
      uVar4 = *pbVar2 + 1 & 3;
      *pbVar2 = (byte)uVar4;
      iVar5 = iVar5 + 0x3c;
      param_3 = param_3 + 0xf0;
    } while (uVar6 < uVar7 >> 5);
  }
  if (*DAT_2c4f06d0 == iStack_2c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

