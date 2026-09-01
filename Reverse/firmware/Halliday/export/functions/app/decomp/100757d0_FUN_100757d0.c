/* FUN_100757d0 @ 0x100757d0 */

void FUN_100757d0(undefined4 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar6 = (uint *)*param_1;
  uVar8 = (uint)*(byte *)((int)param_1 + 0x1a);
  uVar7 = (uint)*(byte *)((int)param_1 + 0x19);
  uVar3 = (uVar7 & 0xf) >> 2;
  uVar4 = (uVar8 & 3) << 0x15;
  uVar5 = *puVar6 & 0xffffffc1 | uVar4;
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 == 2) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
  }
  if ((*(byte *)(param_1 + 6) & 0x3c) != 8) {
    uVar4 = *puVar6 & 0xffe1ffc1 | uVar4;
    if ((*(byte *)(param_1 + 6) & 0x3c) == 0x20) {
      uVar4 = uVar4 | 0x100000;
    }
    if ((int)(uVar7 << 0x1b) < 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar5 = uVar4 | ((uVar7 & 0x7f) >> 5) << 0x11;
    uVar3 = 3;
  }
  uVar5 = iVar2 << 4 | uVar3 << 1 | uVar5;
  if (*(char *)((int)param_1 + 0x19) < '\0') {
    uVar5 = uVar5 | 8;
  }
  *puVar6 = uVar5;
  if (param_3 != 0) {
    if ((int)(uVar8 << 0x1d) < 0) {
      *puVar6 = *puVar6 | ((uVar8 & 0x3f) >> 4) << 0x18;
      *puVar6 = *puVar6 | 0x40;
      puVar1 = DAT_10075898;
      if ((int)(uVar8 << 0x1c) < 0) {
        *puVar6 = *puVar6 | 0x4000000;
        uVar4 = *puVar1 | 0x1000000;
      }
      else {
        uVar4 = *DAT_10075898 | 0x1800000;
      }
      *puVar1 = uVar4;
    }
    else {
      *puVar6 = *puVar6 | 1;
    }
  }
  FUN_10119dc2(DAT_1007589c,DAT_100758a0,0x303,uVar5,*puVar6,param_3);
  return;
}

