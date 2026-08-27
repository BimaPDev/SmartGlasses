/* FUN_2c668e7c @ 0x2c668e7c */

uint FUN_2c668e7c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = *DAT_2c668ef4;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) == 0)) {
    FUN_2c668868(iVar4);
  }
  if (param_1 == DAT_2c668ef8) {
    param_1 = *(undefined4 **)(iVar4 + 4);
  }
  else if (param_1 == DAT_2c668efc) {
    param_1 = *(undefined4 **)(iVar4 + 8);
  }
  else if (param_1 == DAT_2c668f00) {
    param_1 = *(undefined4 **)(iVar4 + 0xc);
  }
  if ((-1 < (int)(param_1[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_1 + 3) << 0x16))) {
    FUN_2c6694a8(param_1[0x16]);
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + -1;
  if (iVar2 + -1 < 0) {
    uVar1 = FUN_2c66b350(iVar4,param_1);
  }
  else {
    pbVar3 = (byte *)*param_1;
    *param_1 = pbVar3 + 1;
    uVar1 = (uint)*pbVar3;
  }
  if ((-1 < (int)(param_1[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_1 + 3) << 0x16))) {
    FUN_2c6694ac(param_1[0x16]);
  }
  return uVar1;
}

