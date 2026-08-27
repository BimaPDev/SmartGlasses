/* FUN_2c4e0a50 @ 0x2c4e0a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c4e0a50(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  func_0x2c4df538(param_1 + 0x15c,param_1 + 0x50,_LAB_2c4e0a80);
  func_0x2c4df538(param_1 + 0x15c,param_1 + 0xf8,0);
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = 0, *(short *)(param_1 + 0x5a) != 0)) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xa5) = uVar1;
  return CONCAT44(param_2,1);
}

