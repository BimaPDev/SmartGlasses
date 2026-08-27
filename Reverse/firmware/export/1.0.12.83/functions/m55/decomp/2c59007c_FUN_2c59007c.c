/* FUN_2c59007c @ 0x2c59007c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59007c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  uint *puStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  
  uVar3 = _LAB_2c590390;
  uVar2 = _LAB_2c59038c;
  uVar1 = _LAB_2c59035c;
  uStack_4c = *param_4;
  uStack_48 = param_4[1];
  iStack_2c = *_LAB_2c590360;
  param_1[2] = param_3;
  uStack_48 = uStack_48 & 0xffffff;
  param_1[3] = param_1 + 5;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_74 = 0;
  auStack_70[0] = 0;
  uStack_7c = uVar1;
  param_1[4] = 7;
  *param_1 = uVar2;
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  param_1[5] = uStack_4c;
  param_1[6] = uStack_48;
  param_1[7] = uStack_44;
  param_1[8] = uStack_40;
  uVar2 = _LAB_2c590364;
  param_1[9] = uVar3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piStack_58 = (int *)0x0;
  puStack_78 = auStack_70;
  FUN_2c58fee4(&puStack_78,0,0,uVar2,6);
  piVar8 = _LAB_2c590388;
  if (piStack_5c == piStack_58) {
    FUN_2c58f4c8(&piStack_60,piStack_5c,_LAB_2c590418);
    if (piStack_58 != piStack_5c) goto LAB_2c59013e;
LAB_2c5903a8:
    FUN_2c58f4c8(&piStack_60,piStack_5c,_LAB_2c59041c);
    if (piStack_58 != piStack_5c) goto LAB_2c59016e;
LAB_2c5903bc:
    FUN_2c58f734(&piStack_60,piStack_5c,_LAB_2c590420);
    if (piStack_58 == piStack_5c) goto LAB_2c5903d0;
  }
  else {
    *(undefined1 *)(piStack_5c + 5) = 0;
    *piStack_5c = (int)(piStack_5c + 2);
    piStack_5c[1] = 0xc;
    iVar4 = piVar8[1];
    iVar5 = piVar8[2];
    piStack_5c[2] = *piVar8;
    piStack_5c[3] = iVar4;
    piStack_5c[4] = iVar5;
    piStack_5c = piStack_5c + 6;
    if (piStack_58 == piStack_5c) goto LAB_2c5903a8;
LAB_2c59013e:
    piVar8 = _LAB_2c590368;
    *piStack_5c = (int)(piStack_5c + 2);
    piStack_5c[1] = 0xc;
    *(undefined1 *)(piStack_5c + 5) = 0;
    iVar4 = piVar8[1];
    iVar5 = piVar8[2];
    piStack_5c[2] = *piVar8;
    piStack_5c[3] = iVar4;
    piStack_5c[4] = iVar5;
    piStack_5c = piStack_5c + 6;
    if (piStack_58 == piStack_5c) goto LAB_2c5903bc;
LAB_2c59016e:
    piVar8 = _LAB_2c59036c;
    *piStack_5c = (int)(piStack_5c + 2);
    piStack_5c[1] = 9;
    *(undefined1 *)((int)piStack_5c + 0x11) = 0;
    iVar5 = piVar8[1];
    iVar4 = piVar8[2];
    piStack_5c[2] = *piVar8;
    piStack_5c[3] = iVar5;
    *(char *)(piStack_5c + 4) = (char)iVar4;
    piStack_5c = piStack_5c + 6;
    if (piStack_58 == piStack_5c) {
LAB_2c5903d0:
      FUN_2c58f734(&piStack_60,piStack_5c,_LAB_2c590424);
      goto LAB_2c5901c6;
    }
  }
  piVar8 = _LAB_2c590370;
  *piStack_5c = (int)(piStack_5c + 2);
  piStack_5c[1] = 9;
  *(undefined1 *)((int)piStack_5c + 0x11) = 0;
  iVar5 = piVar8[1];
  iVar4 = piVar8[2];
  piStack_5c[2] = *piVar8;
  piStack_5c[3] = iVar5;
  *(char *)(piStack_5c + 4) = (char)iVar4;
  piStack_5c = piStack_5c + 6;
LAB_2c5901c6:
  uStack_4c = 0;
  uStack_48 = uStack_48 & 0xffffff00;
  piStack_30 = (int *)0x0;
  uStack_54 = uVar1;
  piStack_38 = (int *)0x0;
  piStack_34 = (int *)0x0;
  puStack_50 = &uStack_48;
  FUN_2c58fee4(&puStack_50,0,0,_LAB_2c590374,0xc);
  piVar8 = _LAB_2c590378;
  if (piStack_34 == piStack_30) {
    FUN_2c58f734(&piStack_38,piStack_34,_LAB_2c590434);
  }
  else {
    *(undefined1 *)((int)piStack_34 + 0x11) = 0;
    *piStack_34 = (int)(piStack_34 + 2);
    piStack_34[1] = 9;
    iVar5 = piVar8[1];
    iVar4 = piVar8[2];
    piStack_34[2] = *piVar8;
    piStack_34[3] = iVar5;
    *(char *)(piStack_34 + 4) = (char)iVar4;
    piStack_34 = piStack_34 + 6;
  }
  piVar8 = _LAB_2c59037c;
  if (piStack_30 == piStack_34) {
    FUN_2c58f734(&piStack_38,piStack_34,_LAB_2c590430);
  }
  else {
    *piStack_34 = (int)(piStack_34 + 2);
    piStack_34[1] = 9;
    *(undefined1 *)((int)piStack_34 + 0x11) = 0;
    iVar5 = piVar8[1];
    iVar4 = piVar8[2];
    piStack_34[2] = *piVar8;
    piStack_34[3] = iVar5;
    *(char *)(piStack_34 + 4) = (char)iVar4;
    piStack_34 = piStack_34 + 6;
  }
  piVar8 = _LAB_2c590380;
  if (piStack_30 == piStack_34) {
    FUN_2c58f734(&piStack_38,piStack_34,_LAB_2c59042c);
  }
  else {
    *piStack_34 = (int)(piStack_34 + 2);
    piStack_34[1] = 9;
    *(undefined1 *)((int)piStack_34 + 0x11) = 0;
    iVar5 = piVar8[1];
    iVar4 = piVar8[2];
    piStack_34[2] = *piVar8;
    piStack_34[3] = iVar5;
    *(char *)(piStack_34 + 4) = (char)iVar4;
    piStack_34 = piStack_34 + 6;
  }
  piVar8 = _LAB_2c590384;
  if (piStack_30 == piStack_34) {
    FUN_2c58f734(&piStack_38,piStack_34,_LAB_2c590428);
  }
  else {
    *piStack_34 = (int)(piStack_34 + 2);
    piStack_34[1] = 9;
    *(undefined1 *)((int)piStack_34 + 0x11) = 0;
    iVar5 = piVar8[1];
    iVar4 = piVar8[2];
    piStack_34[2] = *piVar8;
    piStack_34[3] = iVar5;
    *(char *)(piStack_34 + 4) = (char)iVar4;
    piStack_34 = piStack_34 + 6;
  }
  FUN_2c58fd6c(param_1 + 10,&uStack_54);
  FUN_2c58fd6c(param_1 + 10,&uStack_7c);
  uStack_54 = uVar1;
  piVar8 = piStack_34;
  if (piStack_38 != piStack_34) {
    piVar6 = piStack_38 + 2;
    piVar7 = piStack_38;
    do {
      if (piVar6 != (int *)piVar6[-2]) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar7 = piVar7 + 6;
      piVar6 = piVar6 + 6;
      piVar8 = piStack_38;
    } while (piStack_34 != piVar7);
  }
  if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar8);
  }
  if (puStack_50 != &uStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  uStack_7c = uVar1;
  piVar8 = piStack_5c;
  if (piStack_60 != piStack_5c) {
    piVar6 = piStack_60 + 2;
    piVar7 = piStack_60;
    do {
      if (piVar6 != (int *)piVar6[-2]) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar7 = piVar7 + 6;
      piVar6 = piVar6 + 6;
      piVar8 = piStack_60;
    } while (piStack_5c != piVar7);
  }
  if (piVar8 == (int *)0x0) {
    if (puStack_78 != auStack_70) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c590360 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar8);
}

