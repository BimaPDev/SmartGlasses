/* FUN_2c6419a8 @ 0x2c6419a8 */

void FUN_2c6419a8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  puVar1 = DAT_2c641a50;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c641a60,0x97,DAT_2c641a5c,DAT_2c641a58,DAT_2c641a54);
  }
  puVar2 = (undefined4 *)FUN_2c6442f0(*DAT_2c641a50,0);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_2c62c3b0(puVar2,0x44);
    *puVar2 = *param_1;
    puVar5 = puVar2 + 1;
    puVar6 = param_1 + 1;
    do {
      puVar7 = puVar6 + 4;
      uVar8 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *puVar5 = *puVar6;
      puVar5[1] = uVar8;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      puVar6 = puVar7;
    } while (puVar7 != param_1 + 0x11);
    FUN_2c6442fc(*puVar1,puVar2);
    return;
  }
  uVar4 = *param_1;
  uVar3 = FUN_2c6443a0(*puVar1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c641a60,0x9f,DAT_2c641a5c,DAT_2c641a64,DAT_2c641a5c,uVar4,param_1 + 1,uVar3,
               0x10);
}

