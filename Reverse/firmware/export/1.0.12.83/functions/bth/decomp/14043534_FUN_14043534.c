/* FUN_14043534 @ 0x14043534 */

undefined1 FUN_14043534(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_14043550 + param_1 * 0x38;
  if (*(char *)(iVar1 + 0x443) == '\0') {
    return *(undefined1 *)(iVar1 + 0x441);
  }
  return 0;
}

