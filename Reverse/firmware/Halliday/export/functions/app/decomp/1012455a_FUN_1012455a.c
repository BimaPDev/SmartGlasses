/* FUN_1012455a @ 0x1012455a */

undefined4 FUN_1012455a(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0)) {
    uVar1 = **(undefined4 **)(param_1 + 0xc);
  }
  return uVar1;
}

