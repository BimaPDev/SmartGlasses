/* FUN_100d55bc @ 0x100d55bc */

uint FUN_100d55bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d55f8 | (DAT_100d55f4 - DAT_100d55f0) * 0x20 & 0xff00U,DAT_100d5600,
                 DAT_100d55fc);
    uVar2 = 0xffffffed;
  }
  else {
    uVar2 = *(byte *)(iVar1 + 0x43) & 0x3f;
  }
  return uVar2;
}

