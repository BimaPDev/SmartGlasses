/* FUN_100a2da4 @ 0x100a2da4 */

undefined4 FUN_100a2da4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_100a2ddc;
  FUN_1011dbf4(iVar2 + 0x10,0xffffffff,param_3,DAT_100a2ddc,param_4);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x14) != '\x04')) && (*(char *)(iVar1 + 0x14) != '\x02'))
  {
    FUN_100a27e8(iVar2,iVar1,1);
  }
  thunk_FUN_10113e2c(iVar2 + 0x10);
  FUN_100a265c();
  return 0;
}

