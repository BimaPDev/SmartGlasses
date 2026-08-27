/* FUN_2c64af78 @ 0x2c64af78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64af78(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c64b094;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_2c66b19c();
      *(undefined4 *)(param_1 + uVar4) = uVar2;
      *(undefined4 *)(param_2 + uVar4) = 0;
      DataSynchronizationBarrier(0xf);
      uVar4 = uVar4 + 4;
    } while (uVar4 < param_3);
  }
  FUN_2c4bf258();
  uStack_3c = _LAB_2c64b098;
  uStack_2c = _LAB_2c64b09c;
  uStack_38 = 0;
  uStack_40 = CONCAT22((short)param_3,0x100);
  uStack_28 = _LAB_2c64b0a0;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iVar3 = func_0x2c4beebc(2,0);
  uStack_40 = CONCAT31(uStack_40._1_3_,(char)iVar3);
  if (iVar3 == 0xff) {
    FUN_2c6741e8(0xa10,_LAB_2c64b0b0);
  }
  else {
    iVar3 = FUN_2c4be910(_DAT_2c64b0a4,&uStack_40,0,1);
    pcVar1 = _DAT_2c64b0b8;
    uVar2 = _DAT_2c64b0a4;
    if (iVar3 == 0) {
      *_DAT_2c64b0b8 = '\x01';
      iVar3 = FUN_2c4bed8c(uVar2,&uStack_40);
      if (iVar3 == 0) {
        iVar3 = _LAB_2c64b0a8;
        if (*pcVar1 != '\0') {
          do {
            iVar3 = iVar3 + -100;
            FUN_2c673b08(100);
            if (*pcVar1 == '\0') break;
          } while (iVar3 != 0);
        }
        uVar2 = _LAB_2c64b0bc;
        if (param_3 != 0) {
          uVar4 = 0;
          do {
            if (*(int *)(param_2 + uVar4) != *(int *)(param_1 + uVar4)) {
              FUN_2c6741e8(0xa13,uVar2,param_2 + uVar4,*(undefined4 *)(param_2 + uVar4),
                           *(undefined4 *)(param_1 + uVar4));
            }
            uVar4 = uVar4 + 4;
          } while (uVar4 < param_3);
        }
      }
      else {
        FUN_2c4beffc(uStack_40 & 0xff);
        FUN_2c6741e8(0xa10,_LAB_2c64b0b4);
      }
    }
    else {
      FUN_2c4beffc(uStack_40 & 0xff);
      FUN_2c6741e8(0xa10,_LAB_2c64b0ac);
    }
  }
  if (*_LAB_2c64b094 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

