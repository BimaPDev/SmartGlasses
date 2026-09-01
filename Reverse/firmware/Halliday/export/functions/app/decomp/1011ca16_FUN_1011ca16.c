/* FUN_1011ca16 @ 0x1011ca16 */

void FUN_1011ca16(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint auStack_2a8 [126];
  undefined1 *local_b0 [2];
  uint auStack_a8 [16];
  undefined1 local_68 [68];
  
  local_b0[0] = local_68;
  local_b0[1] = (undefined1 *)param_2;
  sVar1 = FUN_1011c8d6(param_3,param_4);
  uVar7 = (uint)(short)((short)param_4 * 0x40 - sVar1);
  uVar3 = uVar7;
  if ((int)uVar7 < 0) {
    uVar3 = uVar7 + 0x1f;
  }
  uVar8 = uVar7 & 0x1f;
  if (-1 < (int)-uVar7) {
    uVar8 = -(-uVar7 & 0x1f);
  }
  FUN_1011c88e(auStack_a8,(int)(uVar3 << 0x13) >> 0x18);
  if ((int)uVar8 < 1) {
    FUN_1011c918(auStack_a8 + extraout_r1,param_3,param_4);
  }
  else {
    uVar3 = 0;
    puVar4 = auStack_a8 + extraout_r1;
    for (uVar5 = 0; uVar5 < param_4; uVar5 = uVar5 + 1) {
      uVar6 = *(uint *)(param_3 + uVar5 * 4);
      *puVar4 = uVar3 | uVar6 << (uVar8 & 0xff);
      uVar3 = uVar6 >> (0x20 - uVar8 & 0xff);
      puVar4 = puVar4 + 1;
    }
  }
  uVar3 = 1;
  for (; -1 < (int)uVar7; uVar7 = (uint)(short)((short)uVar7 + -1)) {
    cVar9 = '\0';
    uVar8 = 0;
    while (iVar2 = (int)cVar9, iVar2 < (int)(param_4 << 1)) {
      cVar9 = cVar9 + '\x01';
      uVar5 = *(uint *)(local_b0[uVar3] + iVar2 * 4);
      uVar6 = uVar5 - (auStack_a8[iVar2] + uVar8);
      if (uVar5 != uVar6) {
        uVar8 = (uint)(uVar5 < auStack_a8[iVar2] + uVar8);
      }
      *(uint *)(local_b0[1 - uVar3] + iVar2 * 4) = uVar6;
    }
    uVar3 = (uint)(uVar3 == uVar8);
    FUN_1011c756(auStack_a8,param_4);
    auStack_a8[param_4 - 1] = auStack_a8[param_4 - 1] | auStack_a8[param_4] << 0x1f;
    FUN_1011c756(auStack_a8 + param_4,param_4);
  }
  FUN_1011c918(param_1,local_b0[uVar3],param_4);
  return;
}

