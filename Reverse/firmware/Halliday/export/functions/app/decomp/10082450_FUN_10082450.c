/* FUN_10082450 @ 0x10082450 */

int FUN_10082450(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_1c;
  int *piStack_18;
  
  local_1c = param_2;
  piStack_18 = param_3;
  FUN_10081e6c();
  local_1c = 0;
  uVar1 = FUN_10061948();
  *DAT_100824f8 = uVar1;
  if ((*DAT_100824fc != '\0') && (iVar2 = FUN_10082294(DAT_10082500), iVar2 != 0)) {
    FUN_10119dc2(DAT_10082504);
    FUN_10081e54();
    return iVar2;
  }
  if (*DAT_10082508 == '\0') {
    FUN_10119dc2(DAT_10082510,DAT_1008250c);
LAB_10082496:
    FUN_10081e54();
    return -1;
  }
  switch(param_2) {
  case 1:
    iVar2 = *DAT_10082514;
    if (iVar2 == 0) {
      FUN_10119dc2(DAT_10082518);
      goto LAB_10082496;
    }
    break;
  case 2:
  case 4:
    iVar2 = 0x200;
    break;
  default:
    FUN_10081e54();
    return -0x16;
  case 5:
    FUN_1008234c(param_1,1);
    goto LAB_100824bc;
  case 10:
    iVar2 = FUN_10081f04(DAT_10082500,&local_1c);
    if (iVar2 == 0) {
      uVar3 = 8;
    }
    else {
      uVar3 = 2;
    }
    *(undefined1 *)param_3 = uVar3;
    goto LAB_100824bc;
  }
  *param_3 = iVar2;
LAB_100824bc:
  FUN_10081e54();
  return 0;
}

