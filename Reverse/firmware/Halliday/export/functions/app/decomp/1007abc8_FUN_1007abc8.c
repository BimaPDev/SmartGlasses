/* FUN_1007abc8 @ 0x1007abc8 */

uint FUN_1007abc8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar2 = DAT_1007ad30;
  iVar8 = *(int *)(DAT_1007ad30 + 0x1e8);
  uVar7 = (DAT_1007ad34 - DAT_1007ad38) * 0x20 & 0xff00;
  uVar9 = 0;
  uVar3 = param_1;
  if (iVar8 != 0) {
    uVar3 = FUN_1011fe16();
    FUN_100a5b78(DAT_1007ad3c | uVar7,DAT_1007ad44,DAT_1007ad40,iVar8,uVar3);
    iVar8 = FUN_1011fe16();
    uVar9 = (uint)(iVar8 - *(int *)(iVar2 + 0x1e8)) / 1000;
  }
  if (0xa28 < param_1 - 0x898) {
    FUN_100a5b78(DAT_1007ad48 | uVar7,DAT_1007ad44,DAT_1007ad4c,param_1,uVar3,param_2,param_3,
                 param_4);
  }
  uVar4 = FUN_1007ab0c(param_1);
  uVar3 = uVar9;
  FUN_100a5b78(DAT_1007ad50 | uVar7,DAT_1007ad44,DAT_1007ad54,param_1,uVar4,uVar9,param_3,param_4);
  if ((*(char *)(iVar2 + 0x141) == '\0') && (uVar1 = *(ushort *)(iVar2 + 0x1e4), uVar1 != 0)) {
    *(undefined2 *)(iVar2 + 0x1e4) = 0;
    param_1 = (uint)uVar1;
  }
  uVar6 = (uint)*(ushort *)(iVar2 + 0x15e);
  uVar5 = FUN_1007ab0c(uVar6);
  uVar10 = uVar5;
  FUN_100a5b78(DAT_1007ad58 | uVar7,DAT_1007ad44,DAT_1007ad5c,uVar6,uVar5,uVar3);
  if ((*(char *)(iVar2 + 0x141) == '\x02') || (*(char *)(iVar2 + 0x141) == '\x04')) {
    if ((uVar9 - 1 < 0xe0f) &&
       (uVar9 = FUN_1007ab70((uVar9 * 0x1e) / 0x3c + uVar5), uVar9 < param_1)) {
      FUN_100a5b78(DAT_1007ad60 | uVar7,DAT_1007ad44,DAT_1007ad64);
      param_1 = uVar9;
    }
    if (param_1 < *(ushort *)(iVar2 + 0x15e)) {
      param_1 = (uint)*(ushort *)(iVar2 + 0x15e);
    }
  }
  else {
    if (((uVar9 - 1 < 0xe0f) && (uVar9 = (uVar9 * 0x1e) / 0x3c, uVar9 <= uVar5)) &&
       (uVar9 = FUN_1007ab70(uVar5 - uVar9), param_1 < uVar9)) {
      FUN_100a5b78(DAT_1007ad78 | uVar7,DAT_1007ad44,DAT_1007ad7c);
      param_1 = uVar9;
    }
    if (*(ushort *)(iVar2 + 0x15e) <= param_1) {
      param_1 = (uint)*(ushort *)(iVar2 + 0x15e);
    }
  }
  uVar4 = FUN_1011fe16();
  *(undefined4 *)(iVar2 + 0x1e8) = uVar4;
  FUN_100a5b78(DAT_1007ad68 | uVar7,DAT_1007ad44,DAT_1007ad6c,uVar4,uVar10);
  if (*(ushort *)(iVar2 + 0x15e) != param_1) {
    FUN_100a5b78(DAT_1007ad70 | uVar7,DAT_1007ad44,DAT_1007ad74,(uint)*(ushort *)(iVar2 + 0x15e),
                 param_1);
    *(short *)(iVar2 + 0x15e) = (short)param_1;
  }
  if (*(char *)(iVar2 + 0x13f) != '\x01') {
    FUN_1007aa68(param_1);
  }
  return param_1;
}

