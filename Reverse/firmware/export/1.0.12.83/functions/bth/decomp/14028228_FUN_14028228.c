/* FUN_14028228 @ 0x14028228 */

uint FUN_14028228(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  
  uVar6 = *(ushort *)(param_2 + 2);
  if (uVar6 < 0x1000) {
    bVar2 = *(byte *)(param_2 + 8);
    if ((bVar2 & 0x38) == 0) {
      uVar9 = bVar2 & 0x3f;
      uVar13 = *(uint *)(DAT_1402832c + uVar9 * 4);
      if ((bVar2 & 0x40) != 0) {
        uVar13 = uVar13 | 0x4000000;
      }
      if ((bVar2 & 0x80) != 0) {
        uVar13 = uVar13 | 0x8000000;
      }
      if (param_4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x80000000;
      }
      bVar3 = *(byte *)(param_2 + 6);
      bVar1 = *(byte *)(param_2 + 7);
      bVar4 = *(byte *)(param_2 + 4);
      bVar5 = *(byte *)(param_2 + 5);
      if (((bVar2 & 0x3e) == 0) || (uVar9 == 5)) {
        *param_1 = *(undefined4 *)(param_2 + 0xc);
      }
      else {
        iVar7 = 0;
        cVar12 = '2';
        pcVar11 = DAT_14028330;
        while (*(char *)(param_2 + 9) != cVar12) {
          iVar7 = iVar7 + 1;
          if (iVar7 == 0x10) {
            uVar8 = 0;
            goto LAB_140282f8;
          }
          pcVar11 = pcVar11 + 1;
          cVar12 = *pcVar11;
        }
        uVar8 = *(undefined4 *)(DAT_14028334 + iVar7 * 4);
LAB_140282f8:
        *param_1 = uVar8;
      }
      if (((bVar2 & 0x3d) == 0) || (uVar9 == 6)) {
        param_1[1] = *(undefined4 *)(param_2 + 0x10);
      }
      else {
        iVar7 = 0;
        cVar12 = '2';
        pcVar11 = DAT_14028330;
        while (*(char *)(param_2 + 10) != cVar12) {
          iVar7 = iVar7 + 1;
          if (iVar7 == 0x10) {
            uVar8 = 0;
            goto LAB_14028316;
          }
          pcVar11 = pcVar11 + 1;
          cVar12 = *pcVar11;
        }
        uVar8 = *(undefined4 *)(DAT_14028334 + iVar7 * 4);
LAB_14028316:
        param_1[1] = uVar8;
      }
      param_1[2] = param_3;
      param_1[3] = (bVar3 & 7) << 0xc | (bVar1 & 7) << 0xf | (uint)uVar6 | (bVar4 & 7) << 0x12 |
                   (bVar5 & 7) << 0x15 | uVar13 | uVar10;
      return bVar2 & 0x38;
    }
  }
  return 1;
}

