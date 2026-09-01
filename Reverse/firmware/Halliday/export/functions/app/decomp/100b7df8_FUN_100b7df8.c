/* FUN_100b7df8 @ 0x100b7df8 */

uint FUN_100b7df8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = DAT_100b7efc;
  uVar7 = (DAT_100b7ef8 - DAT_100b7ef4) * 0x20 & 0xff00;
  FUN_100a5b78(uVar7 | 0x6a00031,DAT_100b7f04,DAT_100b7f00,DAT_100b7ef4,param_4);
  FUN_1011ea48(uVar2,0,0x364);
  if ((int)((uint)*(byte *)(param_1 + 3) << 0x1d) < 0) {
    FUN_100a5b78(DAT_100b7f08 | uVar7,DAT_100b7f04,DAT_100b7f0c,(uint)*(byte *)(param_1 + 3),param_4
                );
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 4;
  }
  *(undefined4 *)(uVar2 + 0x1c) = 0x1000;
  if (*(int *)(uVar2 + 0x20) == 0) {
    uVar3 = thunk_FUN_1009f30c(0x1000,DAT_100b7f10);
    *(undefined4 *)(uVar2 + 0x20) = uVar3;
  }
  iVar4 = FUN_100b6138(*param_1);
  *(int *)(uVar2 + 0x18) = iVar4;
  if (iVar4 == 0) {
    uVar6 = 0;
    uVar5 = DAT_100b7f18;
    uVar3 = DAT_100b7f14;
  }
  else {
    bVar1 = *(byte *)(param_1 + 3);
    uVar5 = (uint)bVar1;
    uVar6 = uVar5 & 1;
    if ((bVar1 & 1) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 1;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 8;
    }
    if ((int)(uVar5 << 0x1b) < 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 0x10;
    }
    if ((int)(uVar5 << 0x1e) < 0) {
      uVar5 = DAT_100b7f20;
      uVar3 = DAT_100b7f1c;
      if ((bVar1 & 1) == 0) goto LAB_100b7e64;
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 2;
    }
    FUN_100b9224(DAT_100b7f24);
    FUN_100b6724(DAT_100b7efc);
    iVar4 = FUN_100b8838();
    *(int *)(uVar2 + 0x14) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(uVar2 + 0xc) = param_1[1];
      uVar7 = DAT_100b7efc;
      *(undefined4 *)(uVar2 + 0x10) = param_1[2];
      FUN_100b65a8(uVar7,0);
      FUN_1013117a(*(undefined4 *)(uVar2 + 0x18),0x100000);
      if (*(int *)(uVar2 + 0x20) == 0) {
        return DAT_100b7efc;
      }
      FUN_1012d1f4();
      *(undefined4 *)(uVar2 + 0x20) = 0;
      return DAT_100b7efc;
    }
    uVar6 = 0;
    uVar5 = DAT_100b7f2c;
    uVar3 = DAT_100b7f28;
  }
LAB_100b7e64:
  FUN_100a5b78(uVar5 | uVar7,DAT_100b7f04,uVar3);
  return uVar6;
}

