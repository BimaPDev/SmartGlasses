/* FUN_100bb7bc @ 0x100bb7bc */

uint FUN_100bb7bc(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  FUN_1011dbf4(DAT_100bb7ec,0xffffffff);
  pbVar2 = DAT_100bb7f0;
  bVar1 = *DAT_100bb7f0;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    *DAT_100bb7f0 = bVar1 & 0xfe;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    uVar3 = FUN_101367f4();
  }
  FUN_100bb580();
  return uVar3;
}

