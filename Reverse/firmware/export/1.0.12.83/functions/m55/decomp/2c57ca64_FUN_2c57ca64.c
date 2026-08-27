/* FUN_2c57ca64 @ 0x2c57ca64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c57ca64(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined1 *puStack_54;
  uint uStack_50;
  undefined1 auStack_4c [16];
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  uVar1 = _LAB_2c57cc9c;
  iStack_24 = *_LAB_2c57cc98;
  puStack_58 = (undefined4 *)0x0;
  uStack_60 = _LAB_2c57cc9c;
  puStack_5c = (undefined4 *)0x0;
  iVar3 = func_0x2c58ccf4(*(undefined4 *)(param_2 + 4),&uStack_60,param_3,0);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c57ccd4,0x138,_LAB_2c57ccd0,_LAB_2c57ccd8,_LAB_2c57ccd0,
                 *(undefined4 *)(param_2 + 4));
  }
  uVar5 = *(undefined4 *)(puStack_5c[1] + 4);
  iVar3 = FUN_2c66b624(uVar5,_LAB_2c57cca0);
  if ((iVar3 == 0) || (iVar3 = FUN_2c66b624(uVar5,_LAB_2c57cca4), iVar3 == 0)) {
    FUN_2c5924cc(param_1);
    uStack_64 = *(undefined4 *)(_LAB_2c57cca8 + 4);
    uStack_68 = _LAB_2c57ccac;
    FUN_2c5934d8(param_1,&uStack_68);
    goto LAB_2c57cac6;
  }
  iVar3 = FUN_2c66b624(uVar5,_LAB_2c57ccbc);
  piVar4 = _LAB_2c57ccc0;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c57ccd4,0x14b,_LAB_2c57ccd0,_LAB_2c57cccc);
  }
  if (*_LAB_2c57ccc0 == 0) {
    FUN_2c4723c4();
    *piVar4 = 1;
  }
  piVar4 = (int *)FUN_2c47245c(0,0x90);
  FUN_2c674268(piVar4,0,0x90);
  *piVar4 = _LAB_2c57ccc4;
  piVar4[1] = (int)(piVar4 + 3);
  *(undefined1 *)(piVar4 + 3) = 0;
  piVar4[7] = (int)(piVar4 + 9);
  *(undefined1 *)(piVar4 + 9) = 0;
  piVar4[0xd] = (int)(piVar4 + 0xf);
  *(undefined1 *)(piVar4 + 0xf) = 0;
  piVar4[0x13] = (int)(piVar4 + 0x15);
  *(undefined1 *)(piVar4 + 0x15) = 0;
  piVar4[0x1a] = (int)(piVar4 + 0x1c);
  *(undefined1 *)(piVar4 + 0x1c) = 0;
  FUN_2c539348(piVar4 + 0x13,0,0,_LAB_2c57ccc8,7);
  func_0x2c57ae18(*(undefined4 *)(param_1 + 0x24));
  FUN_2c58c9d8(&puStack_54,piVar4);
  puVar2 = puStack_54;
  puStack_3c = auStack_34;
  if ((puStack_54 + uStack_50 != (undefined1 *)0x0) && (puStack_54 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c57ccdc);
  }
  uStack_68 = uStack_50;
  if (uStack_50 < 0x10) {
    if (uStack_50 == 1) {
      auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*puStack_54);
    }
    else if (uStack_50 != 0) goto LAB_2c57cc70;
  }
  else {
    puStack_3c = (uint *)FUN_2c57b828(&uStack_68,0);
    auStack_34[0] = uStack_68;
LAB_2c57cc70:
    FUN_2c674668(puStack_3c,puVar2,uStack_50);
  }
  *(undefined1 *)((int)puStack_3c + uStack_68) = 0;
  uStack_38 = uStack_68;
  FUN_2c57c468(param_1,&puStack_3c);
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  (**(code **)(*piVar4 + 8))(piVar4);
LAB_2c57cac6:
  uStack_60 = uVar1;
  if (puStack_58 != (undefined4 *)0x0) {
    *puStack_58 = _LAB_2c57ccb0;
    if ((undefined4 *)puStack_58[1] == puStack_58 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_5c == (undefined4 *)0x0) {
    if (*_LAB_2c57cc98 != iStack_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return 1;
  }
  puVar6 = (undefined4 *)puStack_5c[1];
  *puStack_5c = _LAB_2c57ccb4;
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puStack_5c);
  }
  *puVar6 = _LAB_2c57ccb8;
  if ((undefined4 *)puVar6[0xd] == puVar6 + 0xf) {
    if ((undefined4 *)puVar6[7] != puVar6 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)puVar6[1] == puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

