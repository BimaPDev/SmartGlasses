/* thunk_FUN_100d88cc @ 0x10136762 */

void thunk_FUN_100d88cc(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  byte *pbVar15;
  bool bVar16;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short sStack_2c;
  
  piVar5 = DAT_100d8be0;
  piVar4 = DAT_100d8bb8;
  bVar1 = *(byte *)(*DAT_100d8be0 + 0x30);
  iVar6 = FUN_100d8620();
  uVar7 = FUN_100d47a4(0);
  iVar8 = FUN_100d5e14();
  pbVar15 = (byte *)*piVar4;
  uStack_34 = *(undefined4 *)(pbVar15 + 2);
  uStack_30 = *(uint *)(pbVar15 + 6);
  sStack_2c = *(short *)(pbVar15 + 10);
  if ((((((*pbVar15 & 0x41) == 0x41) && ((*(byte *)(*piVar5 + 0x30) & 0xf) != uVar7)) &&
       (iVar8 != 3)) && (iVar6 == 0)) &&
     (((iVar8 != 0 || (iVar11 = FUN_100d63dc(), iVar11 != 0)) || (bVar1 >> 4 != uVar7)))) {
    if ((uVar7 == 0) && (iVar11 = *piVar4, (int)((uint)*(byte *)(iVar11 + 0xc) << 0x1e) < 0)) {
      uStack_34 = CONCAT22(*(undefined2 *)(iVar11 + 0xe),(undefined2)uStack_34);
      uStack_30._2_2_ = (short)(uStack_30 >> 0x10);
      uStack_30 = CONCAT22(uStack_30._2_2_,*(undefined2 *)(iVar11 + 0x10));
    }
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
  pbVar15 = (byte *)*piVar4;
  uVar10 = (uint)*pbVar15;
  if ((((uVar10 & 0x82) == 0x82) && ((*(byte *)(*piVar5 + 0x30) & 0xf) != uVar7)) && (iVar8 != 3)) {
    if (iVar6 == 0) {
      if ((uVar7 == 0) && ((int)((uint)pbVar15[0xc] << 0x1e) < 0)) goto LAB_100d8944;
    }
    else {
      if (uVar7 != 0) goto LAB_100d8a08;
LAB_100d8944:
      uStack_30 = CONCAT22(*(undefined2 *)(pbVar15 + 0x12),(undefined2)uStack_30);
      sStack_2c = *(short *)(pbVar15 + 0x14);
    }
    cVar14 = '\x01';
    uVar7 = uVar12 | 2;
  }
  else {
LAB_100d8a08:
    cVar14 = '\0';
    uVar7 = uVar12;
  }
  uVar13 = (uVar10 & 7) >> 2;
  if ((int)(uVar10 << 0x1c) < 0) {
    uVar13 = uVar13 | 2;
  }
  uVar10 = (uVar10 & 0x3f) >> 4;
  if (*(short *)(pbVar15 + 0x18) == uStack_34._2_2_) {
    bVar2 = false;
    if ((uStack_30 & 0xffff) != (uint)*(ushort *)(pbVar15 + 0x1a)) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  if (*(short *)(pbVar15 + 0x1c) == uStack_30._2_2_) {
    bVar3 = false;
    if (sStack_2c != *(short *)(pbVar15 + 0x1e)) {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  if (uVar13 == uVar7) {
    if ((!bVar2) && (!bVar3)) {
      if (uVar10 == 0) {
        return;
      }
LAB_100d8a1c:
      FUN_100a5b78((DAT_100d8bc0 - DAT_100d8bbc) * 0x20 & 0xff00U | 0x740031,DAT_100d8bc8,
                   DAT_100d8bc4,0);
      FUN_10131ab0(0);
      *(byte *)*piVar4 = *(byte *)*piVar4 & 0xcf;
      goto LAB_100d8a4a;
    }
    if (uVar10 != 0) goto LAB_100d8a1c;
  }
  else {
    if (uVar10 != 0) goto LAB_100d8a1c;
LAB_100d8a4a:
    if (!bVar2 && !bVar3) {
      bVar16 = uVar13 != uVar7;
      goto LAB_100d8b3e;
    }
  }
  if (uVar13 != 0) {
    uVar10 = (DAT_100d8bc0 - DAT_100d8bbc) * 0x20 & 0xff00;
    FUN_100a5b78(uVar10 | 0x7c0031,DAT_100d8bc8,DAT_100d8bcc);
    iVar6 = FUN_10131a94(0);
    if (iVar6 == 0) {
      *(byte *)*piVar4 = *(byte *)*piVar4 & 0xf3;
      uVar13 = 0;
    }
    else {
      FUN_100a5b78(uVar10 | 0x820011,DAT_100d8bc8,DAT_100d8bdc);
    }
  }
  bVar16 = uVar13 != uVar7;
  if (bVar2) {
    uVar10 = uStack_30 & 0xffff;
    FUN_100a5b78((DAT_100d8bc0 - DAT_100d8bbc) * 0x20 & 0xff00U | 0x8e0032,DAT_100d8bc8,DAT_100d8bd0
                 ,uStack_34._2_2_,uVar10);
    FUN_10131b64(uStack_34._2_2_,uVar10);
    if ((*(short *)(*piVar4 + 4) == uStack_34._2_2_) && (*(ushort *)(*piVar4 + 6) == uVar10)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    FUN_10131aee(uVar9);
    if (bVar3) goto LAB_100d8ae2;
  }
  else {
    if (!bVar3) goto LAB_100d8b3e;
LAB_100d8ae2:
    FUN_100a5b78((DAT_100d8bc0 - DAT_100d8bbc) * 0x20 & 0xff00U | 0x990032,DAT_100d8bc8,DAT_100d8bd4
                 ,uStack_30._2_2_,sStack_2c);
    FUN_10131acc(uStack_30._2_2_,sStack_2c);
    if ((*(short *)(*piVar4 + 8) == uStack_30._2_2_) && (*(short *)(*piVar4 + 10) == sStack_2c)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    FUN_10131b0a(uVar9);
  }
  iVar6 = *piVar4;
  *(undefined4 *)(iVar6 + 0x16) = uStack_34;
  *(uint *)(iVar6 + 0x1a) = uStack_30;
  *(short *)(iVar6 + 0x1e) = sStack_2c;
LAB_100d8b3e:
  if (bVar16) {
    uVar10 = (DAT_100d8bc0 - DAT_100d8bbc) * 0x20 & 0xff00;
    FUN_100a5b78(uVar10 | 0xa80032,DAT_100d8bc8,DAT_100d8bd8,uVar12,cVar14);
    iVar6 = FUN_10131a94(uVar7);
    if (iVar6 != 0) {
      FUN_100a5b78(uVar10 | 0xad0011,DAT_100d8bc8,DAT_100d8bdc);
      return;
    }
    *(byte *)*piVar4 = (byte)(uVar12 << 2) | cVar14 << 3 | *(byte *)*piVar4 & 0xf3;
  }
  return;
}

