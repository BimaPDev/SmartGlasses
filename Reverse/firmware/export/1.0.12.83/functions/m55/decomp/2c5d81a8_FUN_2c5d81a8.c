/* FUN_2c5d81a8 @ 0x2c5d81a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d81a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iStack_18;
  
  iVar1 = FUN_2c602400();
  iVar2 = FUN_2c621084(param_1);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    return;
  }
  pcVar3 = (char *)FUN_2c62107c();
  iVar4 = FUN_2c6041d4(iVar1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5d8284,0x358,_LAB_2c5d8280,_LAB_2c5d827c);
  }
  iVar4 = FUN_2c6041dc(iVar4,2);
  if (iVar4 == 0) {
    return;
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    FUN_2c638730(iVar1,_LAB_2c5d8278);
    FUN_2c607048(iVar1,0x27d1,0x14);
    iVar1 = 0x60;
  }
  else {
    FUN_2c638730(iVar1,pcVar3);
    uVar5 = FUN_2c66c4ec(pcVar3);
    uVar6 = FUN_2c5e2e80(_LAB_2c5d8288);
    iVar2 = FUN_2c62b85c(pcVar3,uVar5,uVar6,iVar2 == 0,iVar2 == 0);
    if (iVar2 < 0x39) {
      FUN_2c607048(iVar1,iVar2,0x14);
      iVar1 = (int)(short)(0x70 - (short)iVar2);
    }
    else {
      FUN_2c607048(iVar1,0x38,0x14);
      FUN_2c6388dc(iVar1,1);
      iVar1 = 0x38;
    }
  }
  iVar7 = *DAT_2c6070b8;
  iVar2 = FUN_2c603c78(iVar4,1,&iStack_18,0);
  if (iVar2 == 1) {
    if (iStack_18 != iVar1) goto LAB_2c60706c;
  }
  else if (iVar2 == 0) {
LAB_2c60706c:
    FUN_2c606c7c(iVar4,iVar1,0);
  }
  iVar1 = FUN_2c603c78(iVar4,4,&iStack_18,0);
  if (iVar1 == 1) {
    if (iStack_18 == 5) goto LAB_2c607092;
  }
  else if (iVar1 != 0) goto LAB_2c607092;
  FUN_2c606ca0(iVar4,5,0);
LAB_2c607092:
  if (*DAT_2c6070b8 == iVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

