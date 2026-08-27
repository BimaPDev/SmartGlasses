/* FUN_2c13d780 @ 0x2c13d780 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13d780(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_94 [32];
  int iStack_14;
  
  iStack_14 = *_DAT_2c13d81c;
  if (param_1 == (undefined4 *)0x0) {
    FUN_2c135988(4,0xb8,_DAT_2c13d82c,_DAT_2c13d828,_DAT_2c13d824,_DAT_2c13d820);
  }
  else {
    auStack_94[0] = 0;
    FUN_2c13e9dc(auStack_94 + 1,0,0x7c,0);
    puVar1 = auStack_94;
    puVar7 = param_1;
    do {
      puVar6 = puVar7;
      puVar5 = puVar1;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar7 = puVar6 + 4;
      *puVar5 = *puVar6;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar1 = puVar5 + 4;
    } while (puVar7 != param_1 + 0xc);
    uVar2 = puVar6[5];
    puVar5[4] = *puVar7;
    puVar5[5] = uVar2;
    FUN_2c139360(0x2c,auStack_94,0x38);
  }
  if (*_DAT_2c13d81c == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

