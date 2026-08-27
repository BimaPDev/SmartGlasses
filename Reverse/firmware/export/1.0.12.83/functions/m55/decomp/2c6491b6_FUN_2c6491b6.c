/* FUN_2c6491b6 @ 0x2c6491b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6491b6(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  int iStack_c;
  
  iVar2 = FUN_2c6684cc(*(undefined4 *)(param_2 + 4));
  FUN_2c6444fc(iVar2 * 1000);
  iVar3 = *DAT_2c648674;
  iStack_c = iVar2;
  iVar2 = FUN_2c66de7c(_LAB_2c648678,0x800,_LAB_2c6491dc,&iStack_c,&iStack_c,iVar3,unaff_r4,unaff_lr
                      );
  if (-1 < iVar2) {
    if (iVar2 < 0x7ff) {
      if (iVar2 == 0) goto LAB_2c648630;
    }
    else {
      iVar2 = 0x7ff;
    }
    if (*DAT_2c64867c == '\0') {
      pcVar1 = (code *)FUN_2c648328();
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(_LAB_2c648678,iVar2);
      }
    }
    else {
      FUN_2c673a28(_LAB_2c648678,iVar2);
    }
  }
LAB_2c648630:
  if (*DAT_2c648674 == iVar3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

