/* FUN_2c4ec7d0 @ 0x2c4ec7d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ec7d0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = _LAB_2c4ec7f0;
  puVar1 = _LAB_2c4ec7ec;
  *_LAB_2c4ec7ec = param_1;
  *(undefined4 *)(puVar1 + 4) = param_2;
  func_0x2c4ec178(uVar2,puVar1,param_2,puVar1,param_4);
  return 1;
}

