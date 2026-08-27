/* FUN_14027a68 @ 0x14027a68 */

undefined4 FUN_14027a68(int param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  
  pcVar1 = DAT_14027b20;
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14027b28,param_1);
  }
  if ((*DAT_14027b20 == '\0') && (DAT_14027b20[1] == '\0')) {
    FUN_1402dea4(1);
    FUN_1402df3c();
    FUN_1402da3c(0x26);
    FUN_1402da3c(0x1b);
    FUN_1402dbf4(0x26);
    FUN_1402dbf4(0x1b);
    FUN_140e5398(2);
    puVar2 = DAT_14027b24;
    iVar3 = 10;
    DAT_14027b24[4] = DAT_14027b24[4] & 0xffff7fff;
    puVar2[0xd] = puVar2[0xd] & 0xfffffffe;
    puVar2[0xd] = puVar2[0xd] & 0xfffffffd;
    puVar2[2] = puVar2[2] & 0xfffffffe;
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[4] = puVar2[4] & 0xfffffff8;
    puVar2[4] = puVar2[4] | 0x100000;
    puVar2[5] = puVar2[5] | 4;
    puVar2[4] = puVar2[4] | 0x280000;
    *puVar2 = *puVar2 | 1;
    do {
      FUN_1402dea4(0);
      FUN_1402dea4(1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pcVar1[param_2] = '\x01';
    return 0;
  }
  DAT_14027b20[param_2] = '\x01';
  return 0;
}

