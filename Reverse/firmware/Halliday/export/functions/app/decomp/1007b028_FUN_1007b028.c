/* FUN_1007b028 @ 0x1007b028 */

undefined4 FUN_1007b028(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_18;
  uint local_14;
  
  puVar9 = *(undefined4 **)(param_1 + 4);
  piVar7 = *(int **)(param_1 + 0x10);
  local_18 = 0;
  local_14 = param_2 & 0xffff0000;
  iVar2 = FUN_10112e84(*puVar9);
  iVar1 = DAT_1007b144;
  iVar4 = DAT_1007b140;
  *piVar7 = iVar2;
  uVar8 = (iVar4 - iVar1) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_1007b148 | uVar8,DAT_1007b150,DAT_1007b14c);
    uVar3 = 0xffffffed;
  }
  else {
    FUN_100a5b78(DAT_1007b154 | uVar8,DAT_1007b150,DAT_1007b158);
    local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xe0 | *(byte *)(puVar9 + 1) & 0x1f);
    iVar4 = FUN_1011fe0a(*piVar7,&local_18);
    if (iVar4 == 0) {
      FUN_100a5b78(uVar8 | 0x5300031,DAT_1007b150,DAT_1007b164);
      local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xe0 | *(byte *)((int)puVar9 + 5) & 0x1f);
      iVar4 = FUN_1011fe0a(*piVar7,&local_18);
      if (iVar4 == 0) {
        FUN_100a5b78(DAT_1007b16c | uVar8,DAT_1007b150,DAT_1007b170);
        local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xe0 | *(byte *)((int)puVar9 + 6) & 0x1f
                           );
        iVar4 = FUN_1011fe0a(*piVar7,&local_18);
        if (iVar4 == 0) {
          piVar7[2] = 1 << *(sbyte *)(puVar9 + 1);
          piVar7[3] = (int)(piVar7 + 0x10);
          piVar7[4] = 2;
          piVar7[7] = 1 << *(sbyte *)((int)puVar9 + 5);
          piVar7[8] = (int)piVar7 + 0x42;
          piVar7[9] = 2;
          piVar7[0xc] = 1 << *(sbyte *)((int)puVar9 + 6);
          piVar7[0xd] = (int)(piVar7 + 0x11);
          piVar7[0xe] = 2;
          return 0;
        }
        uVar6 = local_14 & 0x1f;
        uVar5 = DAT_1007b174;
      }
      else {
        uVar6 = local_14 & 0x1f;
        uVar5 = DAT_1007b168;
      }
    }
    else {
      uVar6 = local_14 & 0x1f;
      uVar5 = DAT_1007b160;
    }
    FUN_100a5b78(uVar5 | uVar8,DAT_1007b150,DAT_1007b15c,uVar6);
    uVar3 = 0xfffffff2;
  }
  return uVar3;
}

