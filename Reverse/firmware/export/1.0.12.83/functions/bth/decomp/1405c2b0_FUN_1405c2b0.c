/* FUN_1405c2b0 @ 0x1405c2b0 */

undefined2 FUN_1405c2b0(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 2) && (iVar1 = *(int *)(DAT_1405c2c8 + param_1 * 4), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 0x40);
  }
  return 0xffff;
}

