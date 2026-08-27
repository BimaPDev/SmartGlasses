/* FUN_14098034 @ 0x14098034 */

undefined4 FUN_14098034(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1409806c,DAT_14098068,0x201);
  }
  FUN_140755e4();
  iVar1 = FUN_14081c0c(param_1,param_2,param_3);
  FUN_1407561c();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

