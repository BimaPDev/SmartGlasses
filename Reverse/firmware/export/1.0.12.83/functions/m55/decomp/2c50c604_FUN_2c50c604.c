/* FUN_2c50c604 @ 0x2c50c604 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50c604(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_2c5eb89c(_LAB_2c50c678,*(undefined4 *)(param_1 + 0x24),0,_LAB_2c50c674,param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x20),1);
  }
  puVar6 = (undefined4 *)(param_1 + 0x30);
  do {
    puVar7 = puVar6 + 1;
    piVar4 = (int *)*puVar6;
    if (*piVar4 != 0) {
      FUN_2c606abc(*piVar4,1);
      piVar4 = (int *)*puVar6;
    }
    if (piVar4[1] != 0) {
      FUN_2c606abc(piVar4[1],1);
    }
    puVar6 = puVar7;
  } while (puVar7 != (undefined4 *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x24),1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x28),1);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  iVar5 = *DAT_2c606b68;
  iVar2 = FUN_2c607214();
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe;
  FUN_2c607df0(iVar1);
  iVar3 = FUN_2c607214(iVar1);
  if (iVar3 != 0) {
    FUN_2c6041d4(iVar1);
    FUN_2c607248();
    FUN_2c607248(iVar1);
  }
  iVar3 = FUN_2c607214(iVar1);
  if (iVar3 == iVar2) {
    if (*DAT_2c606b68 == iVar5) {
      return;
    }
  }
  else {
    FUN_2c6041d4(iVar1);
    if (*DAT_2c606b68 == iVar5) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

