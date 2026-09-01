/* FUN_100d490c @ 0x100d490c */

undefined4 FUN_100d490c(undefined4 param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_2c [20];
  
  puVar2 = DAT_100d4a34;
  puVar10 = *(undefined4 **)*DAT_100d4a34;
  while( true ) {
    if (puVar10 == (undefined4 *)0x0) {
      FUN_100a5b78(DAT_100d4a40 | (DAT_100d4a3c - DAT_100d4a38) * 0x20 & 0xff00U,DAT_100d4a48,
                   DAT_100d4a44);
      return 0xffffff88;
    }
    iVar3 = FUN_1011ea30(param_1,puVar10 + 1,6);
    if (iVar3 == 0) break;
    puVar10 = (undefined4 *)*puVar10;
  }
  uVar11 = (DAT_100d4a3c - DAT_100d4a38) * 0x20 & 0xff00;
  bVar1 = *(byte *)(puVar10 + 0xe);
  if ((DAT_100d4a54 & puVar10[0xe]) != 0) {
    FUN_100a5b78(uVar11 | 0x2380027,DAT_100d4a48,DAT_100d4a58,bVar1 & 1,
                 (*(byte *)((int)puVar10 + 0x39) & 0xf) >> 3,*(byte *)((int)puVar10 + 0x39) & 1,
                 *(byte *)((int)puVar10 + 0x3a) & 1,(*(byte *)((int)puVar10 + 0x39) & 7) >> 2,
                 *(byte *)((int)puVar10 + 0x39) >> 5,(*(byte *)((int)puVar10 + 0x3a) & 0x1f) >> 2);
    return 0xfffffff0;
  }
  bVar12 = (bVar1 & 0x70) != 0;
  uVar6 = DAT_100d4a54;
  if (bVar12) {
    uVar6 = *puVar2;
  }
  uVar4 = puVar10[3];
  if (bVar12) {
    *(byte *)(uVar6 + 8) = *(byte *)(uVar6 + 8) & 0xf8;
  }
  uVar8 = (uint)bVar1 << 0x18;
  bVar12 = (int)uVar8 < 0;
  if (bVar12) {
    uVar8 = *puVar2;
    uVar6 = *(byte *)(uVar8 + 8) & 0xfffffff7;
  }
  if (bVar12) {
    *(char *)(uVar8 + 8) = (char)uVar6;
  }
  FUN_101319b8(uVar4);
  puVar9 = (undefined4 *)*puVar2;
  puVar5 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)*puVar9;
  do {
    if (puVar7 == (undefined4 *)0x0) {
LAB_100d4992:
      FUN_100b9e04(puVar10);
      FUN_100d4748(param_1,auStack_2c);
      FUN_100a5b78(DAT_100d4a4c | uVar11,DAT_100d4a48,DAT_100d4a50,auStack_2c);
      return 0;
    }
    if (puVar10 == puVar7) {
      uVar4 = *puVar10;
      if (puVar5 == (undefined4 *)0x0) {
        *puVar9 = uVar4;
        if (puVar10 == (undefined4 *)puVar9[1]) {
          puVar9[1] = uVar4;
        }
      }
      else {
        *puVar5 = uVar4;
        if (puVar10 == (undefined4 *)puVar9[1]) {
          puVar9[1] = puVar5;
        }
      }
      *puVar10 = 0;
      goto LAB_100d4992;
    }
    puVar5 = puVar7;
    puVar7 = (undefined4 *)*puVar7;
  } while( true );
}

