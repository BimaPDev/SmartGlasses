/* FUN_100a2e08 @ 0x100a2e08 */

undefined4 FUN_100a2e08(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_100a2e2c;
  iVar1 = iVar2 + 0x10;
  FUN_1011dbf4(iVar1,0xffffffff);
  *(undefined4 *)(iVar2 + 0x30) = param_1;
  thunk_FUN_10113e2c(iVar1);
  return 0;
}

