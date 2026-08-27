/* FUN_14097fcc @ 0x14097fcc */

undefined4 FUN_14097fcc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14097ffc,DAT_14097ff8,0x1e0);
  }
  FUN_140755e4();
  iVar1 = FUN_14081cb4(param_1);
  FUN_1407561c();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

