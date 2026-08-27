/* FUN_1406dd10 @ 0x1406dd10 */

undefined4 FUN_1406dd10(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_1405c284(*param_1 & 0xfff);
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = *(int *)(DAT_1406dd58 + (iVar1 + 6) * 4);
  uVar4 = param_1[1] & 0x3fff | ((int)(uint)*param_1 >> 0xc) << 0xe;
  uVar3 = *(undefined4 *)(param_1 + 4);
  param_1[5] = (ushort)uVar3;
  param_1[4] = (ushort)uVar4;
  FUN_140739f0(iVar2 + 0x24,param_1,uVar3,uVar4,param_4);
  FUN_14070c18(iVar1);
  return 1;
}

