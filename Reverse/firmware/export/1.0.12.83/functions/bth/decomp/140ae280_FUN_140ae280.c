/* FUN_140ae280 @ 0x140ae280 */

void FUN_140ae280(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = DAT_140ae354;
  piVar1 = DAT_140ae330;
  if (param_2 == 0) {
    return;
  }
  if (*DAT_140ae330 != 0) {
    FUN_140e5148(*DAT_140ae354,0xffffffff);
    uVar3 = FUN_140ae8f8(*piVar1,param_2);
    iVar7 = DAT_140ae334;
    iVar6 = DAT_140ae334 + param_1 * 0xc;
    uVar5 = *(uint *)(iVar6 + 0x1c);
    if (uVar5 < uVar3) {
      uVar4 = DAT_140ae33c;
      if (param_1 < 0xc) {
        uVar4 = *(undefined4 *)(DAT_140ae338 + param_1 * 4);
      }
      FUN_1402a6e8(4,0x334,DAT_140ae344,DAT_140ae348,DAT_140ae340,param_2,uVar5,uVar3,uVar4);
      *(undefined4 *)(iVar7 + param_1 * 0xc + 0x1c) = 0;
    }
    else {
      *(uint *)(iVar6 + 0x1c) = uVar5 - uVar3;
    }
    iVar7 = iVar7 + param_1 * 0xc;
    uVar4 = *puVar2;
    *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + -1;
    FUN_140e52d8(uVar4);
    return;
  }
  FUN_1402a6e8(4,0x226,DAT_140ae344,DAT_140ae348,DAT_140ae350,DAT_140ae34c);
  return;
}

