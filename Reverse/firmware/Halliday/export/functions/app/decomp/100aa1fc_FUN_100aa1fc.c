/* FUN_100aa1fc @ 0x100aa1fc */

short FUN_100aa1fc(uint param_1,uint *param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  bVar9 = (param_1 & 0x180000) == 0;
  uVar3 = (param_1 & 0x1fffff) >> 0x13;
  if (bVar9) {
    uVar3 = 2;
  }
  uVar7 = (param_1 & 0xfff) >> 10;
  if (!bVar9) {
    uVar3 = 3 - uVar3;
  }
  uVar5 = (uint)(*(ushort *)(DAT_100aa2dc + uVar7 * 2) >> (uVar3 & 0xff));
  if (uVar5 == 0) {
    return 0;
  }
  uVar4 = (param_1 & 0x7ffff) >> 0x11;
  iVar1 = -uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)
                 (DAT_100aa2e4 +
                 (((param_1 & 0xffff) >> 0xc) + (uint)(uVar3 == 0) * 0x2d + (iVar1 + 3) * 0xf) * 2);
  if (iVar1 == -3) {
    uVar6 = 0x180;
  }
  else if (iVar1 == -1) {
    if (uVar3 == 0) {
      uVar6 = 0x480;
    }
    else {
      uVar6 = 0x240;
    }
  }
  else {
    uVar6 = 0x480;
  }
  uVar8 = *(undefined4 *)(DAT_100aa2e8 + ((iVar1 + 3) * 9 + uVar7 + uVar3 * 3) * 4);
  sVar2 = (short)((int)(param_1 << 0x16) >> 0x1f);
  if (iVar1 == -1) {
    uVar7 = (uVar4 * DAT_100aa2e0) / uVar5;
    if (uVar3 != 0) {
      uVar7 = uVar7 >> 1;
    }
  }
  else {
    if (iVar1 != -2) {
      sVar2 = ((short)((uVar4 * 12000) / uVar5) - sVar2) * 4;
      goto LAB_100aa296;
    }
    uVar7 = (uVar4 * DAT_100aa2e0) / uVar5;
  }
  sVar2 = (short)uVar7 - sVar2;
LAB_100aa296:
  *param_2 = uVar4;
  *param_3 = uVar5;
  *param_4 = uVar6;
  *param_5 = uVar8;
  return sVar2;
}

