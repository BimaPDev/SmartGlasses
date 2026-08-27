/* FUN_14076d24 @ 0x14076d24 */

void FUN_14076d24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = DAT_14076ea4;
  FUN_140e5148(*(undefined4 *)(DAT_14076ea4 + 4),0xffffffff);
  pbVar2 = (byte *)FUN_1407667c(0,param_4);
  if (pbVar2 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_14076e98,DAT_14076e8c,param_4,
                 DAT_14076e94 * ((int)pbVar2 - (iVar3 + 0x20) >> 2),(*pbVar2 & 0xf) >> 1);
  }
  pbVar2 = (byte *)(iVar3 + 0x20);
  iVar3 = 0;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 0x14;
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14076e90,DAT_14076e8c,iVar3,param_1,param_4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x19);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_14076e9c,DAT_14076e8c);
}

