/* FUN_10000f4c @ 0x10000f4c */

void FUN_10000f4c(void)

{
  uint *puVar1;
  int iVar2;
  short *psVar3;
  
  puVar1 = DAT_10000f7c;
  iVar2 = 0;
  psVar3 = DAT_10000f78;
  do {
    if (*psVar3 == 0x3b6) {
      *puVar1 = *puVar1 & 0xffffffc0 | (uint)(ushort)psVar3[1];
    }
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 2;
  } while (iVar2 != 7);
  return;
}

