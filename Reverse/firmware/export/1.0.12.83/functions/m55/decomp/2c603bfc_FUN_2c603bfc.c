/* FUN_2c603bfc @ 0x2c603bfc */

void FUN_2c603bfc(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  param_1 = (undefined4 *)*param_1;
  uVar4 = param_1[2];
  uVar2 = FUN_2c6033b4(*param_1,uVar4 & 0xff0000,*(undefined2 *)(param_1 + 1));
  uVar1 = *(undefined2 *)(param_1 + 1);
  param_1[3] = uVar2;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_2c6032d4(*param_1,uVar4 & 0xff0000,uVar1,param_1);
  *(undefined2 *)(param_1 + 1) = uVar1;
  puVar3 = (undefined4 *)FUN_2c60322c(*param_1,param_1[2]);
  FUN_2c62ac98(*puVar3,*(undefined2 *)(param_1 + 1),param_1[3],DAT_2c62b038);
  return;
}

