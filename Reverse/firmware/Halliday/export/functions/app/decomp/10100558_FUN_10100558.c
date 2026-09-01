/* FUN_10100558 @ 0x10100558 */

undefined4 FUN_10100558(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = (uint *)(param_1 + 0x10);
  if (*(uint **)(param_2 + 8) < puVar5) {
    FUN_100f9004(param_2,8,param_3,*(uint **)(param_2 + 8),param_4);
  }
  uVar3 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  if (((uint)(*(int *)(param_2 + 8) - param_1) < uVar3) || (uVar3 < 0x10)) {
    FUN_100f9004(param_2,8);
  }
  else {
    lVar1 = (ulonglong)DAT_1010061c * (ulonglong)(uVar3 - 0x10);
    uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
    if (uVar3 >> 3 < uVar7) {
      FUN_100f9004(param_2,8,(int)lVar1,uVar3,param_4);
    }
  }
  if (uVar7 != 0) {
    uVar6 = 0;
    uVar3 = 0;
    do {
      uVar4 = *puVar5;
      uVar2 = puVar5[1];
      uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
      uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
      uVar8 = puVar5[2];
      puVar5 = puVar5 + 3;
      if (uVar2 < uVar4) {
        FUN_100f9004(param_2,8);
      }
      if ((uVar6 != 0) && (uVar4 <= uVar3)) {
        FUN_100f9004(param_2,8);
      }
      uVar6 = uVar6 + 1;
      if (*(char *)(param_2 + 0xc) != '\0') {
        if ((*(uint *)(param_2 + 0x14) < uVar2 - uVar4) ||
           ((uVar4 + *(uint *)(param_2 + 0x14)) - uVar2 <=
            (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18))) {
          FUN_100f9004(param_2,0x10);
        }
      }
      uVar3 = uVar2;
    } while (uVar7 != uVar6);
  }
  return 0;
}

