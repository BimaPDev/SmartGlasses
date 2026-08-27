/* FUN_1402e690 @ 0x1402e690 */

void FUN_1402e690(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = DAT_1402e6f4;
  uVar7 = 0;
  *param_1 = DAT_1402e6f4[0x26];
  iVar3 = DAT_1402e6f8;
  puVar2 = DAT_1402e6f4;
  uVar4 = puVar1[0x26];
  while (uVar7 = uVar7 + 1, uVar7 != 0xb) {
    while ((1 << (uVar7 & 0xff)) << 0x15 < 0) {
      uVar6 = uVar7 << 1;
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 & ~(3 << (uVar6 & 0xff)) | 1 << (uVar6 & 0xff);
      if (uVar7 == 0xb) goto LAB_1402e6d2;
    }
  }
LAB_1402e6d2:
  DAT_1402e6f4[0x26] = uVar4;
  uVar5 = *puVar2;
  uVar4 = *(uint *)(iVar3 + 8) | 0x200;
  *(uint *)(iVar3 + 8) = uVar4;
  uVar5 = FUN_1402e1c8(0x400,uVar5,iVar3,uVar4,param_4);
  *param_2 = uVar5;
  return;
}

