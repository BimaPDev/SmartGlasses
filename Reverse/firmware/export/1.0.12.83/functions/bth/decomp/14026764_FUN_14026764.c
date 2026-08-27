/* FUN_14026764 @ 0x14026764 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14026764(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = DAT_14026938;
  iVar2 = DAT_14026934;
  if (param_1 < 2) {
    if (1 < param_2) {
      return 2;
    }
    if (*(char *)(DAT_14026934 + param_1) == '\0') {
      uVar4 = (uint)*(char *)(DAT_14026938 + param_1);
      if (-1 < (int)uVar4) {
        *(int *)(DAT_1402695c + ((uVar4 >> 5) + 0x20) * 4) = 1 << (uVar4 & 0x1f);
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      iVar7 = DAT_1402693c;
      uVar4 = (uint)*(char *)(DAT_1402693c + param_1);
      if (-1 < (int)uVar4) {
        *(int *)(DAT_1402695c + ((uVar4 >> 5) + 0x20) * 4) = 1 << (uVar4 & 0x1f);
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
      }
      iVar3 = DAT_14026940;
      uVar4 = (uint)*(char *)(iVar5 + param_1);
      *(undefined4 *)(*(int *)(DAT_14026940 + 8) + (uVar4 + 0x10) * 4) = DAT_14026960;
      DataSynchronizationBarrier(0xf);
      if ((int)uVar4 < 0) {
        *(undefined1 *)((uVar4 & 0xf) + iVar3 + 0x14) = 0xa0;
      }
      else {
        *(undefined1 *)(uVar4 + 0xe000e400) = 0xa0;
      }
      iVar5 = DAT_14026940;
      uVar4 = (uint)*(char *)(iVar7 + param_1);
      *(undefined4 *)(*(int *)(DAT_14026940 + 8) + (uVar4 + 0x10) * 4) = DAT_14026964;
      DataSynchronizationBarrier(0xf);
      if ((int)uVar4 < 0) {
        *(undefined1 *)(iVar5 + (uVar4 & 0xf) + 0x14) = 0xa0;
      }
      else {
        *(undefined1 *)(uVar4 + 0xe000e400) = 0xa0;
      }
      iVar7 = DAT_14026968;
      iVar5 = DAT_14026954;
      if (param_1 == 0) {
        _DAT_400000a0 = 0x8000;
        _DAT_400000a4 = 5;
      }
      else {
        _DAT_400000a0 = 0x10000;
        _DAT_400000a4 = 10;
      }
      iVar8 = DAT_14026948 + param_1 * 0x10;
      iVar9 = DAT_1402694c + param_1 * 0x3c;
      **(int **)(DAT_14026944 + param_1 * 4) = DAT_14026968 + param_1 * 4;
      iVar3 = DAT_14026950;
      *(char *)(iVar5 + param_1) = param_5;
      *(undefined4 *)(iVar7 + param_1 * 4) = 0;
      *(undefined4 *)(iVar3 + param_1 * 4) = 0;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(undefined1 *)(iVar9 + 0x10) = 0;
      *(undefined1 *)(iVar9 + 0x24) = 0;
      *(undefined1 *)(iVar9 + 0x38) = 0;
      if (-1 < (int)uVar4) {
        iVar7 = (uVar4 >> 5) * 4;
        iVar5 = 1 << (uVar4 & 0x1f);
        *(int *)(&DAT_e000e280 + iVar7) = iVar5;
        *(int *)(&DAT_e000e100 + iVar7) = iVar5;
      }
      iVar5 = DAT_14026970;
      bVar1 = *(byte *)(iVar2 + param_1);
      iVar7 = param_2 + param_1 * 2;
      *(undefined4 *)(DAT_1402696c + iVar7 * 4) = param_3;
      *(undefined4 *)(iVar5 + iVar7 * 4) = param_4;
      *(byte *)(iVar2 + param_1) = (byte)(1 << (param_2 & 0xff)) | bVar1;
      return 0;
    }
    if (*(char *)(DAT_14026954 + param_1) != param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14026958,param_5,*(char *)(DAT_14026954 + param_1),DAT_14026954,param_4);
    }
    uVar6 = 3;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

