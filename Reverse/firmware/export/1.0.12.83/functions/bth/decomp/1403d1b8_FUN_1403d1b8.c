/* FUN_1403d1b8 @ 0x1403d1b8 */

undefined4 FUN_1403d1b8(undefined4 param_1,char param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  iVar1 = FUN_1404a1b4();
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = *(int *)(iVar1 + 0xd4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14098184,DAT_14098180,0x262,param_4,unaff_r4,unaff_r5);
  }
  FUN_140755e4();
  iVar1 = FUN_14081dcc(iVar1,(int)param_2,(int)param_3);
  FUN_1407561c();
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

