/* FUN_1404fef8 @ 0x1404fef8 */

undefined4 FUN_1404fef8(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_1404ff34;
  if (*DAT_1404ff34 == '\0') {
    return 0;
  }
  FUN_1402a6e8(4,0x4c4,DAT_1404ff44,DAT_1404ff40,DAT_1404ff3c,DAT_1404ff38,0,0);
  *pcVar1 = '\0';
  FUN_14032d30(1);
  return 0;
}

