/* FUN_100e4d40 @ 0x100e4d40 */

undefined4 FUN_100e4d40(undefined4 param_1,undefined3 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = CONCAT13((char)param_2,param_2);
  iVar1 = FUN_100e4bd8();
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100e4d84 - DAT_100e4d80) * 0x20 & 0xff00U | 0xcf0011,DAT_100e4d88);
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = FUN_10138924(iVar1,0xd,&stack0xfffffff7,1,param_1,uVar2);
  }
  return uVar2;
}

