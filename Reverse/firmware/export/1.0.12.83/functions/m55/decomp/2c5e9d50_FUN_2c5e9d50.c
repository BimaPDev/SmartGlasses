/* FUN_2c5e9d50 @ 0x2c5e9d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e9d50(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_2c5e7270(6,1);
  if ((piVar2 == (int *)0x0) || (*(char *)((int)piVar2 + 0x32) == '\x03')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e9e20,0x9e,_LAB_2c5e9e1c,_LAB_2c5e9e18);
  }
  cVar1 = FUN_2c5e6eec();
  iVar4 = _LAB_2c5e9e14;
  if ((byte)(cVar1 - 1U) < 5) {
    iVar4 = FUN_2c5e7700();
    if (iVar4 != 3) {
      FUN_2c5e6ce4(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e9e20,0xa4,_LAB_2c5e9e1c,_LAB_2c5e9e24);
  }
  puVar3 = (undefined4 *)(**(code **)(_LAB_2c5e9e14 + 0x20))(0);
  FUN_2c606abc(*puVar3,1);
  if (*piVar2 != 0) {
    FUN_2c5e73a0(*piVar2);
    FUN_2c6043d8(*piVar2);
    *(undefined1 *)((int)piVar2 + 0x32) = 1;
    *piVar2 = 0;
    FUN_2c5e701c();
    FUN_2c5e9924(piVar2);
    *(undefined1 *)(iVar4 + 0x10) = 1;
    FUN_2c5e98c0(piVar2);
    return 1;
  }
  FUN_2c5e9be4(piVar2);
  *(undefined1 *)(iVar4 + 0x10) = 1;
  FUN_2c5e98c0(piVar2);
  func_0x2c5e9770(piVar2,0);
  return 1;
}

