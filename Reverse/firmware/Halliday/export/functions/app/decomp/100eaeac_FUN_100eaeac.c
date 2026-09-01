/* FUN_100eaeac @ 0x100eaeac */

int FUN_100eaeac(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*DAT_100eaf20 != 0) && (uVar2 = *DAT_100eaf24, uVar2 != 0)) && (param_1 <= uVar2)) {
    for (uVar3 = 0; *DAT_100eaf20 != uVar3; uVar3 = uVar3 + 1) {
      uVar4 = 1 << (uVar3 & 0xff);
      if ((uVar4 & *DAT_100eaf28) == 0) {
        iVar1 = *DAT_100eaf3c;
        *DAT_100eaf28 = uVar4 | *DAT_100eaf28;
        return uVar3 * uVar2 + iVar1;
      }
    }
  }
  iVar1 = FUN_100ed6b8(2,0x40,param_1,param_2,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100eaf30 - DAT_100eaf2c) * 0x20 & 0xff00U | 0xce0011,DAT_100eaf38,DAT_100eaf34
                 ,*DAT_100eaf28);
    FUN_100ebda8();
  }
  return iVar1;
}

