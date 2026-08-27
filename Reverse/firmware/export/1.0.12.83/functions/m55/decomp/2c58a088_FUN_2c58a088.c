/* FUN_2c58a088 @ 0x2c58a088 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58a088(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uStack_58;
  undefined1 *puStack_54;
  uint uStack_50;
  undefined1 auStack_4c [16];
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  piVar2 = _LAB_2c58a1b4;
  iStack_24 = *_LAB_2c58a1b8;
  if (*_LAB_2c58a1b4 == 0) {
    FUN_2c4723c4(param_1,param_2,0);
    *piVar2 = 1;
  }
  piVar2 = (int *)FUN_2c47245c(0,0x4c);
  FUN_2c674268(piVar2,0,0x4c);
  *piVar2 = _LAB_2c58a1bc;
  *(undefined1 *)(piVar2 + 3) = 0;
  piVar2[1] = (int)(piVar2 + 3);
  *(undefined1 *)(piVar2 + 9) = 0;
  piVar2[7] = (int)(piVar2 + 9);
  *(undefined1 *)(piVar2 + 0xf) = 0;
  piVar2[0xd] = (int)(piVar2 + 0xf);
  uVar3 = FUN_2c66c4ec(param_2);
  FUN_2c589cb0(piVar2 + 1,0,0,param_2,uVar3);
  uVar3 = FUN_2c66c4ec(param_3);
  FUN_2c589cb0(piVar2 + 7,0,piVar2[8],param_3,uVar3);
  FUN_2c58c9d8(&puStack_54,piVar2);
  puVar1 = puStack_54;
  puStack_3c = auStack_34;
  if ((puStack_54 + uStack_50 != (undefined1 *)0x0) && (puStack_54 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c58a1c0);
  }
  uStack_58 = uStack_50;
  if (uStack_50 < 0x10) {
    if (uStack_50 == 1) {
      auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*puStack_54);
      goto LAB_2c58a134;
    }
    if (uStack_50 == 0) goto LAB_2c58a134;
  }
  else {
    puStack_3c = (uint *)FUN_2c5893a8(&uStack_58,0);
    auStack_34[0] = uStack_58;
  }
  FUN_2c674668(puStack_3c,puVar1,uStack_50);
LAB_2c58a134:
  *(undefined1 *)((int)puStack_3c + uStack_58) = 0;
  uStack_38 = uStack_58;
  FUN_2c592760(param_1,1,&puStack_3c);
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  if (puStack_54 == auStack_4c) {
    if (*_LAB_2c58a1b8 != iStack_24) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

