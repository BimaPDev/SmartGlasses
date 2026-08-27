/* FUN_2c5dcca4 @ 0x2c5dcca4 */

int * FUN_2c5dcca4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_2c5dccdc;
  puVar1 = DAT_2c5dccd8;
  *(undefined2 *)(DAT_2c5dccd8 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_2c66b4b8(puVar1,uVar2,param_2,0,param_4);
  *param_1 = (int)(param_1 + 2);
  iVar3 = FUN_2c66c4ec(puVar1);
  FUN_2c5dcc1c(param_1,puVar1,iVar3 + (int)puVar1);
  return param_1;
}

