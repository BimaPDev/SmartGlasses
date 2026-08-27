/* FUN_2c46a380 @ 0x2c46a380 */

void FUN_2c46a380(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_2c46a20c(param_2,param_1[7],0,param_1[0xc],param_1[0xd]);
  for (puVar3 = (undefined4 *)param_1[8]; puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[2]) {
    FUN_2c46a2a8(iVar1,*puVar3,puVar3[1]);
  }
  FUN_2c669588(param_1[10]);
  uVar2 = *(undefined4 *)(iVar1 + 0x28);
  *param_1 = param_2;
  param_1[10] = uVar2;
  param_1[8] = *(undefined4 *)(iVar1 + 0x20);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  param_1[3] = param_1[3] + 1;
  param_1[9] = uVar2;
  FUN_2c669588(iVar1);
  return;
}

