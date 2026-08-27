/* FUN_2c66b350 @ 0x2c66b350 */

uint FUN_2c66b350(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_2c668868();
  }
  if (param_2 == DAT_2c66b39c) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == DAT_2c66b3a0) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == DAT_2c66b3a4) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  iVar1 = FUN_2c66b23c(param_1,param_2);
  if (iVar1 == 0) {
    param_2[1] = param_2[1] + -1;
    pbVar3 = (byte *)*param_2;
    *param_2 = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

