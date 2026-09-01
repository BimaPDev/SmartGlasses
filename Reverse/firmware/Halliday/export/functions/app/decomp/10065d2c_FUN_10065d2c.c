/* FUN_10065d2c @ 0x10065d2c */

undefined4 FUN_10065d2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar4 = FUN_1011df5e();
  uVar3 = DAT_10065dbc;
  uVar2 = DAT_10065db8;
  uVar1 = DAT_10065db4;
  for (iVar4 = iVar4 + -2; 0x10 < iVar4; iVar4 = (iVar4 - iVar8) + -0x11) {
    uVar5 = FUN_1011df34(param_1);
    if ((uVar5 & 0xf0) == 0) {
      if (uVar5 == 0) {
        iVar7 = param_1 + 0x30;
        uVar9 = uVar1;
      }
      else {
        iVar7 = param_1 + 0x40;
        uVar9 = uVar2;
      }
    }
    else if ((uVar5 & 0xf) == 0) {
      iVar7 = param_1 + 0x50;
      uVar9 = uVar3;
    }
    else {
      iVar7 = param_1 + 0x60;
      uVar9 = DAT_10065dc0;
    }
    iVar8 = 0;
    FUN_1011e166(param_1,iVar7,0x10);
    pbVar6 = (byte *)(iVar7 + -1);
    do {
      pbVar6 = pbVar6 + 1;
      iVar8 = iVar8 + (uint)*pbVar6;
    } while (pbVar6 != (byte *)(iVar7 + 0xf));
    FUN_1011e166(param_1,uVar9,iVar8,pbVar6,param_4);
  }
  if (iVar4 != 0) {
    FUN_1011dfde(param_1,iVar4);
  }
  return 0;
}

