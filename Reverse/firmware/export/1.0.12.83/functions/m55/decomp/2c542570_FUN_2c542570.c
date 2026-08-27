/* FUN_2c542570 @ 0x2c542570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c542570(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [2];
  int iStack_20;
  int iStack_1c;
  
  *(int *)(param_3 + 0x10) = unaff_r4 + -1;
  puVar1 = _LAB_2c542648;
  iStack_1c = unaff_r5 + -0x69;
  iStack_20 = iRam2c5428ac + -0x14;
  aiStack_28[0] = *_LAB_2c54264c;
  FUN_2c64c9c4(_LAB_2c542648,_LAB_2c542654,_LAB_2c542650,0);
  uStack_6c = _LAB_2c54265c;
  *puVar1 = _LAB_2c542658;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uStack_70 = 1;
  uStack_50 = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_68 = 2;
  uStack_64 = _LAB_2c542660;
  uStack_60 = 3;
  uStack_5c = _LAB_2c542664;
  uStack_58 = 4;
  uStack_54 = _LAB_2c542668;
  uStack_4c = _LAB_2c54266c;
  uStack_48 = 5;
  uStack_44 = _LAB_2c542670;
  uStack_40 = 6;
  uStack_3c = _LAB_2c542674;
  uStack_38 = 7;
  uStack_34 = _LAB_2c542678;
  uStack_30 = 8;
  uStack_2c = _LAB_2c54267c;
  FUN_2c4fd9cc(_LAB_2c542680,&uStack_70,aiStack_28,0,auStack_80,auStack_74,auStack_78,auStack_84,
               auStack_7c,auStack_88);
  if (*_LAB_2c54264c == aiStack_28[0]) {
    iStack_1c = iStack_20;
    if (DAT_2c6685dc == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_2c66ee38(2,_LAB_2c542684,_LAB_2c542680,_LAB_2c542650);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

