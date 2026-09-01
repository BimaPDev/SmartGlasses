/* FUN_100e0874 @ 0x100e0874 */

byte * FUN_100e0874(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined3 uStack_2c;
  
  pbVar2 = DAT_100e0968;
  uVar5 = (*DAT_100e0964 & 0x7ff) >> 7;
  uVar8 = 0;
  uVar4 = uVar5;
  pbVar7 = DAT_100e0968;
  while( true ) {
    if ((int)uVar5 <= (int)uVar8) {
      if (uVar5 == uVar4) {
        pbVar7 = pbVar2;
        pbVar6 = DAT_100e0968;
        for (iVar3 = 1; iVar3 < (int)uVar5; iVar3 = iVar3 + 1) {
          puVar1 = (uint *)(pbVar7 + 0xbc);
          pbVar7 = pbVar7 + 0x60;
          if (*puVar1 < *(uint *)(pbVar6 + 0x5c)) {
            pbVar6 = pbVar7;
          }
        }
        FUN_10137fb6(auStack_38,pbVar6 + 1);
        FUN_100c6e08(*pbVar6,auStack_38);
        local_30 = 0;
        uStack_2c = 0;
        iVar3 = FUN_1011ea30(pbVar6 + 1,&local_30,7);
        if (iVar3 == 0) {
          uVar4 = ((int)pbVar6 - (int)pbVar2 >> 5) * DAT_100e096c;
        }
      }
      if (uVar4 < uVar5) {
        iVar3 = uVar4 * 0x60;
        pbVar7 = pbVar2 + iVar3;
        pbVar2[iVar3] = (byte)param_1;
        FUN_10137fb6(pbVar2 + iVar3 + 1,param_2);
        iVar3 = *DAT_100e0970;
        *DAT_100e0970 = iVar3 + 1;
        *(int *)(pbVar7 + 0x5c) = iVar3 + 1;
        *DAT_100e0974 = pbVar7;
      }
      else {
        pbVar7 = (byte *)0x0;
      }
      return pbVar7;
    }
    if ((*pbVar7 == param_1) && (iVar3 = FUN_1011ea30(pbVar7 + 1,param_2,7), iVar3 == 0)) break;
    if (uVar5 == uVar4) {
      local_30 = 0;
      uStack_2c = 0;
      iVar3 = FUN_1011ea30(pbVar7 + 1,&local_30,7);
      uVar4 = uVar5;
      if (iVar3 == 0) {
        uVar4 = uVar8;
      }
    }
    uVar8 = uVar8 + 1;
    pbVar7 = pbVar7 + 0x60;
  }
  return pbVar2 + uVar8 * 0x60;
}

