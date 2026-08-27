/* FUN_14097db8 @ 0x14097db8 */

undefined4 FUN_14097db8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14097dec,DAT_14097de8,0xa1,param_4,param_4);
  }
  FUN_140755e4();
  iVar1 = FUN_14081960(param_1,param_2);
  FUN_1407561c();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

