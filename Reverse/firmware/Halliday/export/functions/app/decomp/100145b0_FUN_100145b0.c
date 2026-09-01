/* FUN_100145b0 @ 0x100145b0 */

void FUN_100145b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *DAT_10014658;
  iVar1 = FUN_1013d44e(param_1,DAT_1001465c,param_3,0,param_1,iVar3,param_3);
  if (iVar1 == 0) goto LAB_100145d8;
LAB_100145c8:
  bVar4 = false;
LAB_100145ca:
  do {
    while( true ) {
      if (*DAT_10014658 == iVar3) {
        return;
      }
      FUN_1013cdc0(bVar4);
LAB_100145d8:
      if (param_2 != 0) break;
      iVar1 = FUN_10015284(param_1);
      bVar4 = iVar1 != 0;
    }
    param_2 = FUN_1009e224();
    uVar2 = FUN_1011ea10(DAT_10014660);
    iVar1 = FUN_1011ea20(param_2,DAT_10014660,uVar2);
    if (iVar1 != 0) {
      param_2 = FUN_1009e224();
      uVar2 = FUN_1011ea10(DAT_10014670);
      iVar1 = FUN_1011ea20(param_2,DAT_10014670,uVar2);
      if (iVar1 != 0) {
        bVar4 = true;
        goto LAB_100145ca;
      }
    }
    iVar1 = FUN_1013d44e(param_1,DAT_10014664);
    if (((iVar1 != 0) || (iVar1 = FUN_1013d44e(param_1,DAT_1001465c), iVar1 != 0)) ||
       (iVar1 = FUN_1013d44e(param_1,DAT_10014668), iVar1 != 0)) goto LAB_100145c8;
    iVar1 = FUN_1013d44e(param_1,DAT_1001466c);
    bVar4 = iVar1 == 0;
  } while( true );
}

