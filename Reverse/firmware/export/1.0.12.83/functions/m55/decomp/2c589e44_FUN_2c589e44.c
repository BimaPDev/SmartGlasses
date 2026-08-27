/* FUN_2c589e44 @ 0x2c589e44 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c589e44(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uStack_d8;
  uint *puStack_d4;
  uint uStack_d0;
  uint auStack_cc [10];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [16];
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [76];
  undefined4 uStack_2c;
  
  puStack_9c = auStack_94;
  puStack_80 = auStack_78;
  puVar3 = auStack_cc;
  uStack_2c = *_LAB_2c58a064;
  auStack_94[0] = 0;
  uStack_7c = 0;
  auStack_78[0] = 0;
  uStack_84 = 2000;
  uStack_a4 = _LAB_2c58a068;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_2c5c55d8(param_1,param_2,0);
  puVar1 = (undefined1 *)FUN_2c5c5b3c();
  puStack_d4 = puVar3;
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c58a084);
  }
  uVar2 = FUN_2c66c4ec();
  uStack_d8 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      auStack_cc[0] = CONCAT31(auStack_cc[0]._1_3_,*puVar1);
      goto LAB_2c589eac;
    }
    if (uVar2 == 0) goto LAB_2c589eac;
  }
  else {
    puVar3 = (uint *)FUN_2c5893a8(&uStack_d8,0);
    auStack_cc[0] = uStack_d8;
    puStack_d4 = puVar3;
  }
  FUN_2c674668(puVar3,puVar1,uVar2);
  puVar3 = puStack_d4;
LAB_2c589eac:
  *(undefined1 *)((int)puVar3 + uStack_d8) = 0;
  uStack_d0 = uStack_d8;
  FUN_2c589cb0(&puStack_9c,0,uStack_98,_DAT_2c58a06c,6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

