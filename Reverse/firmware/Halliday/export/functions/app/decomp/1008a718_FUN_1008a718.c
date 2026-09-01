/* FUN_1008a718 @ 0x1008a718 */

undefined4 FUN_1008a718(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  undefined4 extraout_r3;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar4 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
  for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 8);
    if (((int)((uint)*(byte *)((int)puVar5 + 7) << 0x1f) < 0) && ((puVar5[1] & 0xffffff) == param_2)
       ) {
      return *puVar5;
    }
  }
  uVar3 = uVar4 + 1 & 0x3f;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar3 << 4);
  iVar1 = FUN_10094280(*(int *)(param_1 + 0xc),uVar3 << 3,DAT_1008a804,uVar3,param_1,param_2,param_3
                       ,param_4);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    uVar8 = FUN_10094174(3,DAT_1008a814,0x22c,DAT_1008a804,DAT_1008a810,DAT_1008a80c,DAT_1008a808);
    FUN_10119dc2(DAT_1008a81c,DAT_1008a818,DAT_1008a814,0x22c,uVar8);
    FUN_10119dc2(DAT_1008a820);
    FUN_1011a1f0(DAT_1008a814,0x22c,extraout_r2,extraout_r3);
  }
  uVar3 = (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4;
  while( true ) {
    uVar3 = uVar3 - 1;
    iVar1 = *(int *)(param_1 + 0xc);
    iVar6 = uVar3 * 8;
    if (uVar3 == 0) break;
    puVar5 = (undefined4 *)(iVar6 + -8 + iVar1);
    if ((*(byte *)((int)puVar5 + 7) & 3) != 0) break;
    uVar2 = puVar5[1];
    *(undefined4 *)(iVar1 + iVar6) = *puVar5;
    ((undefined4 *)(iVar1 + iVar6))[1] = uVar2;
  }
  FUN_10126914(iVar1 + iVar6);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar2 = FUN_10094254(8,DAT_1008a804);
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar7 + uVar3 * 8) = uVar2;
  FUN_1012b1de(*(undefined4 *)(iVar1 + uVar3 * 8));
  iVar1 = *(int *)(param_1 + 0xc);
  iVar6 = iVar6 + iVar1;
  *(byte *)(iVar6 + 7) = *(byte *)(iVar6 + 7) | 1;
  *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) & 0xff000000 | param_2 & 0xffffff;
  return *(undefined4 *)(iVar1 + uVar3 * 8);
}

