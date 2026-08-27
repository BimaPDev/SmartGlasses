/* FUN_2c58c9c0 @ 0x2c58c9c0 */

undefined4 FUN_2c58c9c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c [2];
  
  local_c[0] = param_2;
  iVar1 = FUN_2c58c310(param_1,local_c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}

