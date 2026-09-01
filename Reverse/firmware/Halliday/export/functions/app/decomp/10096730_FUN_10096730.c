/* FUN_10096730 @ 0x10096730 */

void FUN_10096730(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar7;
  undefined8 uVar8;
  uint local_24;
  int local_20;
  int local_1c;
  
  FUN_10125af4();
  uVar1 = FUN_101277b8(param_2);
  if ((2 < uVar1) && (FUN_10094174(2,DAT_100968f8,0x5b,DAT_100968f4,DAT_100968f0), uVar1 == 3)) {
    FUN_10094174(2,DAT_100968f8,0x61,DAT_100968f4,DAT_100968fc);
    if ((*(byte *)(param_1 + 0x4e) & 3) - 1 < 2) {
      FUN_10094268(*(undefined4 *)(param_1 + 0x2c),DAT_100968f4);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 3;
    return;
  }
  FUN_1008db78(param_2,&local_24);
  if (uVar1 == 0) {
    if ((*(byte *)(param_1 + 0x4e) & 3) - 1 < 2) {
      FUN_10094268(*(undefined4 *)(param_1 + 0x2c),DAT_100968f4);
    }
    *(int *)(param_1 + 0x2c) = param_2;
  }
  else {
    if (((uVar1 - 1 & 0xff) < 2) && (iVar7 = *(int *)(param_1 + 0x2c), iVar7 != param_2)) {
      if (1 < (*(byte *)(param_1 + 0x4e) & 3) - 1) {
        iVar7 = 0;
      }
      iVar2 = FUN_1011ea10(param_2);
      iVar2 = FUN_10094254(iVar2 + 1,DAT_100968f4);
      if (iVar2 == 0) {
        uVar8 = FUN_10094174(3,DAT_100968f8,0x80,DAT_100968f4,DAT_10096908,DAT_10096904,DAT_10096900
                            );
        FUN_10119dc2(DAT_10096910,DAT_1009690c,DAT_100968f8,0x80,uVar8);
        FUN_10119dc2(DAT_10096914);
        FUN_1011a1f0(DAT_100968f8,0x80,extraout_r2,extraout_r3);
        return;
      }
      FUN_1011e9f0(iVar2,param_2);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar7 != 0) {
        FUN_10094268(iVar7,DAT_100968f4);
      }
    }
    if (uVar1 == 2) {
      uVar3 = FUN_1012691c(param_1,0,0x57);
      uVar4 = FUN_1012691c(param_1,0,0x58);
      uVar5 = FUN_1012691c(param_1,0,0x59);
      FUN_1009512c(&local_20,param_2,uVar3,uVar4,uVar5,0x1fffffff,0);
      local_24 = DAT_10096918 & local_20 << 10 | local_1c << 0x15 | local_24 & 0x3ff;
    }
  }
  uVar6 = (local_24 & 0x1fffff) >> 10;
  *(uint *)(param_1 + 0x38) = uVar6;
  *(uint *)(param_1 + 0x3c) = local_24 >> 0x15;
  *(int *)(param_1 + 0x48) = (int)(local_24 >> 0x15) >> 1;
  *(byte *)(param_1 + 0x4e) =
       (byte)uVar1 & 3 | (byte)((local_24 & 0x1f) << 2) | *(byte *)(param_1 + 0x4e) & 0x80;
  *(int *)(param_1 + 0x44) = (int)uVar6 >> 1;
  FUN_1008964c(param_1);
  if ((*(short *)(param_1 + 0x40) != 0) || (*(short *)(param_1 + 0x4c) != 0x100)) {
    FUN_1012543e(param_1);
  }
  FUN_10125af4(param_1);
  return;
}

