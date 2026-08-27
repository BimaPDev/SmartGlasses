/* FUN_2c518488 @ 0x2c518488 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518488(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_2c48e424(*(undefined4 *)(param_1 + 4),_LAB_2c518568);
  iVar2 = FUN_2c48e424(*(undefined4 *)(param_1 + 4),_LAB_2c51856c);
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      iVar1 = FUN_2c48e424(iVar2,_LAB_2c518570);
      iVar2 = FUN_2c48e424(iVar2,_LAB_2c518574);
      if ((iVar1 != 0) && (iVar2 != 0)) {
        iVar2 = *(int *)(iVar2 + 0x14);
        uVar3 = FUN_2c48de10(iVar1);
        uVar4 = _LAB_2c51857c;
        if (iVar2 == 0) {
          uVar4 = _LAB_2c518578;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c518580,0x17,_LAB_2c518584,_LAB_2c518588,_LAB_2c518584,uVar3,uVar4);
      }
    }
  }
  else {
    iVar2 = FUN_2c48e424(iVar1,_LAB_2c518570);
    iVar1 = FUN_2c48e424(iVar1,_LAB_2c518574);
    if ((iVar2 != 0) && (iVar1 != 0)) {
      iVar1 = *(int *)(iVar1 + 0x14);
      uVar3 = FUN_2c48de10(iVar2);
      uVar4 = _LAB_2c51857c;
      if (iVar1 == 0) {
        uVar4 = _LAB_2c518578;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c518580,0xe,_LAB_2c518584,_LAB_2c51858c,_LAB_2c518584,uVar3,uVar4);
    }
  }
  return;
}

