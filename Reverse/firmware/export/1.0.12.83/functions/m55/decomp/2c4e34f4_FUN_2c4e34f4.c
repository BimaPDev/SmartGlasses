/* FUN_2c4e34f4 @ 0x2c4e34f4 */

void FUN_2c4e34f4(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_2c4e3500;
  *(undefined2 *)(DAT_2c4e3500 + 1) = param_1;
  *(undefined2 *)((int)puVar1 + 6) = param_2;
  *puVar1 = param_3;
  return;
}

