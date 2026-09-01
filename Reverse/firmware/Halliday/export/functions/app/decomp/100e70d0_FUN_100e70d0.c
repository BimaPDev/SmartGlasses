/* FUN_100e70d0 @ 0x100e70d0 */

uint FUN_100e70d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar4;
  
  iVar12 = 0;
  iVar10 = DAT_100e71f4 + -2;
  iVar5 = DAT_100e71f4;
  do {
    if (*(char *)(iVar5 + -2) != '\0') {
      uVar8 = iVar12 * 0x70 + iVar10;
      iVar6 = (uint)*(byte *)(uVar8 + 1) << 0x1b;
      if ((-1 < iVar6) && (iVar6 = FUN_1011ea30(iVar5,param_1,0x10,iVar6,param_4), iVar6 == 0)) {
        uVar9 = (uint)*(byte *)(uVar8 + 0x18);
        goto LAB_100e7102;
      }
    }
    iVar12 = iVar12 + 1;
    iVar5 = iVar5 + 0x70;
    if (iVar12 == 4) {
      uVar9 = FUN_100dff80();
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = 0;
LAB_100e7102:
        FUN_100e6c2c(0xffffffff,0xffffffff);
        puVar2 = (ushort *)FUN_100e6b90();
        if (puVar2 == (ushort *)0x0) {
          if (uVar8 == 0) {
            FUN_100dffac(uVar9);
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) & 0xf0 | 2;
          puVar3 = param_1;
          puVar7 = puVar2 + 1;
          do {
            puVar4 = puVar3 + 1;
            *(undefined4 *)puVar7 = *puVar3;
            iVar5 = DAT_100e71fc;
            puVar3 = puVar4;
            puVar7 = puVar7 + 2;
          } while (puVar4 != param_1 + 4);
          *(undefined4 *)(puVar2 + 0xe) = DAT_100e71f8;
          uVar1 = DAT_100e7200;
          *(byte *)(puVar2 + 0xc) = (byte)uVar9;
          *(undefined4 *)(puVar2 + 0x2e) = uVar1;
          puVar2[0x33] = *(short *)(DAT_100e7204 + 4) - 4;
          uVar11 = (iVar5 - DAT_100e7208) * 0x20 & 0xff00;
          if (uVar8 == 0) {
            iVar5 = FUN_100dfd90(puVar2 + 0xc);
            if (iVar5 < 0) {
              FUN_100a5b78(DAT_100e7214 | uVar11,DAT_100e7218);
              *(byte *)(puVar2 + 0xc) = 0;
              FUN_100dffac(uVar9);
              puVar2[10] = 0;
              puVar2[0xb] = 0;
              *puVar2 = *puVar2 & 0xe000;
            }
            else {
              uVar8 = (uint)(byte)*puVar2;
              FUN_100a5b78(uVar11 | 0x2100032,DAT_100e7210,uVar8,uVar9);
              FUN_100c3fac((uVar8 & 0xffffff7f) * 0x14 + DAT_100e721c);
            }
          }
          else {
            uVar8 = (uint)(byte)*puVar2;
            FUN_100a5b78(DAT_100e720c | uVar11,DAT_100e7210,uVar8,uVar9);
          }
        }
        FUN_100e6c20();
      }
      return uVar8;
    }
  } while( true );
}

