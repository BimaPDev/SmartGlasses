/* FUN_10059e2c @ 0x10059e2c */

void FUN_10059e2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar2 = DAT_10059f1c;
  iVar1 = DAT_10059f18;
  if (param_2 == 0) {
    return;
  }
  iVar7 = 0;
  while ((int)((uint)*(byte *)((uint)*(byte *)(param_2 + iVar7) + DAT_10059f18) << 0x1c) < 0) {
    iVar7 = iVar7 + 1;
  }
  while( true ) {
    uVar3 = FUN_1011ea10(param_2);
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x2a);
    uVar6 = uVar5 - param_3;
    pbVar9 = (byte *)(param_2 + iVar7);
    if ((uint)uVar3 - iVar7 <= uVar6) break;
    uVar8 = 0;
    pbVar4 = pbVar9;
    while( true ) {
      if ((((*(byte *)(iVar1 + (uint)*pbVar4) & 8) != 0) && (uVar6 = uVar8, *pbVar4 == 10)) ||
         (uVar5 <= param_3 + uVar8)) break;
      uVar8 = uVar8 + 1;
      pbVar4 = pbVar4 + 1;
    }
    FUN_1011aca2(*(undefined4 *)(param_1 + 0x14));
    FUN_100597f8(param_1,pbVar9,uVar6);
    iVar7 = iVar7 + uVar6;
    while ((int)((uint)*(byte *)(iVar1 + (uint)*(byte *)(param_2 + iVar7)) << 0x1c) < 0) {
      iVar7 = iVar7 + 1;
    }
    FUN_1011b14c(*(undefined4 *)(param_1 + 0x14),uVar2);
    FUN_100596dc(param_1,param_3);
  }
  uVar6 = 0;
  pbVar4 = pbVar9;
  do {
    if ((uint)uVar3 - iVar7 == uVar6) {
LAB_10059ec6:
      FUN_1011b14c(*(undefined4 *)(param_1 + 0x14),param_2 + iVar7);
      FUN_1011b14c(*(undefined4 *)(param_1 + 0x14),DAT_10059f1c);
      return;
    }
    if (*pbVar4 == 10) {
      FUN_1011aca2(*(undefined4 *)(param_1 + 0x14));
      FUN_100597f8(param_1,pbVar9,uVar6);
      FUN_1011b14c(*(undefined4 *)(param_1 + 0x14),DAT_10059f1c);
      iVar7 = iVar7 + uVar6 + 1;
      FUN_100596dc(param_1,param_3);
      goto LAB_10059ec6;
    }
    uVar6 = uVar6 + 1;
    pbVar4 = pbVar4 + 1;
  } while( true );
}

