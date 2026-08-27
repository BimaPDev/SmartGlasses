/* FUN_2c4be910 @ 0x2c4be910 */

uint FUN_2c4be910(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar6 = *(ushort *)(param_2 + 2);
  if (0xfff < uVar6) {
    return 1;
  }
  bVar1 = *(byte *)(param_2 + 8);
  uVar11 = (uint)bVar1;
  if ((bVar1 & 0x38) != 0) {
    return 1;
  }
  uVar14 = uVar11 & 0x3f;
  uVar12 = *(uint *)(DAT_2c4bea68 + uVar14 * 4);
  if ((int)(uVar11 << 0x19) < 0) {
    uVar12 = uVar12 | 0x4000000;
  }
  bVar2 = *(byte *)(param_2 + 6);
  if ((int)(uVar11 << 0x18) < 0) {
    uVar12 = uVar12 | 0x8000000;
  }
  bVar3 = *(byte *)(param_2 + 7);
  bVar4 = *(byte *)(param_2 + 4);
  bVar5 = *(byte *)(param_2 + 5);
  if (param_4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x80000000;
  }
  if (((bVar1 & 0x3e) != 0) && (uVar14 != 5)) {
    pcVar10 = (char *)0x0;
    pcVar7 = DAT_2c4bea6c;
    do {
      pcVar7 = pcVar7 + 1;
      if (*pcVar7 == *(char *)(param_2 + 9)) {
        iVar13 = 0;
        goto LAB_2c4be9b4;
      }
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != &MemManage);
    pcVar7 = (char *)(DAT_2c4bea74 + -1);
LAB_2c4bea2e:
    pcVar10 = pcVar7 + (1 - DAT_2c4bea74);
    pcVar7 = pcVar7 + 1;
    if (*pcVar7 != *(char *)(param_2 + 9)) goto LAB_2c4bea2a;
    iVar13 = 1;
LAB_2c4be9b4:
    uVar9 = *(undefined4 *)(*(int *)(DAT_2c4bea70 + iVar13 * 8 + 4) + ((uint)pcVar10 & 0xff) * 4);
    goto LAB_2c4be9c4;
  }
  *param_1 = *(undefined4 *)(param_2 + 0xc);
LAB_2c4be9d4:
  if (((bVar1 & 0x3d) != 0) && (uVar14 != 6)) {
    pcVar10 = (char *)0x0;
    pcVar7 = DAT_2c4bea6c;
    do {
      pcVar7 = pcVar7 + 1;
      if (*pcVar7 == *(char *)(param_2 + 10)) {
        iVar13 = 0;
        goto LAB_2c4bea0a;
      }
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != &MemManage);
    pcVar7 = (char *)(DAT_2c4bea74 + -1);
LAB_2c4bea50:
    pcVar10 = pcVar7 + (1 - DAT_2c4bea74);
    pcVar7 = pcVar7 + 1;
    if (*pcVar7 != *(char *)(param_2 + 10)) goto LAB_2c4bea4c;
    iVar13 = 1;
LAB_2c4bea0a:
    uVar9 = *(undefined4 *)(*(int *)(DAT_2c4bea70 + iVar13 * 8 + 4) + ((uint)pcVar10 & 0xff) * 4);
    goto LAB_2c4bea18;
  }
  param_1[1] = *(undefined4 *)(param_2 + 0x10);
LAB_2c4be9ea:
  param_1[2] = param_3;
  param_1[3] = (bVar2 & 7) << 0xc | (bVar3 & 7) << 0xf | (uint)uVar6 | (bVar4 & 7) << 0x12 |
               (bVar5 & 7) << 0x15 | uVar12 | uVar8;
  return uVar11 & 0x38;
LAB_2c4bea2a:
  if (pcVar7 == (char *)(DAT_2c4bea74 + 0xf)) goto LAB_2c4bea60;
  goto LAB_2c4bea2e;
LAB_2c4bea60:
  uVar9 = 0;
LAB_2c4be9c4:
  *param_1 = uVar9;
  goto LAB_2c4be9d4;
LAB_2c4bea4c:
  if ((char *)(DAT_2c4bea74 + 0xf) == pcVar7) goto LAB_2c4bea64;
  goto LAB_2c4bea50;
LAB_2c4bea64:
  uVar9 = 0;
LAB_2c4bea18:
  param_1[1] = uVar9;
  goto LAB_2c4be9ea;
}

