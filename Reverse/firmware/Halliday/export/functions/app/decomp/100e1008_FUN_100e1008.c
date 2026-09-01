/* FUN_100e1008 @ 0x100e1008 */

undefined4 FUN_100e1008(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined4 *puVar10;
  byte *pbVar12;
  char cVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 auStack_44 [2];
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte local_39 [17];
  byte local_28 [16];
  undefined4 *puVar11;
  
  puVar1 = (undefined4 *)FUN_10138082();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10138082();
    iVar2 = FUN_100e0e08(param_1);
    if (iVar2 == 0) {
      FUN_100a5b78(DAT_100e11d8 | (DAT_100e11d4 - DAT_100e11d0) * 0x20 & 0xff00U,DAT_100e11dc);
      return 0xffffffed;
    }
    puVar1 = (undefined4 *)(iVar2 + 8);
    FUN_100e0e70(0,param_1,puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      pbVar15 = (byte *)&local_48;
      do {
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        puVar1 = puVar1 + 2;
        *(undefined4 *)pbVar15 = uVar3;
        *(undefined4 *)(pbVar15 + 4) = uVar5;
        pbVar15 = pbVar15 + 8;
      } while (puVar1 != (undefined4 *)(iVar2 + 0x18));
      iVar4 = 0x10;
      pbVar15 = (byte *)&local_48;
      pbVar12 = DAT_100e11e0;
      do {
        iVar4 = iVar4 + -1;
        *pbVar15 = *pbVar15 ^ *pbVar12;
        pbVar15 = pbVar15 + 1;
        pbVar12 = pbVar12 + 1;
      } while (iVar4 != 0);
      pbVar15 = local_39 + 1;
      iVar4 = 0;
      pbVar12 = pbVar15;
      pbVar14 = (byte *)&local_48;
      do {
        bVar7 = *pbVar14 >> 4;
        if (*pbVar14 < 0xa0) {
          bVar7 = bVar7 + 0x30;
        }
        else {
          bVar7 = bVar7 + 0x57;
        }
        bVar8 = pbVar14[1] >> 4;
        *pbVar12 = bVar7;
        if (bVar8 < 10) {
          bVar8 = bVar8 + 0x30;
        }
        else {
          bVar8 = bVar8 + 0x57;
        }
        iVar4 = iVar4 + 2;
        pbVar12[1] = bVar8;
        pbVar14 = pbVar14 + 2;
        pbVar12 = pbVar12 + 2;
      } while (iVar4 != 0x10);
      iVar4 = 0;
      pbVar12 = pbVar15;
      pbVar14 = (byte *)&local_48;
      do {
        bVar7 = *pbVar14 & 0xf;
        if (bVar7 < 10) {
          bVar7 = bVar7 + 0x30;
        }
        else {
          bVar7 = bVar7 + 0x57;
        }
        bVar8 = pbVar14[1] & 0xf;
        pbVar12[0x10] = bVar7;
        iVar4 = iVar4 + 2;
        if (bVar8 < 10) {
          bVar8 = bVar8 + 0x30;
        }
        else {
          bVar8 = bVar8 + 0x57;
        }
        pbVar12[0x11] = bVar8;
        pbVar14 = pbVar14 + 2;
        pbVar12 = pbVar12 + 2;
      } while (iVar4 != 0x10);
      iVar4 = 0;
      pbVar12 = (byte *)&local_48;
      do {
        bVar7 = pbVar15[1];
        if (*pbVar15 - 0x61 < 6) {
          cVar9 = *pbVar15 + 0xa9;
        }
        else {
          cVar9 = *pbVar15 - 0x30;
        }
        if (bVar7 - 0x61 < 6) {
          cVar13 = bVar7 + 0xa9;
        }
        else {
          cVar13 = bVar7 - 0x30;
        }
        iVar4 = iVar4 + 1;
        *pbVar12 = cVar9 * '\x10' + cVar13;
        pbVar15 = pbVar15 + 2;
        pbVar12 = pbVar12 + 1;
      } while (iVar4 != 0x10);
      iVar4 = 8;
      pbVar15 = (byte *)&local_48;
      pbVar12 = local_39;
      do {
        bVar7 = *pbVar15;
        iVar4 = iVar4 + -1;
        *pbVar15 = *pbVar12;
        *pbVar12 = bVar7;
        pbVar15 = pbVar15 + 1;
        pbVar12 = pbVar12 + -1;
      } while (iVar4 != 0);
      local_58 = local_48;
      uStack_54 = auStack_44[0];
      uStack_50 = auStack_44[1];
      uStack_4c._0_1_ = bStack_3c;
      uStack_4c._1_1_ = bStack_3b;
      uStack_4c._2_1_ = bStack_3a;
      uStack_4c._3_1_ = local_39[0];
    }
    FUN_10137ff6(param_2,&local_58);
    FUN_100e0dc4(iVar2);
    FUN_10131934(DAT_100e11e8,*DAT_100e11e4 + 0xc0,8);
  }
  else {
    puVar6 = param_2;
    puVar10 = puVar1;
    do {
      puVar11 = puVar10 + 1;
      *puVar6 = *puVar10;
      puVar6 = puVar6 + 1;
      puVar10 = puVar11;
    } while (puVar11 != puVar1 + 4);
    FUN_10119dc2(DAT_100e11cc);
    FUN_100e0f88(param_1,param_2);
  }
  return 0;
}

