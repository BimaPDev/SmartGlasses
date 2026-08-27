/* FUN_2c56f070 @ 0x2c56f070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c56f070(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puStack_cc;
  int iStack_c8;
  undefined1 auStack_c4 [16];
  uint *puStack_b4;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint *puStack_9c;
  int iStack_98;
  uint auStack_94 [4];
  int *piStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  uint *puStack_6c;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint *puStack_54;
  int iStack_50;
  uint auStack_4c [4];
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *DAT_2c56f33c;
  FUN_2c5dcca4(&puStack_cc,*param_2,param_3,0);
  if (iStack_c8 == 0x7fffffff) goto LAB_2c56f330;
  piVar2 = (int *)FUN_2c5392f4(&puStack_cc,_LAB_2c56f340,1);
  if ((uint *)*piVar2 == (uint *)(piVar2 + 2)) {
    uStack_ac = piVar2[2];
    iStack_a8 = piVar2[3];
    iStack_a4 = piVar2[4];
    iStack_a0 = piVar2[5];
    puStack_b4 = &uStack_ac;
  }
  else {
    uStack_ac = piVar2[2];
    puStack_b4 = (uint *)*piVar2;
  }
  iStack_b0 = piVar2[1];
  *piVar2 = (int)(piVar2 + 2);
  piVar2[1] = 0;
  *(undefined1 *)(piVar2 + 2) = 0;
  FUN_2c5dcca4(&puStack_9c,param_2[1]);
  uVar4 = uStack_ac;
  if (puStack_b4 == &uStack_ac) {
    uVar4 = 0xf;
  }
  if (uVar4 < (uint)(iStack_b0 + iStack_98)) {
    if (puStack_9c == auStack_94) {
      auStack_94[0] = 0xf;
    }
    if (auStack_94[0] < (uint)(iStack_b0 + iStack_98)) goto LAB_2c56f102;
    piVar2 = (int *)FUN_2c539348(&puStack_9c,0,0,puStack_b4,iStack_b0);
    piVar5 = piVar2 + 2;
    piStack_84 = (int *)*piVar2;
    if (piStack_84 == piVar5) goto LAB_2c56f296;
LAB_2c56f11a:
    iStack_7c = piVar2[2];
  }
  else {
LAB_2c56f102:
    piVar2 = (int *)FUN_2c5392f4(&puStack_b4);
    piVar5 = piVar2 + 2;
    piStack_84 = (int *)*piVar2;
    if (piStack_84 != piVar5) goto LAB_2c56f11a;
LAB_2c56f296:
    piStack_84 = &iStack_7c;
    iStack_7c = piVar2[2];
    iStack_78 = piVar5[1];
    iStack_74 = piVar5[2];
    iStack_70 = piVar5[3];
  }
  iStack_80 = piVar2[1];
  *piVar2 = (int)piVar5;
  piVar2[1] = 0;
  *(undefined1 *)(piVar2 + 2) = 0;
  if (iStack_80 == 0x7fffffff) {
LAB_2c56f330:
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c56f348);
  }
  piVar2 = (int *)FUN_2c5392f4(&piStack_84,_LAB_2c56f340,1);
  if ((uint *)*piVar2 == (uint *)(piVar2 + 2)) {
    uStack_64 = piVar2[2];
    iStack_60 = piVar2[3];
    iStack_5c = piVar2[4];
    iStack_58 = piVar2[5];
    puStack_6c = &uStack_64;
  }
  else {
    uStack_64 = piVar2[2];
    puStack_6c = (uint *)*piVar2;
  }
  iStack_68 = piVar2[1];
  *piVar2 = (int)(piVar2 + 2);
  piVar2[1] = 0;
  *(undefined1 *)(piVar2 + 2) = 0;
  FUN_2c5dcca4(&puStack_54,param_2[2]);
  uVar4 = uStack_64;
  if (puStack_6c == &uStack_64) {
    uVar4 = 0xf;
  }
  if (uVar4 < (uint)(iStack_68 + iStack_50)) {
    if (puStack_54 == auStack_4c) {
      auStack_4c[0] = 0xf;
    }
    if ((uint)(iStack_68 + iStack_50) <= auStack_4c[0]) {
      piVar2 = (int *)FUN_2c539348(&puStack_54,0,0,puStack_6c,iStack_68);
      if ((int *)*piVar2 == piVar2 + 2) {
        iStack_34 = piVar2[2];
        iStack_30 = piVar2[3];
        iStack_2c = piVar2[4];
        iStack_28 = piVar2[5];
        piStack_3c = &iStack_34;
      }
      else {
        iStack_34 = piVar2[2];
        piStack_3c = (int *)*piVar2;
      }
      iStack_38 = piVar2[1];
      *piVar2 = (int)(piVar2 + 2);
      piVar2[1] = 0;
      *(undefined1 *)(piVar2 + 2) = 0;
      goto LAB_2c56f1e4;
    }
  }
  piVar2 = (int *)FUN_2c5392f4(&puStack_6c);
  if ((int *)*piVar2 == piVar2 + 2) {
    iStack_34 = piVar2[2];
    iStack_30 = piVar2[3];
    iStack_2c = piVar2[4];
    iStack_28 = piVar2[5];
    piStack_3c = &iStack_34;
  }
  else {
    iStack_34 = piVar2[2];
    piStack_3c = (int *)*piVar2;
  }
  iStack_38 = piVar2[1];
  *piVar2 = (int)(piVar2 + 2);
  piVar2[1] = 0;
  *(undefined1 *)(piVar2 + 2) = 0;
LAB_2c56f1e4:
  uVar1 = DAT_2c56f344;
  param_1[2] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  iVar3 = FUN_2c66b4f8(piStack_3c,uVar1,param_1,param_1 + 1,param_1 + 2);
  if (iVar3 != 3) {
    param_1[2] = 0xffffffff;
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  if (piStack_3c != &iStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_54 != auStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_6c != &uStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (piStack_84 != &iStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_9c != auStack_94) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_b4 != &uStack_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_cc != auStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c56f33c == iStack_24) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

