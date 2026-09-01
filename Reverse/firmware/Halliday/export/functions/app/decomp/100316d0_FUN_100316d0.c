/* FUN_100316d0 @ 0x100316d0 */

void FUN_100316d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_1003171c;
  iVar3 = *DAT_10031720;
  iVar1 = FUN_10126fb4(*(undefined4 *)(iVar3 + 8),*(undefined1 *)(iVar3 + 0x15c),param_3,
                       DAT_10031720,param_1,iVar2,param_3);
  if (iVar1 != 0) {
    FUN_101255ce(iVar1,0);
    FUN_10125640(iVar1,DAT_10031724);
    FUN_10124cea(*(undefined4 *)(iVar3 + 0x28),1);
    *DAT_10031728 = 0;
  }
  if (*DAT_1003171c != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

