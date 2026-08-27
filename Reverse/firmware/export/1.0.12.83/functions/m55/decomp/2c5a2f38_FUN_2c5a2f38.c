/* FUN_2c5a2f38 @ 0x2c5a2f38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a2f38(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_2c5a2398();
  iVar3 = FUN_2c5a240c();
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5a2f98,0x7b,_LAB_2c5a2f94,_LAB_2c5a2f90);
  }
  FUN_2c5a2398();
  FUN_2c5a25bc();
  FUN_2c5a2398();
  iVar3 = func_0x2c5a25f0();
  if (iVar3 == 0) {
    return;
  }
  FUN_2c5a2398();
  iVar3 = func_0x2c5a25f0();
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 4);
  func_0x2c5a8f0c();
  func_0x2c5a8f64(iVar3);
  func_0x2c5a9110(iVar3);
  func_0x2c5a8fc4(iVar3);
  func_0x2c5a9a54(iVar3);
  func_0x2c5a9668(iVar3,1);
  iVar3 = func_0x2c5a839c(iVar3 + 0x144);
  if (iVar3 != 0) {
    registry_lookup(0x5006);
    FUN_2c5e4068();
  }
  puVar2 = DAT_2c63b564;
  piVar1 = DAT_2c63b560;
  iVar3 = _LAB_2c5a9f60;
  if (_LAB_2c5a9f60 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x167,DAT_2c63b574,DAT_2c63b578,DAT_2c63b580);
  }
  if ((*DAT_2c63b55c != '\0') && (*DAT_2c63b560 != 0)) {
    piVar4 = (int *)FUN_2c4728e8(4);
    *piVar4 = iVar3;
    FUN_2c644044(*puVar2,0xffffffff);
    iVar5 = FUN_2c4858f0(*piVar1,DAT_2c63b568,piVar4);
    if (iVar5 == 0) {
      FUN_2c4857c8(*piVar1,piVar4);
      FUN_2c644080(*puVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x175,DAT_2c63b574,DAT_2c63b578,DAT_2c63b570,DAT_2c63b56c,iVar3);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x16c,DAT_2c63b574,DAT_2c63b578,DAT_2c63b57c);
}

