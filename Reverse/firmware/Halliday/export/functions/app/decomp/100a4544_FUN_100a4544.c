/* FUN_100a4544 @ 0x100a4544 */

int FUN_100a4544(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = DAT_100a4600;
  iVar1 = DAT_100a45fc;
  iVar6 = 0;
  iVar7 = 0;
  uVar5 = (DAT_100a45e4 - DAT_100a45e8) * 0x20 & 0xff00;
  do {
    iVar8 = iVar1 + iVar7 * 8;
    if (-1 < (int)((uint)*(byte *)(iVar8 + 4) << 0x1f)) {
      iVar3 = thunk_FUN_1009f30c(0x24,uVar2);
      if (iVar3 == 0) {
        FUN_100a5b78(uVar5 | 0x560011,DAT_100a45f0,DAT_100a45ec);
        return -0xc;
      }
      *(undefined4 *)(iVar3 + 8) = 2;
      uVar4 = *(undefined4 *)(DAT_100a45f4 + iVar7 * 4);
      *(undefined4 *)(iVar3 + 0xc) = uVar4;
      iVar6 = FUN_1006c5dc();
      if (iVar6 == 0) {
        FUN_100a5b78(uVar5 | 0x4d0031,DAT_100a45f0,DAT_100a45f8,uVar4,param_1,uVar4,param_3);
        *(int *)(iVar1 + iVar7 * 8) = iVar3;
        *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) & 0xfc | 3;
      }
      else {
        FUN_1012d1f4(iVar3);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  return iVar6;
}

