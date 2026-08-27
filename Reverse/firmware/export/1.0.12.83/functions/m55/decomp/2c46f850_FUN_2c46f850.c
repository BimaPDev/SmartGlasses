/* FUN_2c46f850 @ 0x2c46f850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f850(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_c0;
  undefined4 auStack_bc [20];
  undefined4 auStack_6c [20];
  undefined4 uStack_1c;
  
  puVar2 = &uStack_c0;
  puVar3 = auStack_bc + 0x13;
  uStack_1c = *_LAB_2c46f8c4;
  do {
    uVar1 = func_0x2c472518(0,9);
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1;
  } while (puVar2 != puVar3);
  do {
    uVar1 = FUN_2c47245c(0,9);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  } while (puVar3 != auStack_6c + 0x13);
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,auStack_6c[0]);
}

