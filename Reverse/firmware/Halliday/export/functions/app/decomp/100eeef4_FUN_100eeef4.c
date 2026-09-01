/* FUN_100eeef4 @ 0x100eeef4 */

void FUN_100eeef4(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_100eef28;
  uVar4 = 1 << (param_1 & 0xff);
  uVar3 = *(uint *)(DAT_100eef28 + 4);
  if ((uVar4 & uVar3) == 0) {
    return;
  }
  iVar2 = FUN_100eebe8();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100eef34,0x85,DAT_100eef30,DAT_100eef2c);
  }
  *(uint *)(iVar1 + 4) = uVar3 & ~uVar4;
  FUN_10138b9c();
  return;
}

