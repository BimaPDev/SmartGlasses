/* FUN_1409d184 @ 0x1409d184 */

undefined1 FUN_1409d184(void)

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
  
  puVar3 = DAT_1409d14c;
  if ((int)((uint)*DAT_1409d14c << 0x1f) < 0) {
    FUN_1402a6e8(4,0x1c37,DAT_1409d158,DAT_1409d154,DAT_1409d178);
    FUN_14099e84();
    iVar5 = FUN_1403b00c();
    if (iVar5 == 0) {
      uVar6 = FUN_14099e84();
      uVar7 = 0x1c3d;
      uVar8 = DAT_1409d180;
      goto LAB_1409d128;
    }
    cVar4 = (**(code **)(*DAT_1409d15c + 0x34))(*(undefined1 *)(iVar5 + 6),1,1);
    pcVar10 = DAT_1409d164;
    uVar7 = DAT_1409d160;
    uVar6 = DAT_1409d158;
    uVar8 = DAT_1409d154;
    uVar9 = (int)cVar4 & ~((int)cVar4 >> 0x1f);
    if (0xf < (int)uVar9) {
      uVar9 = 0x10;
    }
    DAT_1409d164[1] = cVar4;
  }
  else {
    FUN_14099e78();
    iVar5 = FUN_1403b00c();
    if (iVar5 == 0) {
      uVar6 = FUN_14099e78();
      uVar7 = 0x1c50;
      uVar8 = DAT_1409d17c;
LAB_1409d128:
      FUN_1402a6e8(4,uVar7,DAT_1409d158,DAT_1409d154,uVar8,DAT_1409d16c,uVar6);
      return 0xff;
    }
    FUN_1402a6e8(4,0x1c54,DAT_1409d158,DAT_1409d154,DAT_1409d150);
    cVar4 = (**(code **)(*DAT_1409d15c + 0x38))(*(undefined1 *)(iVar5 + 6),1,1);
    pcVar10 = DAT_1409d164;
    uVar7 = DAT_1409d160;
    uVar6 = DAT_1409d158;
    uVar8 = DAT_1409d154;
    uVar9 = (int)cVar4 & ~((int)cVar4 >> 0x1f);
    if (0xf < (int)uVar9) {
      uVar9 = 0x10;
    }
    *DAT_1409d164 = cVar4;
  }
  FUN_1402a6e8(4,0x1d4e,uVar6,uVar8,uVar7,uVar9);
  uVar2 = *puVar3;
  *DAT_1409d168 = (char)uVar9;
  if (-1 < (int)((uint)uVar2 << 0x18)) {
    FUN_1409cfbc(uVar9);
  }
  uVar8 = DAT_1409d16c;
  uVar1 = *(undefined1 *)(iVar5 + 6);
  FUN_1402a6e8(4,0x1c5f,DAT_1409d158,DAT_1409d154,DAT_1409d170,DAT_1409d16c,*pcVar10);
  FUN_1402a6e8(4,0x1c60,DAT_1409d158,DAT_1409d154,DAT_1409d174,uVar8,pcVar10[1]);
  return uVar1;
}

