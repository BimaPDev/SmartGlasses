/* FUN_2c63efd8 @ 0x2c63efd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63efd8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x00000120;
  iVar3 = (param_4 >> 6) + -0x44;
  uVar4 = FUN_2c63ecbc();
  if ((longlong)uVar4 < 0) {
    if (param_1 == 1) {
      uVar2 = 7;
    }
    else {
      uVar2 = 4;
    }
    uVar4 = (ulonglong)uVar2;
    func_0x2c63ef20(param_1);
  }
  else if (((uVar4 != 0) && (iVar1 = FUN_2c48f42c(param_1), iVar1 != 0)) &&
          (iVar1 = FUN_2c48f380(param_1), iVar1 << 0x18 < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c63f09c,0x91,_LAB_2c63f098,_LAB_2c63f0a0,param_1);
  }
  if (param_1 == 0) {
    FUN_2c48f554(uVar4 != 0);
  }
  else {
    iVar1 = FUN_2c48ef34(param_1,(int)uVar4,0);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c63f09c,0xa4,_LAB_2c63f098,_LAB_2c63f0a4,param_1,uVar4,iVar3,puVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c63f09c,0xa8,_LAB_2c63f098,_LAB_2c63f094,param_1,uVar4);
}

