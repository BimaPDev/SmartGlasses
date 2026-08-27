/* FUN_2c6041fc @ 0x2c6041fc */

undefined4 FUN_2c6041fc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return uVar1;
}

