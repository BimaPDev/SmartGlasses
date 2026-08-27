/* FUN_140547f4 @ 0x140547f4 */

void FUN_140547f4(uint param_1,undefined1 param_2)

{
  int iVar1;
  
  if (((param_1 < 2) && (iVar1 = *(int *)(DAT_14054810 + param_1 * 4), iVar1 != 0)) &&
     ((int)((uint)*(byte *)(iVar1 + 0x43) << 0x1b) < 0)) {
    *(undefined1 *)(iVar1 + 0x73) = param_2;
  }
  return;
}

