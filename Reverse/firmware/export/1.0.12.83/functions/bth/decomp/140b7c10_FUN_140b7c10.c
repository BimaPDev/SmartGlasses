/* FUN_140b7c10 @ 0x140b7c10 */

void FUN_140b7c10(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_140b9444(1,0x304);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_140b7cec,DAT_140b7ce4,0xd6);
  }
  *puVar1 = (char)param_1;
  if (param_1 < 8) {
    if (param_1 < 6) {
      if (param_1 != 0) goto LAB_140b7c90;
      goto LAB_140b7c34;
    }
  }
  else if (param_1 != 10) {
LAB_140b7c90:
    FUN_140b94c4(puVar1);
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_140b7ce8,DAT_140b7ce4,0x105,param_1,0);
  }
  *(undefined2 *)(puVar1 + 0x92) = 0x100;
LAB_140b7c34:
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_140b7ce8,DAT_140b7ce4,0x105,param_1,puVar1);
}

