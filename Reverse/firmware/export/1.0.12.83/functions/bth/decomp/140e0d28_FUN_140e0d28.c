/* FUN_140e0d28 @ 0x140e0d28 */

uint FUN_140e0d28(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = param_1 + 0x14;
  iVar5 = uVar7 + *(int *)(param_1 + 0x10) * 4;
  iVar4 = *(int *)(iVar5 + -4);
  uVar6 = iVar5 - 4;
  uVar8 = FUN_140e07cc(iVar4);
  iVar1 = (int)uVar8;
  *(int *)((ulonglong)uVar8 >> 0x20) = 0x20 - iVar1;
  if (iVar1 < 0xb) {
    if (uVar7 < uVar6) {
      uVar6 = *(uint *)(iVar5 + -8);
    }
    else {
      uVar6 = 0;
    }
    uVar3 = iVar4 << (iVar1 + 0x15U & 0xff) | uVar6 >> (0xbU - iVar1 & 0xff);
  }
  else {
    if (uVar7 < uVar6) {
      uVar6 = iVar5 - 8;
      uVar3 = *(uint *)(iVar5 + -8);
    }
    else {
      uVar3 = 0;
    }
    uVar2 = iVar1 - 0xb;
    if (uVar2 != 0) {
      if (uVar7 < uVar6) {
        uVar6 = *(uint *)(uVar6 - 4);
      }
      else {
        uVar6 = 0;
      }
      uVar3 = uVar3 << (uVar2 & 0xff) | uVar6 >> (0x20 - uVar2 & 0xff);
    }
  }
  return uVar3;
}

