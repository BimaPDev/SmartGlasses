/* FUN_100d54fc @ 0x100d54fc */

uint FUN_100d54fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d5538 | (DAT_100d5534 - DAT_100d5530) * 0x20 & 0xff00U,DAT_100d5540,
                 DAT_100d553c);
    uVar2 = 0xffffffed;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x39) & 0x1f) >> 4;
  }
  return uVar2;
}

