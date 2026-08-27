/* FUN_140908b4 @ 0x140908b4 */

void FUN_140908b4(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = DAT_140908f4;
  if (*DAT_140908f4 == '\0') {
    pcVar4 = DAT_140908f4 + 4;
    *DAT_140908f4 = '\x01';
    uVar2 = DAT_140908f8;
    *(char **)(pcVar1 + 4) = pcVar4;
    *(char **)(pcVar1 + 8) = pcVar4;
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\x01';
    pcVar1[0xf] = '\0';
    FUN_1408f6a0(uVar2,4);
    iVar3 = FUN_1408aac4(1,2,DAT_14090900,DAT_140908fc);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_14090904);
    }
  }
  return;
}

