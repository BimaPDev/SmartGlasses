/* FUN_2c640a6c @ 0x2c640a6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c640a6c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c640b58,0x1d1,DAT_2c640b54,DAT_2c640b50,*param_1,param_1[3]);
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = FUN_2c64046c(0);
    piVar1 = DAT_2c640b60;
    if ((iVar4 != 0) && (*DAT_2c640b60 != 0)) {
      iVar5 = _Reset;
      if (_MasterStackPointer == 2) {
        iVar5 = _Reset + -1;
      }
      FUN_2c6393b8(*DAT_2c640b60,iVar5,_NMI);
      puVar3 = DAT_2c640b68;
      puVar2 = DAT_2c640b64;
      iVar5 = _Reset;
      if (MemManage == '\0') {
        iVar5 = _HardFault;
      }
      FUN_2c639338(*piVar1,iVar5,1);
      FUN_2c62c678(*puVar2);
      FUN_2c6072bc(*puVar3,7,0x10,0);
      FUN_2c6316ec(*puVar3,0x100);
      iVar5 = FUN_2c63180c(*puVar3);
      if (iVar4 != iVar5) {
        FUN_2c63140c(*puVar3,iVar4);
      }
      if ((_MasterStackPointer == 1) && ((_HardFault == _NMI || (_HardFault == _Reset)))) {
        FUN_2c62c5c4(*puVar2);
      }
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c640b58,0x1d9,DAT_2c640b54,DAT_2c640b6c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c640b58,0x1d3,DAT_2c640b54,DAT_2c640b5c,*param_2,param_2[3]);
}

