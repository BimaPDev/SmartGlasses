/* FUN_2c47ec24 @ 0x2c47ec24 */

int FUN_2c47ec24(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int unaff_pc;
  bool bVar12;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar7 = uVar5 + 1;
  iVar8 = *(int *)(param_1 + 0xc) + (uint)(0xfffffffe < uVar5);
  uVar9 = uVar5 | unaff_pc << 3;
  *(uint *)(param_1 + 8) = uVar7;
  *(int *)(param_1 + 0xc) = iVar8;
  *(undefined1 *)(param_1 + (uVar5 & 0x3f) + 0x10) = 0x80;
  if (uVar9 == 0) {
    FUN_2c47ea18();
    uVar7 = *(uint *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
  }
  while (uVar2 = uVar7 & 0x3f, uVar2 != 0x38) {
    while( true ) {
      bVar12 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + (uint)bVar12;
      *(uint *)(param_1 + 8) = uVar7;
      *(int *)(param_1 + 0xc) = iVar8;
      *(undefined1 *)(param_1 + uVar2 + 0x10) = 0;
      if (uVar2 != 0x3f) break;
      FUN_2c47ea18(param_1);
      uVar7 = *(uint *)(param_1 + 8);
      iVar8 = *(int *)(param_1 + 0xc);
      uVar2 = uVar7 & 0x3f;
      if (uVar2 == 0x38) goto LAB_2c47ec8e;
    }
  }
LAB_2c47ec8e:
  uVar10 = 0x38;
  while( true ) {
    uVar11 = 0x20 - uVar10;
    uVar1 = uVar10 & 0xff;
    uVar3 = uVar10 - 0x20;
    uVar10 = uVar10 - 8;
    *(uint *)(param_1 + 8) = uVar7 + 1;
    *(uint *)(param_1 + 0xc) = iVar8 + (uint)(0xfffffffe < uVar7);
    *(byte *)(param_1 + uVar2 + 0x10) =
         (byte)(uVar5 >> uVar1) | (byte)(uVar9 << (uVar11 & 0xff)) | (byte)(uVar9 >> (uVar3 & 0xff))
    ;
    if (uVar2 == 0x3f) {
      FUN_2c47ea18(param_1);
    }
    if (uVar10 == 0xfffffff8) break;
    uVar7 = *(uint *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    uVar2 = uVar7 & 0x3f;
  }
  iVar8 = param_1 + 0x14;
  do {
    uVar4 = *(undefined4 *)(iVar8 + 0x3c);
    iVar6 = iVar8 + 4;
    *(char *)(iVar8 + -1) = (char)uVar4;
    *(char *)(iVar8 + -4) = (char)((uint)uVar4 >> 0x18);
    *(char *)(iVar8 + -3) = (char)((uint)uVar4 >> 0x10);
    *(char *)(iVar8 + -2) = (char)((uint)uVar4 >> 8);
    iVar8 = iVar6;
  } while (param_1 + 0x34 != iVar6);
  return param_1 + 0x10;
}

