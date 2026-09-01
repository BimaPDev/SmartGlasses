/* FUN_10039904 @ 0x10039904 */

uint FUN_10039904(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *DAT_1003994c;
  uVar4 = 0;
  uVar5 = 0;
  if (param_1 != 0) {
    pcVar2 = (char *)(DAT_10039950 + 5);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    do {
      pcVar1 = (char *)(param_1 + uVar4);
      uVar5 = uVar4 & 0xff;
      if (*pcVar1 == '\0') goto LAB_1003992c;
      uVar4 = uVar4 + 1;
      *pcVar2 = *pcVar1;
      pcVar2 = pcVar2 + 1;
    } while (uVar4 != 3);
    uVar5 = 3;
LAB_1003992c:
    FUN_100454dc(2);
  }
  while (*DAT_1003994c != iVar3) {
    uVar5 = FUN_1013cdc0();
  }
  return uVar5;
}

