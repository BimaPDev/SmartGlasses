/* FUN_2c4fd448 @ 0x2c4fd448 */

undefined1 FUN_2c4fd448(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_2c4fd460 + param_1 * 0x18;
  if (*(int *)(iVar1 + 4) != 0) {
    return *(undefined1 *)(iVar1 + 1);
  }
  return 0x1b;
}

