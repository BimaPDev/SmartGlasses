/* FUN_10063f9c @ 0x10063f9c */

void FUN_10063f9c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  puVar1 = DAT_10063fe4;
  bVar4 = 0;
  *DAT_10063fe4 = 0x23;
  *(undefined2 *)(puVar1 + 1) = 0x523;
  do {
    FUN_1013ca1a(puVar1 + (uint)bVar4 * 0xb + 4,1);
    iVar2 = DAT_10063fe8;
    bVar4 = bVar4 + 1;
  } while (bVar4 < *(byte *)(puVar1 + 1));
  iVar5 = 0;
  do {
    iVar3 = iVar2 + iVar5;
    iVar5 = iVar5 + 0x24;
    FUN_1011ea48(iVar3,0,0x24);
  } while (iVar5 != 0xb4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

