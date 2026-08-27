/* FUN_2c5ba550 @ 0x2c5ba550 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ba550(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  puVar1 = _LAB_2c5ba640;
  iStack_14 = *_LAB_2c5ba644;
  FUN_2c64c9c4(_LAB_2c5ba640,_LAB_2c5ba64c,_LAB_2c5ba648,0);
  uStack_48 = _LAB_2c5ba654;
  *puVar1 = _LAB_2c5ba650;
  puVar1[1] = puVar1 + 3;
  uVar4 = _LAB_2c5ba65c;
  uStack_58 = _LAB_2c5ba658;
  puVar1[2] = 0;
  uStack_54 = 2;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uStack_3c = 0;
  uStack_5c = 1;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  puVar1[0xe] = 0;
  uStack_50 = _LAB_2c5ba660;
  uStack_4c = 3;
  uStack_44 = 4;
  uStack_40 = _LAB_2c5ba664;
  uStack_38 = _LAB_2c5ba668;
  uStack_34 = 5;
  uStack_30 = _LAB_2c5ba66c;
  uStack_2c = 6;
  uStack_28 = _LAB_2c5ba670;
  uStack_24 = 7;
  uStack_20 = _LAB_2c5ba674;
  uStack_1c = 8;
  uStack_18 = _LAB_2c5ba678;
  FUN_2c4fd9cc(uVar4,&uStack_5c,&iStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,auStack_68,
               auStack_74);
  FUN_2c64c9c4(_LAB_2c5ba65c,_LAB_2c5ba67c,_LAB_2c5ba648);
  piVar3 = _LAB_2c5ba680;
  piVar5 = _LAB_2c5ba680 + 6;
  _LAB_2c5ba680[3] = 0;
  piVar3[4] = 0x3f800000;
  piVar2 = _LAB_2c5ba644;
  *piVar3 = (int)piVar5;
  piVar3[1] = 1;
  piVar3[2] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  if (*piVar2 == iStack_14) {
    if (DAT_2c6685dc == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_2c66ee38(2,_LAB_2c5ba684,piVar3,_LAB_2c5ba648);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

