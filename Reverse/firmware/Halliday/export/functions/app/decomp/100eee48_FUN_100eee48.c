/* FUN_100eee48 @ 0x100eee48 */

undefined4 FUN_100eee48(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = DAT_100eeebc;
  uVar6 = 1 << (param_1 & 0xff);
  uVar5 = DAT_100eeebc[1];
  if ((uVar5 & uVar6) != 0) {
    return 0xffffff88;
  }
  iVar2 = FUN_100eebe8();
  if (iVar2 == 0) {
    return 0xffffffea;
  }
  iVar3 = *piVar1;
  piVar1[1] = uVar5 | uVar6;
  uVar5 = (uint)*(byte *)(iVar3 + 2);
  if (param_1 < uVar5) {
    uVar6 = 0;
    if (*(int *)(iVar3 + 8) != 0) {
      uVar6 = (uint)*(byte *)(*(int *)(iVar3 + 8) + param_1);
    }
  }
  else {
    uVar6 = 0;
  }
  if (param_1 < uVar5) {
    iVar3 = *(int *)(iVar3 + 0xc);
    uVar4 = 0;
    if (iVar3 == 0) goto LAB_100eee92;
  }
  else {
    if ((int)(uVar5 + 2) <= (int)param_1) {
      uVar4 = 0;
      goto LAB_100eee92;
    }
    param_1 = (param_1 - uVar5) + 6;
  }
  uVar4 = *(undefined4 *)(iVar3 + param_1 * 4);
LAB_100eee92:
  uVar4 = FUN_10138b7e(iVar2,uVar4,uVar6 | 0x40 | param_2,param_4);
  return uVar4;
}

