/* FUN_1005fbf8 @ 0x1005fbf8 */

undefined4 FUN_1005fbf8(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  iVar1 = FUN_1011c14c(0x44,0x8000,2,PTR_LAB_10163352_1_1005fe84,0x1e,0);
  uVar5 = ((int)PTR_DAT_1005fe88 - (int)PTR_DAT_1005fe8c) * 0x20 & 0xff00;
  uVar2 = DAT_1005fe98;
  puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
  puVar4 = PTR_s_______error_at_CycleSetup_1005fe90;
  if (((iVar1 == 0) &&
      (iVar1 = FUN_1011c14c(0x44,0x8500,2,DAT_1005fe9c,6,0), uVar2 = DAT_1005fea4,
      puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005fea0, iVar1 == 0)) &&
     (iVar1 = FUN_1011c14c(0x44,0x9000,2,DAT_1005fea8,0x1e,0), uVar2 = DAT_1005feb0,
     puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005feac, iVar1 == 0)) {
    iVar1 = FUN_1011c14c(0x44,0x9500,2,DAT_1005feb4,0x1e,0);
    if (iVar1 != 0) {
      uVar5 = uVar5 | 0x20c0000;
      puVar4 = DAT_1005feb8;
LAB_1005fc88:
      uVar2 = uVar5 | 0x31;
      puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
      goto LAB_1005fc26;
    }
    iVar1 = FUN_1011c14c(0x44,0xa000,2,DAT_1005febc,0xc,0);
    uVar2 = DAT_1005fec4;
    puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
    puVar4 = DAT_1005fec0;
    if (((iVar1 == 0) &&
        (iVar1 = FUN_1011c14c(0x44,0xa100,2,DAT_1005fec8,0xc,0), uVar2 = DAT_1005fed0,
        puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005fecc, iVar1 == 0)) &&
       (iVar1 = FUN_1011c14c(0x44,0xa200,2,DAT_1005fed4,0xc,0), uVar2 = DAT_1005fedc,
       puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005fed8, iVar1 == 0)) {
      iVar1 = FUN_1011c14c(0x44,0xa300,2,DAT_1005fee0,0xc,0);
      if (iVar1 != 0) {
        uVar5 = uVar5 | 0x2200000;
        puVar4 = DAT_1005fee4;
        goto LAB_1005fc88;
      }
      iVar1 = FUN_1011c14c(0x44,0xa400,2,DAT_1005fee8,0xc,0);
      uVar2 = DAT_1005fef0;
      puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
      puVar4 = DAT_1005feec;
      if (((iVar1 == 0) &&
          (iVar1 = FUN_1011c14c(0x44,0xa500,2,DAT_1005fef4,0xc,0), uVar2 = DAT_1005fefc,
          puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005fef8, iVar1 == 0)) &&
         (iVar1 = FUN_1011c14c(0x44,0xa600,2,DAT_1005ff00,0xc,0), uVar2 = DAT_1005ff08,
         puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005ff04, iVar1 == 0)) {
        iVar1 = FUN_1011c14c(0x44,0xa700,2,PTR_DAT_1005ff0c,0xc,0);
        if (iVar1 != 0) {
          uVar5 = uVar5 | 0x2340000;
          puVar4 = PTR_s_______error_at_CH7Setup_1005ff10;
          goto LAB_1005fc88;
        }
        iVar1 = FUN_1011c14c(0x44,0xa800,2,PTR_LAB_10163338_1_1005ff14,0xc,0);
        uVar2 = DAT_1005ff1c;
        puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
        puVar4 = PTR_s_______error_at_CH8Setup_1005ff18;
        if (((iVar1 == 0) &&
            (iVar1 = FUN_1011c14c(0x44,0xa900,2,DAT_1005ff20,0xc,0), uVar2 = DAT_1005ff28,
            puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005ff24, iVar1 == 0))
           && (iVar1 = FUN_1011c14c(0x44,0xaa00,2,DAT_1005ff2c,4,0), uVar2 = DAT_1005ff34,
              puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005ff30, iVar1 == 0))
        {
          iVar1 = FUN_1011c14c(0x44,0xb000,2,PTR_DAT_1005ff38,0xc,0);
          if (iVar1 != 0) {
            uVar5 = uVar5 | 0x2480000;
            puVar4 = PTR_s_______error_at_Slider0Setup_1005ff3c;
            goto LAB_1005fc88;
          }
          iVar1 = FUN_1011c14c(0x44,0xb006,2,PTR_DAT_1005ff40,8,0);
          uVar2 = DAT_1005ff48;
          puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
          puVar4 = PTR_s_______error_at_DeltaLinks0_1005ff44;
          if (((iVar1 == 0) &&
              (iVar1 = FUN_1011c14c(0x44,0xb100,2,DAT_1005ff4c,0xc,0), uVar2 = DAT_1005ff54,
              puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005ff50, iVar1 == 0))
             && (iVar1 = FUN_1011c14c(0x44,0xb106,2,DAT_1005ff58,8,0), uVar2 = DAT_1005ff60,
                puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94, puVar4 = DAT_1005ff5c, iVar1 == 0
                )) {
            iVar1 = FUN_1011c14c(0x44,0xc000,2,DAT_1005ff64,0x12,0);
            if (iVar1 != 0) {
              uVar5 = uVar5 | 0x25c0000;
              puVar4 = DAT_1005ff68;
              goto LAB_1005fc88;
            }
            iVar1 = FUN_1011c14c(0x44,0xd0,1,DAT_1005ff6c,0x15,0);
            uVar2 = DAT_1005ff74;
            puVar3 = PTR_s_IQS7222C_INIT_WriteConfig_1005fe94;
            puVar4 = DAT_1005ff70;
            if (((iVar1 == 0) &&
                (iVar1 = FUN_1011c14c(0x44,0xdb,1,DAT_1005ffc0,1,0), uVar2 = DAT_1005ffcc,
                puVar3 = DAT_1005ffc8, puVar4 = DAT_1005ffc4, iVar1 == 0)) &&
               (iVar1 = FUN_1011c14c(0x44,0xdc,1,DAT_1005ffd0,2,1), uVar2 = DAT_1005ffd8,
               puVar3 = DAT_1005ffc8, puVar4 = DAT_1005ffd4, iVar1 == 0)) {
              FUN_100a5b78(DAT_1005ffdc | uVar5,DAT_1005ffc8,DAT_1005ffe0);
              return 0;
            }
          }
        }
      }
    }
  }
  uVar2 = uVar2 | uVar5;
LAB_1005fc26:
  FUN_100a5b78(uVar2,puVar3,puVar4);
  return 1;
}

