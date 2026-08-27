/* FUN_2c13d508 @ 0x2c13d508 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13d508(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_a8;
  undefined4 auStack_9c [32];
  int iStack_1c;
  
  iStack_1c = *_DAT_2c13d5b4;
  if (param_1 == (undefined4 *)0x0) {
    FUN_2c135988(4,0x11,_DAT_2c13d5c4,_DAT_2c13d5c0,_DAT_2c13d5bc,_DAT_2c13d5b8);
  }
  else {
    auStack_9c[0] = 0;
    FUN_2c13e9dc(auStack_9c + 1,0,0x7c,0);
    puVar7 = param_1;
    puVar1 = auStack_9c;
    do {
      puVar8 = puVar1;
      puVar6 = puVar7;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar7 = puVar6 + 4;
      *puVar8 = *puVar6;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      puVar1 = puVar8 + 4;
    } while (puVar7 != param_1 + 0xc);
    iVar5 = param_1[8];
    uVar2 = puVar6[5];
    puVar8[4] = *puVar7;
    puVar8[5] = uVar2;
    if (iVar5 == 7) {
      uStack_a8 = 0x1b;
    }
    else if (iVar5 != 0xb) {
      uStack_a8 = 0x1a;
    }
    FUN_2c139360(uStack_a8,auStack_9c,0x38);
  }
  if (*_DAT_2c13d5b4 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c();
  }
  return;
}

