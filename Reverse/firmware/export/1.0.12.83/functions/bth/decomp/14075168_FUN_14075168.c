/* FUN_14075168 @ 0x14075168 */

void FUN_14075168(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 unaff_lr;
  
  pcVar1 = DAT_14075228;
  iVar2 = 0;
  FUN_140756c0();
  FUN_14074d80();
  pcVar3 = pcVar1;
  do {
    if (*pcVar3 == '\0') {
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 0x18) = param_3;
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 0x1c) = param_4;
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 0xc) = param_2;
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 0x10) = param_2;
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 4) = param_5;
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 8) = param_5;
      *(undefined4 *)(pcVar1 + iVar2 * 0x28 + 0x24) = unaff_lr;
      *(char **)(pcVar1 + iVar2 * 0x28 + 0x20) = param_1;
      (pcVar1 + iVar2 * 0x28)[0] = '\x01';
      (pcVar1 + iVar2 * 0x28)[1] = '\0';
      FUN_140756b4();
      *param_1 = (char)iVar2 + '\x01';
      return;
    }
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 0x28;
  } while (iVar2 != 0x28);
  FUN_140756b4();
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14075218,DAT_14075214);
}

