/* FUN_2c5e73f8 @ 0x2c5e73f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e73f8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar2 = FUN_2c66c4ec(param_2);
  uVar3 = FUN_2c62c45c(iVar2 + 1);
  uVar4 = FUN_2c66c4ec(param_2);
  FUN_2c62c0d8(uVar3,param_2,uVar4);
  puVar5 = (undefined1 *)FUN_2c66b60a(uVar3,0x2f);
  FUN_2c5e33e4();
  uVar1 = _LAB_2c5e74cc;
  uVar4 = _LAB_2c5e74c8;
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uVar1,0x2bd,_LAB_2c5e74d0,uVar4,uVar3,puVar5 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5e74cc,0x2c5,_LAB_2c5e74d0,_LAB_2c5e74d8,uVar3);
}

