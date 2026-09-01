/* FUN_100539e8 @ 0x100539e8 */

undefined8 FUN_100539e8(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar10 = param_1[4] + 1;
  iVar5 = param_1[3] - 1;
  uVar6 = param_1[5];
  uVar7 = (uVar6 + 0x76c) - (uint)(uVar10 < 3);
  iVar8 = (((int)uVar6 >> 0x1f) + (uint)(0xfffff893 < uVar6)) -
          (uint)(uVar6 + 0x76c < (uint)(uVar10 < 3));
  uVar6 = uVar7;
  if (iVar8 < 0) {
    iVar8 = iVar8 + -1 + (uint)(0x18e < uVar7);
    uVar6 = uVar7 - 399;
  }
  uVar14 = FUN_10004198(uVar6,iVar8,400,0,param_1,iVar5,param_3);
  uVar7 = DAT_10053ad8 * (int)uVar14 + uVar7;
  uVar6 = *param_1;
  uVar1 = (longlong)(int)param_1[2] * 0x3c + (longlong)(int)param_1[1];
  lVar2 = (uVar1 & 0xffffffff) * 0x3c;
  uVar11 = (uint)lVar2;
  if (uVar10 < 3) {
    iVar8 = 9;
  }
  else {
    iVar8 = -3;
  }
  uVar12 = uVar11 + uVar6;
  uVar13 = ((uVar10 + iVar8) * 0x99 + 2) / 5 +
           ((uVar7 * 0x16d + (uVar7 >> 2) + iVar5) - uVar7 / 100);
  lVar3 = (uVar14 & 0xffffffff) * (ulonglong)DAT_10053adc;
  uVar7 = (uint)lVar3;
  uVar9 = uVar7 + DAT_10053ae0;
  lVar4 = (ulonglong)(uVar9 + uVar13) * (ulonglong)DAT_10053ae4;
  uVar10 = (uint)lVar4;
  return CONCAT44(DAT_10053ae4 *
                  (DAT_10053adc * (int)(uVar14 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) + -1 +
                   (uint)CARRY4(uVar7,DAT_10053ae0) + (uint)CARRY4(uVar9,uVar13)) +
                  (int)((ulonglong)lVar4 >> 0x20) +
                  (int)(uVar1 >> 0x20) * 0x3c + (int)((ulonglong)lVar2 >> 0x20) +
                  ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar11,uVar6) + (uint)CARRY4(uVar10,uVar12),
                  uVar10 + uVar12);
}

