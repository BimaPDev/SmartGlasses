/* FUN_1004a1e8 @ 0x1004a1e8 */

void FUN_1004a1e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_1004a21c;
  iVar3 = *DAT_1004a220;
  iVar1 = *(int *)(iVar3 + 0x3d8);
  if (iVar1 != 0) {
    FUN_100932b0(iVar1,0,param_3,DAT_1004a220,param_1);
    *(undefined4 *)(iVar3 + 0x3d8) = 0;
  }
  if (*DAT_1004a21c != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

