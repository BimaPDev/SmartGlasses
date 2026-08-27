/* FUN_140874f4 @ 0x140874f4 */

undefined4 FUN_140874f4(char param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  
  pcVar2 = DAT_14087504;
  *DAT_14087504 = param_1;
  pcVar2[1] = param_2;
  iVar3 = FUN_1407772c(0xc1a,1,0,pcVar2,pcVar2);
  if (iVar3 != 0) {
    pbVar4 = (byte *)FUN_14075458(iVar3,1);
    uVar1 = DAT_140874f0;
    *pbVar4 = param_1 + param_2 * '\x02' & 3;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,uVar1);
  }
  return 1;
}

