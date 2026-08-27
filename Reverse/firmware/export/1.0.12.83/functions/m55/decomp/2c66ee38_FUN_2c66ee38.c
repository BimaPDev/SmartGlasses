/* FUN_2c66ee38 @ 0x2c66ee38 */

undefined4 FUN_2c66ee38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = DAT_2c66eefc;
  FUN_2c6694a8(*DAT_2c66eefc);
  iVar3 = DAT_2c66eef0;
  iVar6 = *DAT_2c66eeec;
  if ((*DAT_2c66eeec == 0) &&
     (*DAT_2c66eeec = DAT_2c66eef0, iVar6 = iVar3, DAT_2c66eef4 != (undefined4 *)0x0)) {
    *(undefined4 *)(iVar3 + 0x88) = *DAT_2c66eef4;
  }
  if (*(int *)(iVar6 + 4) < 0x20) {
    if (param_1 != 0) {
      iVar3 = *(int *)(iVar6 + 0x88);
      if (iVar3 == 0) {
        if ((DAT_2c66eef8 == 0) || (iVar3 = FUN_2c669578(0x108), iVar3 == 0)) {
          FUN_2c6694aa(*puVar1);
          goto LAB_2c66ee72;
        }
        *(undefined4 *)(iVar3 + 0x100) = 0;
        *(undefined4 *)(iVar3 + 0x104) = 0;
        *(int *)(iVar6 + 0x88) = iVar3;
      }
      uVar5 = *(uint *)(iVar6 + 4);
      *(undefined4 *)(iVar3 + uVar5 * 4) = param_3;
      uVar4 = 1 << (uVar5 & 0xff);
      *(uint *)(iVar3 + 0x100) = *(uint *)(iVar3 + 0x100) | uVar4;
      *(undefined4 *)(iVar3 + uVar5 * 4 + 0x80) = param_4;
      if (param_1 == 2) {
        *(uint *)(iVar3 + 0x104) = *(uint *)(iVar3 + 0x104) | uVar4;
      }
    }
    iVar3 = *(int *)(iVar6 + 4);
    uVar2 = *puVar1;
    *(int *)(iVar6 + 4) = iVar3 + 1;
    *(undefined4 *)(iVar6 + (iVar3 + 2) * 4) = param_2;
    FUN_2c6694ac(uVar2);
    uVar2 = 0;
  }
  else {
    FUN_2c6694ac(*puVar1);
LAB_2c66ee72:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

