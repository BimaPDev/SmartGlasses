/* FUN_1006ef14 @ 0x1006ef14 */

undefined4
FUN_1006ef14(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
            undefined4 param_6,uint param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_24;
  undefined3 uStack_23;
  uint uStack_20;
  
  iVar2 = DAT_1006ef94;
  param_4 = param_4 + param_8 + (uint)CARRY4(param_3,param_7);
  bVar8 = param_4 == 0;
  if (param_4 == 0) {
    bVar8 = param_3 + param_7 < 0x4001;
  }
  if (bVar8) {
    uVar6 = 0;
    _local_24 = CONCAT31((int3)((uint)param_2 >> 8),0xff);
    iVar7 = DAT_1006ef94 + param_3;
    uStack_20 = param_3;
    while( true ) {
      bVar8 = param_8 == 0;
      if (param_8 == 0) {
        bVar8 = param_7 <= uVar6;
      }
      if (bVar8) {
        uVar6 = 0;
        pbVar5 = (byte *)(param_3 + iVar2);
        while( true ) {
          bVar8 = param_8 == 0;
          if (param_8 == 0) {
            bVar8 = param_7 <= uVar6;
          }
          if (bVar8) break;
          pbVar1 = (byte *)(param_5 + uVar6);
          uVar6 = uVar6 + 1;
          *pbVar5 = *pbVar5 & *pbVar1;
          pbVar5 = pbVar5 + 1;
        }
        return 0;
      }
      iVar3 = FUN_1011ea30(&local_24,iVar7 + uVar6,1,0,param_1);
      if (iVar3 != 0) break;
      uVar6 = uVar6 + 1;
    }
    uVar4 = 0xfffffffb;
  }
  else {
    uVar4 = 0xffffffea;
  }
  return uVar4;
}

