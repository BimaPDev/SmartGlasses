/* FUN_1001ab98 @ 0x1001ab98 */

void FUN_1001ab98(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_1001ac30;
  FUN_1012d93a();
  if (1 < (int)param_2 - 1U) goto LAB_1001abfa;
  uVar1 = FUN_100a5d6c(param_2,DAT_1001ac34);
  do {
    FUN_1011dc50(DAT_1001ac38,param_2,uVar1);
    FUN_100a25dc(5000);
    iVar2 = FUN_1001a934(param_1);
    param_2 = param_1 + 7;
    if (iVar2 != 0) {
      FUN_1001a900(param_2);
    }
    FUN_1001a7c0(*param_1);
    if (*param_2 < 1) {
      if (*DAT_1001ac30 == iVar3) {
        return;
      }
    }
    else if (*DAT_1001ac30 == iVar3) {
      FUN_1011dc50(DAT_1001ac3c,*param_2,*(undefined1 *)((int)param_1 + 5));
      return;
    }
    FUN_1013cdc0();
LAB_1001abfa:
    if (param_2 == (int *)0x0) {
      uVar1 = FUN_100699e4(DAT_1001ac34);
    }
    else if (param_2 == (int *)0x3) {
      uVar1 = FUN_1006a8a4(DAT_1001ac34);
    }
    else {
      uVar1 = 0;
    }
  } while( true );
}

