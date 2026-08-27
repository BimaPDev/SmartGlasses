/* FUN_2c5e76cc @ 0x2c5e76cc */

bool FUN_2c5e76cc(uint param_1,int param_2)

{
  int iVar1;
  
  if (*(byte *)(DAT_2c5e76ec + 0x20) != param_1) {
    return false;
  }
  iVar1 = FUN_2c5e44c0();
  return iVar1 == param_2;
}

