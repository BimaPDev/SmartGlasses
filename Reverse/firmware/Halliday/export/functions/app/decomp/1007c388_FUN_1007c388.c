/* FUN_1007c388 @ 0x1007c388 */

uint FUN_1007c388(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  uint uVar7;
  undefined8 uVar8;
  
  iVar2 = FUN_1007b1a4();
  if ((iVar2 < 0) || (iVar3 = FUN_1007b2e4(), iVar3 < 0)) {
    uVar7 = 0xff;
  }
  else {
    uVar4 = FUN_1011fea2(iVar2);
    uVar7 = FUN_1011a86a();
    iVar2 = DAT_1007c400;
    pbVar1 = (byte *)(DAT_1007c400 + 0x168);
    *(short *)(DAT_1007c400 + 0x148) = (short)uVar4;
    if (*pbVar1 != uVar7) {
      *(char *)(iVar2 + 0x168) = (char)uVar7;
      uVar5 = FUN_1011a86a();
      uVar8 = FUN_1007a860(uVar7);
      uVar6 = FUN_1011feb0(iVar3,(int)((ulonglong)uVar8 >> 0x20),(int)uVar8);
      FUN_100a5b78(((int)PTR_DAT_1007c404 - (int)PTR_DAT_1007c408) * 0x20 & 0xff00U | 0x1d20034,
                   PTR_s_get_dc5v_current_state_1007c410,
                   PTR_s_dc5v__dmv_bat__dmv_dc5v_det__d_<_1007c40c,uVar4,uVar6,uVar5,extraout_r2);
    }
  }
  return uVar7;
}

