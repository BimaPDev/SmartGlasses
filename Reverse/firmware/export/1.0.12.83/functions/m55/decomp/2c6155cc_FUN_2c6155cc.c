/* FUN_2c6155cc @ 0x2c6155cc */

void FUN_2c6155cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  
  FUN_2c635ec0(*(undefined4 *)(param_1 + 0x24),0xc000);
  uVar5 = (uint)*(char *)(param_1 + 0x2e);
  uVar1 = (uint)*(ushort *)(param_1 + 0x2c);
  if (uVar5 < 3) {
    iVar4 = 0xc;
  }
  else {
    iVar4 = 0;
  }
  uVar2 = uVar1 - (uVar5 < 3);
  uVar3 = (uint)((ulonglong)DAT_2c6156b4 * (ulonglong)uVar2 >> 0x20);
  uVar5 = (uVar2 + 1 + (uVar2 >> 2) + (uVar3 >> 7) +
          (uint)((ulonglong)DAT_2c6156ac * (ulonglong)((iVar4 + uVar5) * 0x1f - 0x3e) >> 0x23)) -
          (uVar3 >> 5);
  iVar8 = (int)((ulonglong)DAT_2c6156b0 * (ulonglong)uVar5 >> 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar8 = uVar5 + (iVar8 + (uVar5 - iVar8 >> 1) >> 2) * -7;
  if ((iVar4 != 0) && (uVar9 = *(ushort *)(param_1 + 0x34), uVar9 != 0)) {
    uVar7 = 0;
    while( true ) {
      uVar5 = (uint)uVar7;
      uVar7 = uVar7 + 1;
      iVar6 = iVar4 + uVar5 * 4;
      if ((*(ushort *)(iVar4 + uVar5 * 4) == uVar1) &&
         (*(char *)(iVar6 + 2) == *(char *)(param_1 + 0x2e))) {
        FUN_2c635e10(*(undefined4 *)(param_1 + 0x24),(int)*(char *)(iVar6 + 3) + iVar8 + 6 & 0xffff,
                     0x8000);
        uVar9 = *(ushort *)(param_1 + 0x34);
      }
      if (uVar9 <= uVar7) break;
      iVar4 = *(int *)(param_1 + 0x30);
      uVar1 = (uint)*(ushort *)(param_1 + 0x2c);
    }
  }
  if ((*(uint *)(param_1 + 0x2c) & 0xffffff) == (*(uint *)(param_1 + 0x28) & 0xffffff)) {
    FUN_2c635e10(*(undefined4 *)(param_1 + 0x24),*(char *)(param_1 + 0x2b) + 6 + iVar8 & 0xffff,
                 0x4000,param_4);
    return;
  }
  return;
}

