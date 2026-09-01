/* FUN_10122840 @ 0x10122840 */

undefined4 FUN_10122840(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  uVar4 = (uint)*pbVar5;
  if (uVar4 == 4) {
    uVar3 = 0x10000000;
  }
  else {
    uVar3 = 0x200000;
  }
  if (uVar3 <= param_2) {
    return 2;
  }
  if ((param_2 & 0x1f) != 0) {
    return 2;
  }
  uVar3 = param_1[2];
  param_1[0xc] = param_2;
  if (uVar3 == 0) {
    if (2 < uVar4) {
      uVar3 = *(uint *)(pbVar5 + 0x44);
      *(undefined1 *)((int)param_1 + 7) = 0;
      uVar4 = uVar3;
      if (uVar3 != 0) goto LAB_1012289e;
    }
    if ((uint)*(ushort *)(pbVar5 + 8) <= param_2 >> 5) {
      return 2;
    }
    param_1[0xe] = *(undefined4 *)(pbVar5 + 0x44);
    uVar2 = 0;
  }
  else {
LAB_1012289e:
    uVar1 = *(ushort *)(pbVar5 + 10);
    for (; (uint)uVar1 * 0x200 <= param_2; param_2 = param_2 + (uint)uVar1 * -0x200) {
      uVar3 = FUN_1012270e(param_1,uVar3,uVar3,uVar4,param_4);
      if (uVar3 == 0xffffffff) {
        return 1;
      }
      if (uVar3 < 2) {
        return 2;
      }
      uVar4 = *(uint *)(pbVar5 + 0x34);
      if (uVar4 <= uVar3) {
        return 2;
      }
    }
    uVar2 = FUN_101222f0(pbVar5);
    param_1[0xe] = uVar2;
    uVar2 = extraout_r2;
  }
  param_1[0xd] = uVar2;
  if (param_1[0xe] == 0) {
    return 2;
  }
  param_1[0xe] = param_1[0xe] + (param_2 >> 9);
  param_1[0xf] = pbVar5 + (param_2 & 0x1ff) + 0x50;
  return 0;
}

