/* FUN_2c62ec6c @ 0x2c62ec6c */

void FUN_2c62ec6c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  (*(code *)*puVar1)(puVar1[1]);
  if ((puVar1 != DAT_2c62beb8) && (puVar1 != (undefined4 *)0x0)) {
    FUN_2c4726f0();
    return;
  }
  return;
}

