/* FUN_14030b6c @ 0x14030b6c */

void FUN_14030b6c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  piVar1 = DAT_14030c68;
  iVar5 = *DAT_14030c68;
  local_14 = *DAT_14030c6c;
  if (iVar5 == 0) {
    iVar5 = FUN_140e52f8(DAT_14030c8c,0,0,0);
    *piVar1 = iVar5;
  }
  FUN_140e5718(iVar5);
  puVar4 = DAT_14030c94;
  uVar3 = DAT_14030c90;
  puVar2 = DAT_14030c78;
  if ((*DAT_14030c70 == 0) && (param_1 == 0)) {
    *DAT_14030c70 = 1;
    local_34 = *puVar4;
    uStack_30 = puVar4[1];
    uStack_2c = puVar4[2];
    uStack_28 = puVar4[3];
    local_24 = puVar4[4];
    uStack_20 = puVar4[5];
    uStack_1c = puVar4[6];
    uStack_18 = puVar4[7];
    FUN_1402a6e8(4,0xbb,DAT_14030c84,DAT_14030c80,uVar3);
    FUN_140315b0(&local_34,0x20);
    FUN_140e5398(0x20);
    FUN_140e5378(*piVar1,300);
  }
  else {
    local_38 = DAT_14030c74;
    *DAT_14030c70 = 0;
    local_34 = *puVar2;
    uStack_30 = puVar2[1];
    uStack_2c = puVar2[2];
    uStack_28 = puVar2[3];
    local_24 = puVar2[4];
    uStack_20 = puVar2[5];
    uStack_1c = puVar2[6];
    uStack_18 = puVar2[7];
    FUN_140315b0(&local_38,4);
    FUN_140e5398(0x12c0);
    FUN_1402a6e8(4,0xac,DAT_14030c84,DAT_14030c80,DAT_14030c7c);
    FUN_140315b0(&local_34,0x20);
    FUN_140e5398(800);
    iVar5 = DAT_14030c88;
    *(uint *)(DAT_14030c88 + 0x100) = *(uint *)(DAT_14030c88 + 0x100) & 0xffffff80;
    *(uint *)(iVar5 + 0x100) = *(uint *)(iVar5 + 0x100) | 0x55;
    FUN_140e5378(*piVar1,0x9c4);
  }
  if (*DAT_14030c6c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

