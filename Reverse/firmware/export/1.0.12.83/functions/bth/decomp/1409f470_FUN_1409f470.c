/* FUN_1409f470 @ 0x1409f470 */

void FUN_1409f470(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *DAT_1409f490;
  uVar1 = *(undefined4 *)(iVar3 + 0xe);
  uVar2 = *(undefined4 *)(iVar3 + 0x12);
  uVar4 = *(undefined4 *)(iVar3 + 0x16);
  *param_1 = *(undefined4 *)(iVar3 + 10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return;
}

