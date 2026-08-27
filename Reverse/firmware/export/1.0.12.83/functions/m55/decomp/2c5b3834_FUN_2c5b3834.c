/* FUN_2c5b3834 @ 0x2c5b3834 */

byte FUN_2c5b3834(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((*(char *)(param_1 + 4) != '\0') && (bVar1 = 0, *(int *)(param_1 + 8) != 0)) {
    bVar1 = FUN_2c606b94(*(int *)(param_1 + 8),1,param_3,param_1,param_4);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}

