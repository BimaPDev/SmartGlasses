/* FUN_2c4b8038 @ 0x2c4b8038 */

undefined4 FUN_2c4b8038(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  uint *puVar9;
  
  FUN_2c4b6698(1);
  if (*DAT_2c4b8228 != '\0') {
LAB_2c4b8060:
    puVar9 = DAT_2c4b8230;
    FUN_2c0027c8();
    FUN_2c674648();
    FUN_2c6746c8();
    uVar6 = DAT_2c4b8238;
    *DAT_2c4b8234 = 1;
    puVar9[0x18] = uVar6 | puVar9[0x18];
    puVar9[0x19] = puVar9[0x19] | 0x7ffffff;
    puVar9[0x1f] = puVar9[0x1f] | 0x1ff;
    *puVar9 = 0;
    puVar9[0x13] = puVar9[0x13] & 0xfffffffe;
    puVar9[1] = 0xffffffff;
    FUN_2c673b08(2);
    puVar9[1] = 0;
    *puVar9 = *puVar9 | 1;
    puVar9[0x15] = puVar9[0x15] | 0x2000000;
    puVar9[0x1d2] = puVar9[0x1d2] | 0x400000;
    iVar3 = FUN_2c673d48();
    puVar1 = DAT_2c4b8240;
    puVar8 = DAT_2c4b823c;
    puVar9 = DAT_2c4b8230;
    uVar6 = 0;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar6 = 1;
      }
      else {
        uVar6 = 2;
      }
    }
    DAT_2c4b8230[0x1d] = uVar6 | DAT_2c4b8230[0x1d] & 0xfffffffc;
    puVar9[0x1d] = puVar9[0x1d] & 0xefffffff;
    puVar9[0x35] = puVar9[0x35] | 0x3000000;
    puVar9[0x36] = puVar9[0x36] | 0x3000000;
    do {
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar8 | 0x200;
      puVar8 = puVar9;
    } while (puVar9 != puVar1);
    uVar4 = FUN_2c4b6800();
    uVar6 = DAT_2c4b8244;
    puVar9 = DAT_2c4b8230;
    DAT_2c4b8230[0xd4] = 0;
    uVar2 = DAT_2c4b8248;
    uVar5 = (uVar4 & 0xf) << 0xc;
    if ((uVar4 & 0xff) < 0xf) {
      bVar7 = (char)uVar4 + 0x11;
    }
    else {
      bVar7 = (char)uVar4 - 0xf;
    }
    uVar4 = (bVar7 & 0x1f) << 0x1a;
    puVar9[0xd5] = uVar4;
    puVar9[0x6e] = 0;
    puVar9[0xd6] = uVar5;
    puVar9[0xd7] = 0;
    puVar9[0xd8] = uVar4;
    puVar9[0x6f] = 0;
    puVar9[0xd9] = uVar5;
    puVar9[0x27] = puVar9[0x27] & uVar6 | 0x400000;
    puVar9[0x28] = puVar9[0x28] & uVar6 | 0x400000;
    puVar9[0x2d] = puVar9[0x2d] & 0xcfffffff;
    FUN_2c673b08(2);
    puVar9[0x2d] = puVar9[0x2d] | 0x30000000;
    FUN_2c4b7a4c(3,0);
    puVar9[0x2d] = puVar9[0x2d] & 0xffdfffff;
    FUN_2c673b08(2);
    uVar6 = DAT_2c4b824c;
    puVar9[0x2d] = puVar9[0x2d] & DAT_2c4b824c;
    uVar4 = DAT_2c4b8250;
    puVar9[0x2e] = puVar9[0x2e] & uVar6;
    puVar9[0x2d] = puVar9[0x2d] | 0x200000;
    puVar9[0x2f] = puVar9[0x2f] | 0x10;
    puVar9[0x2c] = puVar9[0x2c] & 0xfffff8ff | 0x400;
    puVar9[0x39] = uVar2 & puVar9[0x39];
    puVar9[0x1f0] = uVar4 & puVar9[0x1f0];
    FUN_2c674418(0xffffffff,0x7ff);
    puVar9[0x15] = puVar9[0x15] | 0x20000;
    return 0;
  }
  iVar3 = 0;
  if ((*(uint *)(DAT_2c4b822c + 4) & 0xc0c0) == 0) {
    if ((*(uint *)(DAT_2c4b822c + 0xc) & 0xc0c0) == 0) {
      *DAT_2c4b8228 = '\x01';
      goto LAB_2c4b8060;
    }
    iVar3 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4b8254,iVar3,*(undefined1 *)(DAT_2c4b822c + iVar3 * 8));
}

