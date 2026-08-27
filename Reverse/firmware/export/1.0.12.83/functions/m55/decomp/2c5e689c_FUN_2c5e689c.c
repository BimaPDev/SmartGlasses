/* FUN_2c5e689c @ 0x2c5e689c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e689c(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = _LAB_2c5e68ec;
  iVar4 = 0;
  piVar5 = _LAB_2c5e68ec + 7;
  iVar1 = _LAB_2c5e68f0;
  piVar2 = _LAB_2c5e68ec;
  while( true ) {
    iVar1 = (**(code **)(iVar1 + 0x44))(0);
    iVar4 = iVar4 + iVar1;
    if (piVar2 == piVar5) break;
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
  }
  iVar1 = _LAB_2c5e68f0;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5e68fc,0x4f,_LAB_2c5e68f8,_LAB_2c5e68f4);
  }
  for (; (iVar1 = (**(code **)(iVar1 + 0x58))(), iVar1 == 0 && (piVar3 != piVar5));
      piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
  }
  return;
}

