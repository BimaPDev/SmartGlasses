/* FUN_14029f4c @ 0x14029f4c */

undefined4 FUN_14029f4c(void)

{
  byte *pbVar1;
  char *pcVar2;
  
  pcVar2 = DAT_14029f84;
  pbVar1 = DAT_14029f80;
  if (*DAT_14029f80 - 1 < 2) {
    if (*DAT_14029f84 != -1) {
      FUN_14028694();
      FUN_14028888(*pcVar2);
      *pcVar2 = -1;
    }
    FUN_1402c520(*DAT_14029f88);
  }
  *pbVar1 = 3;
  return 0;
}

