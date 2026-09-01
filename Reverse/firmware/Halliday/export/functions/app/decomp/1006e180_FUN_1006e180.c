/* FUN_1006e180 @ 0x1006e180 */

void FUN_1006e180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = DAT_1006e220;
  iVar1 = DAT_1006e218;
  iVar5 = 0;
  iVar8 = *(int *)(param_1 + 4);
  do {
    iVar7 = *(int *)(*(int *)(iVar8 + 4) + 0x240 + iVar5 * 4);
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar1 + iVar5 * 4);
      if (iVar4 == 0) {
        FUN_10119dc2(uVar2,iVar5,iVar7);
      }
      else {
        FUN_1006e114(*(int *)(iVar4 + 0x10) + 4,param_1,iVar7);
      }
      *(int *)(*(int *)(iVar8 + 4) + 0x240 + iVar5 * 4) = iVar7;
    }
    uVar3 = DAT_1006e224;
    iVar4 = DAT_1006e21c;
    iVar7 = DAT_1006e218;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  uVar6 = 0;
  do {
    if ((*(uint *)(iVar4 + uVar6 * 4) & 0x1000000) != 0) {
      if (*(int *)(iVar7 + 0xc) == 0) {
        FUN_10119dc2(uVar3,uVar6);
      }
      else {
        FUN_1006e114(*(int *)(*(int *)(iVar7 + 0xc) + 0x10) + 4,param_1,1 << (uVar6 & 0xff));
      }
      *(undefined4 *)(uVar6 * 4 + iVar4) = *(undefined4 *)(uVar6 * 4 + iVar4);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 4);
  return;
}

