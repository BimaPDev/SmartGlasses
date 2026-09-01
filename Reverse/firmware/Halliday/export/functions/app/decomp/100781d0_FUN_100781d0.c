/* FUN_100781d0 @ 0x100781d0 */

undefined4 FUN_100781d0(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 local_24;
  
  uVar9 = 0;
  local_24 = 0;
  iVar4 = FUN_10112e84(PTR_s_I2C_3_100782b8);
  if (iVar4 == 0) {
    FUN_100a5b78(DAT_100782c4 | ((int)PTR_DAT_100782c0 - (int)PTR_DAT_100782bc) * 0x20 & 0xff00U,
                 DAT_100782cc,DAT_100782c8);
    uVar5 = 0xffffffff;
  }
  else {
    *DAT_100782d0 = param_1;
    if (param_1 < 0) {
      uVar8 = (499 - param_1) / 500;
      iVar7 = -param_1;
      if (uVar8 <= *DAT_100782d4) {
        uVar9 = *DAT_100782d4 - uVar8;
      }
    }
    else {
      uVar9 = (param_1 + 499) / 500;
      iVar7 = param_1;
      if (uVar9 < 0x41) {
        uVar9 = *DAT_100782d4 + uVar9;
      }
      else {
        uVar9 = 0xff;
      }
    }
    FUN_10119dc2(DAT_100782d8,iVar7,uVar9);
    uVar9 = (uVar9 & 0xffff) / 9 & 0xff;
    bVar1 = 0xe < uVar9;
    iVar6 = FUN_1000f6f0();
    pcVar3 = DAT_100782e0;
    iVar7 = DAT_100782e8;
    if (iVar6 != 0) {
      iVar7 = DAT_100782dc;
    }
    uVar2 = *(undefined1 *)(iVar7 + uVar9);
    if ((bool)*DAT_100782e0 != bVar1) {
      *DAT_100782e0 = bVar1;
      FUN_10077e14(0);
      FUN_10077e14(1);
    }
    local_24 = CONCAT11(uVar2,0x14);
    FUN_1011fa42(iVar4,&local_24,2);
    FUN_10119dc2(DAT_100782e4,param_1,uVar9,uVar2,bVar1,*pcVar3);
    uVar5 = 0;
  }
  return uVar5;
}

