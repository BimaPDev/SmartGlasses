/* FUN_1409d304 @ 0x1409d304 */

undefined1 FUN_1409d304(void)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  
  puVar3 = DAT_1409d2cc;
  uVar2 = *DAT_1409d2cc;
  if ((uVar2 & 1) == 0) {
    FUN_14099e78();
    iVar5 = FUN_1403b00c();
    if (iVar5 == 0) {
      uVar6 = FUN_14099e78();
      uVar7 = 0x1cf1;
      uVar8 = DAT_1409d2fc;
LAB_1409d2a4:
      FUN_1402a6e8(4,uVar7,DAT_1409d2d4,DAT_1409d2d8,uVar8,DAT_1409d2ec,uVar6);
      return 0xff;
    }
    FUN_1402a6e8(4,0x1cf5,DAT_1409d2d4,DAT_1409d2d8,DAT_1409d2d0);
    cVar4 = (**(code **)(*DAT_1409d2dc + 0x38))(*(undefined1 *)(iVar5 + 6),uVar2 & 1,1);
    pcVar10 = DAT_1409d2e4;
    uVar7 = DAT_1409d2e0;
    uVar6 = DAT_1409d2d8;
    uVar8 = DAT_1409d2d4;
    uVar9 = (int)cVar4 & ~((int)cVar4 >> 0x1f);
    if (0xf < (int)uVar9) {
      uVar9 = 0x10;
    }
    *DAT_1409d2e4 = cVar4;
  }
  else {
    FUN_14099e84();
    iVar5 = FUN_1403b00c();
    if (iVar5 == 0) {
      uVar6 = FUN_14099e84();
      uVar7 = 0x1cdc;
      uVar8 = DAT_1409d300;
      goto LAB_1409d2a4;
    }
    FUN_1402a6e8(4,0x1ce0,DAT_1409d2d4,DAT_1409d2d8,DAT_1409d2f8);
    cVar4 = (**(code **)(*DAT_1409d2dc + 0x34))(*(undefined1 *)(iVar5 + 6),0,1);
    pcVar10 = DAT_1409d2e4;
    uVar7 = DAT_1409d2e0;
    uVar6 = DAT_1409d2d8;
    uVar8 = DAT_1409d2d4;
    uVar9 = (int)cVar4 & ~((int)cVar4 >> 0x1f);
    if (0xf < (int)uVar9) {
      uVar9 = 0x10;
    }
    DAT_1409d2e4[1] = cVar4;
  }
  FUN_1402a6e8(4,0x1d4e,uVar8,uVar6,uVar7,uVar9);
  uVar2 = *puVar3;
  *DAT_1409d2e8 = (char)uVar9;
  if (-1 < (int)((uint)uVar2 << 0x18)) {
    FUN_1409cfbc(uVar9);
  }
  uVar8 = DAT_1409d2ec;
  uVar1 = *(undefined1 *)(iVar5 + 6);
  FUN_1402a6e8(4,0x1d00,DAT_1409d2d4,DAT_1409d2d8,DAT_1409d2f0,DAT_1409d2ec,*pcVar10);
  FUN_1402a6e8(4,0x1d01,DAT_1409d2d4,DAT_1409d2d8,DAT_1409d2f4,uVar8,pcVar10[1]);
  return uVar1;
}

