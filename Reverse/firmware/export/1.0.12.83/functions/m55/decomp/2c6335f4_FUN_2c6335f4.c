/* FUN_2c6335f4 @ 0x2c6335f4 */

void FUN_2c6335f4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c637ab0(*(undefined4 *)(param_1 + 0x24));
  if ((iVar1 == 0xffff) && (iVar1 = FUN_2c637ab4(*(undefined4 *)(param_1 + 0x24)), iVar1 == 0xffff))
  {
    return;
  }
  FUN_2c63735c(*(undefined4 *)(param_1 + 0x24),0xffff);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x48) = 0xffff;
  FUN_2c607df0();
  return;
}

