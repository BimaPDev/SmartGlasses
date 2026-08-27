/* FUN_14041b40 @ 0x14041b40 */

uint FUN_14041b40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  
  puVar1 = (uint *)FUN_1409f464();
  uVar10 = *puVar1;
  uVar11 = 0;
  if (uVar10 != 0) {
    if (7 < uVar10) {
      uVar10 = 8;
    }
    uVar11 = 0;
    puVar12 = (undefined4 *)((int)puVar1 + (short)((short)uVar10 - 1U & 0xff) * 0x72 + 0xcd);
    puVar8 = (undefined4 *)((int)puVar1 + 0x5b);
    iVar13 = DAT_14041c44 + 0x444;
    do {
      while ((int)((uint)*(byte *)(puVar8 + 4) << 0x1e) < 0) {
        *(undefined4 *)(param_1 + uVar11 * 0x28) = *(undefined4 *)((int)puVar8 + -0x41);
        iVar9 = param_1 + uVar11 * 0x28;
        *(undefined2 *)(iVar9 + 4) = *(undefined2 *)((int)puVar8 + -0x3d);
        *(undefined1 *)(iVar9 + 6) = *(undefined1 *)((int)puVar8 + -0x3b);
        iVar2 = FUN_140db784((int)puVar8 + -0x3a,iVar13,6);
        iVar3 = 0;
        if (iVar2 == 0) {
LAB_14041c2a:
          bVar6 = *(char *)(DAT_14041c44 + iVar3 * 0x38 + 0x472) == '\0';
        }
        else {
          iVar3 = FUN_140db784((int)puVar8 + -0x3a,DAT_14041c48,6);
          if (iVar3 == 0) {
            iVar3 = 1;
            goto LAB_14041c2a;
          }
          bVar6 = true;
        }
        *(bool *)(iVar9 + 7) = bVar6;
        FUN_1402a6e8(4,0x263,DAT_14041c50,DAT_14041c54,DAT_14041c4c,bVar6);
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar7 = puVar8[3];
        *(undefined4 *)(iVar9 + 8) = *puVar8;
        *(undefined4 *)(iVar9 + 0xc) = uVar4;
        *(undefined4 *)(iVar9 + 0x10) = uVar5;
        *(undefined4 *)(iVar9 + 0x14) = uVar7;
        uVar4 = *(undefined4 *)((int)puVar1 + 0xe);
        uVar5 = *(undefined4 *)((int)puVar1 + 0x12);
        uVar7 = *(undefined4 *)((int)puVar1 + 0x16);
        puVar8 = (undefined4 *)((int)puVar8 + 0x72);
        uVar11 = uVar11 + 1 & 0xff;
        *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)((int)puVar1 + 10);
        *(undefined4 *)(iVar9 + 0x1c) = uVar4;
        *(undefined4 *)(iVar9 + 0x20) = uVar5;
        *(undefined4 *)(iVar9 + 0x24) = uVar7;
        if (puVar12 == puVar8) goto LAB_14041c0c;
      }
      puVar8 = (undefined4 *)((int)puVar8 + 0x72);
    } while (puVar12 != puVar8);
LAB_14041c0c:
    FUN_1402a6e8(4,0x26a,DAT_14041c50,DAT_14041c54,DAT_14041c58,uVar11);
  }
  return uVar11;
}

