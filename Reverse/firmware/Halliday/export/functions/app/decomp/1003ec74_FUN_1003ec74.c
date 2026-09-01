/* FUN_1003ec74 @ 0x1003ec74 */

uint FUN_1003ec74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)PTR_DAT_1003eccc;
  uVar2 = thunk_FUN_100a7d8c(5,param_2,param_3,0);
  uVar1 = FUN_100a735c();
  uVar4 = ((uVar2 & 0xff) * 100) / (uint)uVar1 & 0xff;
  FUN_100a5b78(DAT_1003ecd8 | ((int)PTR_DAT_1003ecd0 - (int)PTR_DAT_1003ecd4) * 0x20 & 0xff00U,
               DAT_1003ece0,DAT_1003ecdc,uVar2 & 0xff,uVar4);
  if (*(int *)PTR_DAT_1003eccc != iVar3) {
    FUN_1013cdc0();
  }
  return uVar4;
}

