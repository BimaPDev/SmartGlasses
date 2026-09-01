/* FUN_1001ab28 @ 0x1001ab28 */

undefined4 FUN_1001ab28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *DAT_1001ab90;
  iVar3 = *DAT_1001ab94;
  piVar4 = (int *)(iVar3 + 0x1c);
  iVar5 = param_1;
  do {
    if (param_2 == 0) {
LAB_1001ab72:
      if (*DAT_1001ab90 == iVar2) {
        return 0;
      }
      FUN_1013cdc0();
    }
    else {
      unaff_r6 = FUN_1001aa1c(iVar3,param_1,param_2,*(undefined1 *)(iVar3 + 5),iVar5);
      if (param_2 != unaff_r6) {
        *piVar4 = *piVar4 + -1;
        iVar1 = FUN_1001a934(iVar3);
        if (iVar1 != 0) {
          FUN_1001a900(piVar4);
          goto LAB_1001ab72;
        }
      }
    }
    param_2 = param_2 - unaff_r6;
    param_1 = param_1 + unaff_r6;
  } while( true );
}

