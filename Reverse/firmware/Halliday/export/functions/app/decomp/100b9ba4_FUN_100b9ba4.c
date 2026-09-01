/* FUN_100b9ba4 @ 0x100b9ba4 */

uint FUN_100b9ba4(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte local_29 [5];
  
  iVar2 = DAT_100b9cc0;
  uVar5 = *(uint *)(DAT_100b9cc0 + 8);
  uVar4 = *(uint *)(DAT_100b9cc0 + 0xc);
  uVar6 = 1;
  do {
    uVar10 = -((int)(param_2 << 0x18) >> 0x1f);
    iVar9 = uVar6 + (uVar10 + 1) * 0x100;
    if (uVar5 < 0x1000000) {
      *(uint *)(iVar2 + 8) = uVar5 << 8;
      *(uint *)(iVar2 + 0xc) = uVar4 << 8;
      FUN_100b940c(local_29);
      uVar5 = *(uint *)(iVar2 + 8);
      uVar8 = (uint)*(ushort *)(param_1 + iVar9 * 2);
      uVar7 = uVar8 * (uVar5 >> 0xb);
      uVar4 = *(uint *)(iVar2 + 0xc) | (uint)local_29[0];
      *(uint *)(iVar2 + 0xc) = uVar4;
      if (uVar4 <= uVar7 && uVar7 - uVar4 != 0) goto LAB_100b9c2c;
LAB_100b9bc8:
      uVar3 = 1;
      uVar5 = uVar5 - uVar7;
      uVar4 = uVar4 - uVar7;
      *(uint *)(iVar2 + 8) = uVar5;
      *(uint *)(iVar2 + 0xc) = uVar4;
      *(short *)(param_1 + iVar9 * 2) = (short)uVar8 - (short)(uVar8 >> 5);
    }
    else {
      uVar8 = (uint)*(ushort *)(param_1 + iVar9 * 2);
      uVar7 = uVar8 * (uVar5 >> 0xb);
      if (uVar7 < uVar4 || uVar7 - uVar4 == 0) goto LAB_100b9bc8;
LAB_100b9c2c:
      uVar5 = uVar7;
      *(uint *)(iVar2 + 8) = uVar5;
      uVar3 = 0;
      *(short *)(param_1 + iVar9 * 2) = (short)uVar8 + (short)((int)(0x800 - uVar8) >> 5);
    }
    uVar6 = (uVar6 & 0x7fff) << 1 | uVar3;
    param_2 = (param_2 & 0x7fff) << 1;
    if (uVar10 != uVar3) goto joined_r0x100b9c4e;
  } while (uVar6 < 0x100);
LAB_100b9c44:
  return uVar6 & 0xff;
joined_r0x100b9c4e:
  while (uVar6 < 0x100) {
    uVar10 = uVar6 * 2;
    uVar6 = uVar10 & 0xffff | 1;
    if (uVar5 < 0x1000000) {
      *(uint *)(iVar2 + 8) = uVar5 << 8;
      *(uint *)(iVar2 + 0xc) = uVar4 << 8;
      FUN_100b940c(local_29);
      uVar5 = *(uint *)(iVar2 + 8);
      uVar4 = *(uint *)(iVar2 + 0xc) | (uint)local_29[0];
      *(uint *)(iVar2 + 0xc) = uVar4;
    }
    uVar1 = *(ushort *)(param_1 + uVar10);
    uVar7 = (uint)uVar1 * (uVar5 >> 0xb);
    uVar5 = uVar5 - uVar7;
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
      uVar4 = uVar4 - uVar7;
      *(uint *)(iVar2 + 8) = uVar5;
      *(uint *)(iVar2 + 0xc) = uVar4;
      *(ushort *)(param_1 + uVar10) = uVar1 - (uVar1 >> 5);
    }
    else {
      *(uint *)(iVar2 + 8) = uVar7;
      *(ushort *)(param_1 + uVar10) = uVar1 + (short)((int)(0x800 - (uint)uVar1) >> 5);
      uVar6 = uVar10 & 0xffff;
      uVar5 = uVar7;
    }
  }
  goto LAB_100b9c44;
}

