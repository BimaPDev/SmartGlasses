/* FUN_2c608c7c @ 0x2c608c7c */

void FUN_2c608c7c(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_2c608cb8;
  if (*DAT_2c608cb8 == '\0') {
    *DAT_2c608cb8 = '\x01';
    iVar3 = FUN_2c604178();
    bVar1 = *(byte *)(iVar3 + 0x22);
    while ((int)((uint)bVar1 << 0x1e) < 0) {
      *(byte *)(iVar3 + 0x22) = *(byte *)(iVar3 + 0x22) & 0xfd;
      FUN_2c608744(iVar3);
      bVar1 = *(byte *)(iVar3 + 0x22);
    }
    *pcVar2 = '\0';
    return;
  }
  return;
}

