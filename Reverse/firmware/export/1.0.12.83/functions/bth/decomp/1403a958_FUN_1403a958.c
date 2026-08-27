/* FUN_1403a958 @ 0x1403a958 */

undefined1 FUN_1403a958(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1403a970 + param_1 * 0x18;
  if (*(int *)(iVar1 + 4) != 0) {
    return *(undefined1 *)(iVar1 + 1);
  }
  return 0x1b;
}

