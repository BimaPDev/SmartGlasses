/* FUN_2c540f88 @ 0x2c540f88 */

int FUN_2c540f88(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c48e3b8();
  if ((iVar1 == 0) || (iVar2 = FUN_2c55700c(iVar1,DAT_2c540fc8,param_2 + 4,0,param_4), iVar2 != 0))
  {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_2c55700c(iVar1,DAT_2c540fcc,param_2 + 0x1c,0,param_4);
    iVar2 = -(uint)(iVar2 != 0);
  }
  FUN_2c48dea0(iVar1);
  return iVar2;
}

