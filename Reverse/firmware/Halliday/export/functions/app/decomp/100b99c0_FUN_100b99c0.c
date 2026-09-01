/* FUN_100b99c0 @ 0x100b99c0 */

undefined4 FUN_100b99c0(ushort *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte local_11;
  
  iVar2 = DAT_100b9a30;
  uVar5 = *(uint *)(DAT_100b9a30 + 8);
  if (uVar5 < 0x1000000) {
    piVar1 = (int *)(DAT_100b9a30 + 0xc);
    *(uint *)(DAT_100b9a30 + 8) = uVar5 << 8;
    *(int *)(iVar2 + 0xc) = *piVar1 << 8;
    FUN_100b940c(&local_11);
    uVar5 = *(uint *)(iVar2 + 8);
    uVar4 = (uint)*param_1;
    uVar6 = (uint)local_11 | *(uint *)(iVar2 + 0xc);
    uVar3 = uVar4 * (uVar5 >> 0xb);
    *(uint *)(iVar2 + 0xc) = uVar6;
    if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) goto LAB_100b9a1c;
  }
  else {
    uVar4 = (uint)*param_1;
    uVar3 = uVar4 * (uVar5 >> 0xb);
    uVar6 = *(uint *)(DAT_100b9a30 + 0xc);
    if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
LAB_100b9a1c:
      *(uint *)(iVar2 + 8) = uVar3;
      *param_1 = (short)uVar4 + (short)((int)(0x800 - uVar4) >> 5);
      return 0;
    }
  }
  *(uint *)(iVar2 + 8) = uVar5 - uVar3;
  *(uint *)(iVar2 + 0xc) = uVar6 - uVar3;
  *param_1 = (short)uVar4 - (short)(uVar4 >> 5);
  return 1;
}

