/* FUN_1408aaa0 @ 0x1408aaa0 */

undefined4 FUN_1408aaa0(void)

{
  undefined1 *puVar1;
  undefined4 in_r3;
  
  if (*DAT_1408aac0 == '\0') {
    puVar1 = (undefined1 *)FUN_140e5658(DAT_1408aac0,0,0x30,DAT_1408aac0,in_r3);
    *(undefined1 **)(puVar1 + 8) = puVar1 + 8;
    *(undefined1 **)(puVar1 + 0xc) = puVar1 + 8;
    *puVar1 = 1;
  }
  return 0;
}

