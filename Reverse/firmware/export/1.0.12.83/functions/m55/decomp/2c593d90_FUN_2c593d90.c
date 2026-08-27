/* FUN_2c593d90 @ 0x2c593d90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c593d90(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_ec;
  undefined1 **ppuStack_e8;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [8];
  undefined1 **ppuStack_d0;
  undefined4 uStack_cc;
  undefined1 *puStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [8];
  undefined1 **ppuStack_b8;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 **ppuStack_a0;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [8];
  undefined1 **ppuStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  undefined4 **ppuStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 **ppuStack_50;
  uint uStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  uVar2 = _LAB_2c593ef8;
  iVar4 = *_LAB_2c593eec;
  if ((param_3 == 0) || (*(char *)(*(int *)(param_1 + 8) + 8) != '\0')) {
    puStack_c8 = auStack_c0;
    uStack_e4 = _LAB_2c593ef0;
    uStack_ec = *(undefined4 *)(_LAB_2c593ef4 + 4);
    uStack_58 = 0x3f800000;
    puStack_b0 = auStack_a8;
    uStack_64 = 1;
    uStack_dc = 0;
    auStack_d8[0] = 0;
    uStack_c4 = 0;
    auStack_c0[0] = 0;
    uStack_ac = 0;
    auStack_a8[0] = 0;
    uStack_94 = 0;
    auStack_90[0] = 0;
    uStack_7c = 0;
    auStack_78[0] = 0;
    uStack_4c = uStack_4c & 0xffffff00;
    uStack_44 = 0;
    auStack_40[0] = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    ppuStack_50 = (undefined1 **)0x0;
    puStack_e0 = auStack_d8;
    puStack_98 = auStack_90;
    puStack_80 = auStack_78;
    ppuStack_68 = &ppuStack_50;
    puStack_48 = auStack_40;
    uVar2 = FUN_2c66c4ec(uStack_ec);
    FUN_2c591ec8(&puStack_80,0,0,uStack_ec,uVar2);
    uVar2 = FUN_2c66c4ec(param_2);
    FUN_2c591ec8(&puStack_c8,0,uStack_c4,param_2,uVar2);
    FUN_2c593300(param_1,0,&uStack_e4);
    uStack_e4 = _LAB_2c593ef0;
    if (puStack_48 != auStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    FUN_2c5561f0(&ppuStack_68);
    if ((undefined1 ***)ppuStack_68 != &ppuStack_50) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_80 != auStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_98 != auStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_b0 != auStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_c8 != auStack_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_e0 != auStack_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c593eec == iVar4) {
      return;
    }
  }
  else if (*_LAB_2c593eec == iVar4) {
    uVar3 = *(undefined4 *)(DAT_2c593c24 + 4);
    iStack_34 = *DAT_2c593c20;
    ppuStack_b8 = &puStack_b0;
    uStack_ec = DAT_2c593c28;
    uStack_60 = 0x3f800000;
    uStack_6c = 1;
    uStack_e4 = 0;
    puStack_e0 = (undefined1 *)((uint)puStack_e0 & 0xffffff00);
    uStack_cc = 0;
    puStack_c8 = (undefined1 *)((uint)puStack_c8 & 0xffffff00);
    uStack_b4 = 0;
    puStack_b0 = (undefined1 *)((uint)puStack_b0 & 0xffffff00);
    uStack_9c = 0;
    puStack_98 = (undefined1 *)((uint)puStack_98 & 0xffffff00);
    uStack_84 = 0;
    puStack_80 = (undefined1 *)((uint)puStack_80 & 0xffffff00);
    uStack_54 = uStack_54 & 0xffffff00;
    uStack_4c = 0;
    puStack_48 = (undefined1 *)((uint)puStack_48 & 0xffffff00);
    ppuStack_68 = (undefined4 **)0x0;
    uStack_64 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    ppuStack_e8 = &puStack_e0;
    ppuStack_d0 = &puStack_c8;
    ppuStack_a0 = &puStack_98;
    ppuStack_88 = &puStack_80;
    puStack_70 = &uStack_58;
    ppuStack_50 = &puStack_48;
    uVar1 = FUN_2c66c4ec(uVar3);
    FUN_2c591ec8(&ppuStack_88,0,0,uVar3,uVar1);
    uVar1 = FUN_2c66c4ec(uVar2);
    FUN_2c591ec8(&ppuStack_d0,0,uStack_cc,uVar2,uVar1);
    FUN_2c593300(param_1,0,&uStack_ec);
    uStack_ec = DAT_2c593c28;
    if (ppuStack_50 != &puStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    FUN_2c5561f0(&puStack_70);
    if (puStack_70 != &uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (ppuStack_88 != &puStack_80) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (ppuStack_a0 != &puStack_98) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (ppuStack_b8 != &puStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (ppuStack_d0 != &puStack_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (ppuStack_e8 != &puStack_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*DAT_2c593c20 == iStack_34) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

