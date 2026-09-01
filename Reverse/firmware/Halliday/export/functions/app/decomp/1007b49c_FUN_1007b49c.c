/* FUN_1007b49c @ 0x1007b49c */

void FUN_1007b49c(void)

{
  short *psVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort uVar14;
  undefined4 uVar15;
  
  iVar2 = DAT_1007b5fc;
  psVar1 = (short *)(DAT_1007b5fc + 0x154);
  uVar14 = *(short *)(DAT_1007b5fc + 0x152) + 1;
  *(ushort *)(DAT_1007b5fc + 0x152) = uVar14;
  *(short *)(iVar2 + 0x154) = *psVar1 + 1;
  if (-1 < (int)((uint)uVar14 << 0x1f)) {
    iVar4 = FUN_1007b2e4();
    if (iVar4 < 1) {
      FUN_100a5b78(DAT_1007b624 | ((int)PTR_LAB_1007b604 - (int)PTR_DAT_1007b608) * 0x20 & 0xff00U,
                   DAT_1007b614,DAT_1007b628);
    }
    else {
      iVar5 = FUN_1011feb0();
      if (iVar5 - 0x899U < 0xa27) {
        FUN_1007a2a4(iVar4);
      }
      else {
        FUN_100a5b78(((int)PTR_LAB_1007b604 - (int)PTR_DAT_1007b608) * 0x20 & 0xff00U | 0x3a00032,
                     DAT_1007b614,DAT_1007b620,iVar4,iVar5);
      }
      if (0x31 < *(ushort *)(iVar2 + 0x152)) {
        *(undefined2 *)(iVar2 + 0x152) = 0;
        uVar15 = *(undefined4 *)(PTR_PTR_1007b600 + (uint)*(byte *)(iVar2 + 0x141) * 4);
        uVar6 = FUN_10056788();
        uVar7 = FUN_100567c0();
        uVar8 = FUN_1011a86a();
        FUN_1007b1a4();
        uVar9 = FUN_1011fea2();
        uVar10 = FUN_100567ec();
        uVar11 = FUN_1011feb0(iVar4);
        uVar3 = *(undefined2 *)(iVar2 + 0x15e);
        uVar12 = FUN_1007a694();
        FUN_1007b3f0();
        uVar13 = FUN_1011feca();
        FUN_100a5b78(DAT_1007b60c | ((int)PTR_LAB_1007b604 - (int)PTR_DAT_1007b608) * 0x20 & 0xff00U
                     ,DAT_1007b614,DAT_1007b610,uVar15,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar3,
                     uVar12,uVar13);
      }
    }
  }
  if ((uint)*(ushort *)(iVar2 + 0x154) % 5 == 0) {
    FUN_1007b3f0();
    FUN_1011feca();
    FUN_1007a2e8();
    if ((*(char *)(iVar2 + 0x141) == '\x02') || (*(char *)(iVar2 + 0x141) == '\x04')) {
      uVar3 = FUN_1007a30c();
      *(undefined2 *)(iVar2 + 0x160) = uVar3;
    }
    *(undefined2 *)(iVar2 + 0x154) = 0;
  }
  FUN_1007a878();
  FUN_1007c7a4();
  FUN_1007d768();
  FUN_1013cbb6(DAT_1007b61c,DAT_1007b618,200,0);
  return;
}

