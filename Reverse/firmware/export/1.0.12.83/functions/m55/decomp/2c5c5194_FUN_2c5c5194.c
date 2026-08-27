/* FUN_2c5c5194 @ 0x2c5c5194 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c5194(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5c5240,0xb0,_LAB_2c5c523c,_LAB_2c5c5238,_LAB_2c5c5234);
  }
  iVar3 = FUN_2c62107c(param_2);
  if (iVar3 != 0) {
    uVar4 = FUN_2c5e8cb4(1);
    iVar3 = FUN_2c6041dc(uVar4,0xffffffff);
    piVar5 = (int *)thunk_FUN_2c5e7270(6,1);
    if (piVar5 != (int *)0x0) {
      iVar6 = FUN_2c5c5110();
      piVar2 = _LAB_2c5c5230;
      puVar1 = _LAB_2c5c522c;
      if (iVar6 == 0) {
        if (iVar3 == *piVar5) {
          return;
        }
      }
      else if (iVar3 == *piVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5c5240,0xb8,_LAB_2c5c523c,_LAB_2c5c5244,iVar3);
      }
      FUN_2c62be74(*_LAB_2c5c522c);
      FUN_2c62be4c(*puVar1);
      FUN_2c62be74(*piVar2);
      iVar3 = *piVar2;
      *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xfe;
      return;
    }
  }
  return;
}

