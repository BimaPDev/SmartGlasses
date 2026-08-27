/* FUN_14045e20 @ 0x14045e20 */

void FUN_14045e20(void)

{
  int iVar1;
  
  iVar1 = DAT_14045e80;
  FUN_1402a6e8(4,0x739,DAT_14045e84,DAT_14045e7c,DAT_14045e78,DAT_14045e74);
  *(undefined2 *)(iVar1 + 0x288) = 0;
  FUN_14045194(8,0xff);
  if (*(char *)(iVar1 + 0x273) != '\0') {
    *(undefined1 *)(iVar1 + 0x273) = 0;
    FUN_1404499c(*(undefined1 *)(iVar1 + 0x278),*(undefined2 *)(iVar1 + 0x276),
                 *(undefined2 *)(iVar1 + 0x274));
    return;
  }
  FUN_14043b00();
  return;
}

