/* FUN_2c546fa4 @ 0x2c546fa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c546fa4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [2];
  
  puVar2 = _LAB_2c547078;
  local_5c = 1;
  local_14[0] = *_LAB_2c547074;
  local_58 = _LAB_2c547070;
  local_54 = 2;
  local_50 = _LAB_2c54707c;
  local_3c = 0;
  local_4c = 3;
  local_48 = _LAB_2c547080;
  local_44 = 4;
  local_40 = _LAB_2c547084;
  local_38 = _LAB_2c547088;
  local_34 = 5;
  local_30 = _LAB_2c54708c;
  local_2c = 6;
  local_28 = _LAB_2c547090;
  local_24 = 7;
  local_20 = _LAB_2c547094;
  local_1c = 8;
  local_18 = _LAB_2c547098;
  FUN_2c4fd9cc(_LAB_2c54709c,&local_5c,local_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c54709c,_LAB_2c5470a4,_LAB_2c5470a0);
  FUN_2c64c9c4(puVar2,_LAB_2c5470a8,_LAB_2c5470a0);
  uVar3 = _LAB_2c5470ac;
  puVar2[2] = 0;
  *puVar2 = uVar3;
  puVar2[7] = puVar2 + 9;
  puVar2[1] = puVar2 + 3;
  piVar1 = _LAB_2c547074;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  puVar2[0xd] = puVar2 + 0xf;
  puVar2[0xe] = 0;
  if (*piVar1 == local_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

