/* FUN_100398c0 @ 0x100398c0 */

uint FUN_100398c0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = *DAT_100398fc;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar3 = 0;
    pcVar4 = DAT_10039900;
    do {
      uVar1 = uVar3 & 0xff;
      if (*pcVar4 == '\0') goto LAB_100398e4;
      *(char *)(param_1 + uVar3) = *pcVar4;
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 3);
    uVar1 = 3;
  }
LAB_100398e4:
  while (*DAT_100398fc != iVar2) {
    uVar1 = FUN_1013cdc0();
  }
  return uVar1;
}

