/* FUN_101139a4 @ 0x101139a4 */

undefined4 FUN_101139a4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = DAT_101139bc[1];
    *param_1 = *DAT_101139bc;
    param_1[1] = uVar1;
    return 0;
  }
  return 0xffffffea;
}

