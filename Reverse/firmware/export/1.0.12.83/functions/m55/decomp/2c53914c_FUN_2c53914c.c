/* FUN_2c53914c @ 0x2c53914c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53914c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_3c [40];
  undefined4 uStack_14;
  
  uStack_14 = *_LAB_2c53928c;
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5392b0,0x361,_LAB_2c5392ac,_LAB_2c5392b8);
  }
  iVar1 = FUN_2c538fa4(2,0);
  if (iVar1 != 0) {
    iVar1 = FUN_2c5374bc(param_1,*(undefined4 *)(param_2 + 0xc),0,*(undefined1 *)(param_2 + 4));
    if (iVar1 != 0) {
      FUN_2c52a1c4();
      FUN_2c536aa8(param_1,*(undefined4 *)(param_2 + 0xc));
      func_0x2c56332c(auStack_3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5392b0,0x369,_LAB_2c5392ac,_LAB_2c5392b4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5392b0,0x365,_LAB_2c5392ac,_LAB_2c5392a8);
}

