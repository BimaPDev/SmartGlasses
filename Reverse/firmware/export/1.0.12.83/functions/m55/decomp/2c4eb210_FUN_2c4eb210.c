/* FUN_2c4eb210 @ 0x2c4eb210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb210(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined1 auStack_9c [64];
  undefined4 uStack_5c;
  undefined1 auStack_58 [60];
  int iStack_1c;
  
  puVar1 = _LAB_2c4eb508;
  puVar5 = _LAB_2c4eb500;
  iStack_1c = *_LAB_2c4eb504;
  *_LAB_2c4eb4fc = 0;
  *puVar5 = param_1;
  func_0x2c4fe0a8(param_1,0);
  FUN_2c60438c();
  puVar5 = _LAB_2c4eb50c;
  func_0x2c4fe0a8();
  uVar2 = FUN_2c606a10();
  *puVar1 = uVar2;
  func_0x2c4ebddc();
  FUN_2c607048(*puVar1,0x2064);
  FUN_2c627e28(*puVar1,1);
  FUN_2c606d60(*puVar1,0xff000000,0);
  uVar3 = FUN_2c637344(*puVar1);
  uVar2 = _LAB_2c4eb510;
  *puVar5 = uVar3;
  FUN_2c638730(uVar3,uVar2);
  FUN_2c606e38(*puVar5,_LAB_2c4eb514,0);
  FUN_2c606e20(*puVar5,0xffffffff,0);
  FUN_2c607048(*puVar5,0x2064,0x27d1);
  FUN_2c606e5c(*puVar5,2,0);
  lv_obj_add_flag_invalidate(*puVar5,2);
  FUN_2c606b6c(*puVar5,0x2e);
  FUN_2c606da8(*puVar5,1,0);
  FUN_2c606d9c(*puVar5,2,0);
  FUN_2c606d84(*puVar5,0xffffffff,0);
  uVar2 = *puVar5;
  FUN_2c606d30(uVar2,5,0);
  FUN_2c606d3c(uVar2,5,0);
  FUN_2c606d18(uVar2,5,0);
  FUN_2c606d24(uVar2,5,0);
  iVar4 = FUN_2c602de4();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x141,DAT_2c4eb634,DAT_2c4eb630,DAT_2c4eb62c);
  }
  FUN_2c602df0();
  FUN_2c602f64(iVar4,*puVar5);
  FUN_2c603110(*puVar5);
  FUN_2c602454(*puVar5,DAT_2c4eb518,0xd,0);
  FUN_2c602454(*puVar5,DAT_2c4eb51c,0x21,0);
  FUN_2c602454(*puVar1,DAT_2c4eb520,0x21,0);
  iVar4 = FUN_2c4e9354();
  uVar2 = (**(code **)(iVar4 + 4))();
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb524;
  uStack_a8 = DAT_2c4eb524[1];
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,uVar2);
  FUN_2c4eb0f8(&uStack_b0);
  iVar4 = FUN_2c4e9354();
  uVar2 = (**(code **)(iVar4 + 0x18))();
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb52c;
  uStack_a8 = DAT_2c4eb52c[1];
  uStack_a4 = CONCAT11(uStack_a4._1_1_,(char)DAT_2c4eb52c[2]);
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,uVar2);
  FUN_2c4eb0f8(&uStack_b0);
  iVar4 = FUN_2c4e9354();
  uVar2 = (**(code **)(iVar4 + 0x1c))();
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb530;
  uStack_a8 = DAT_2c4eb530[1];
  uStack_a4 = (undefined2)DAT_2c4eb530[2];
  uStack_a2 = (undefined1)((uint)DAT_2c4eb530[2] >> 0x10);
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,uVar2);
  FUN_2c4eb0f8(&uStack_b0);
  uStack_5c = 0;
  FUN_2c674268(auStack_58,0,0x3c);
  puVar5 = (undefined4 *)FUN_2c4e94fc();
  uVar2 = (*(code *)*puVar5)();
  FUN_2c66b450(&uStack_5c,0x40,DAT_2c4eb534,uVar2);
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb538;
  uStack_a8 = DAT_2c4eb538[1];
  uStack_a4 = (undefined2)DAT_2c4eb538[2];
  uStack_a2 = (undefined1)((uint)DAT_2c4eb538[2] >> 0x10);
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  iVar4 = FUN_2c4e94fc();
  uVar2 = (**(code **)(iVar4 + 4))(0);
  FUN_2c66b450(&uStack_5c,0x40,DAT_2c4eb534,uVar2);
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb53c;
  uStack_a8 = DAT_2c4eb53c[1];
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  iVar4 = FUN_2c4e94fc();
  uVar2 = (**(code **)(iVar4 + 4))(1);
  FUN_2c66b450(&uStack_5c,0x40,DAT_2c4eb534,uVar2);
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb540;
  uStack_a8 = DAT_2c4eb540[1];
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  FUN_2c674268(&uStack_5c,0,0x40);
  iVar4 = FUN_2c4eab7c();
  (**(code **)(iVar4 + 0xc))(&uStack_5c,0x40);
  uStack_b0 = *puVar1;
  uStack_ac = DAT_2c4eb544;
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  FUN_2c674268(&uStack_5c,0,0x40);
  iVar4 = FUN_2c4eab7c();
  (**(code **)(iVar4 + 4))(&uStack_5c,0x40);
  uStack_ac._0_3_ = (undefined3)*DAT_2c4eb548;
  uStack_b0 = *puVar1;
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb528,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  FUN_2c674268(&uStack_5c,0,0x40);
  iVar4 = FUN_2c4e9354();
  (**(code **)(iVar4 + 0x20))(&uStack_5c,0x40);
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb54c;
  uStack_a8 = DAT_2c4eb54c[1];
  uStack_a4 = CONCAT11(uStack_a4._1_1_,(char)DAT_2c4eb54c[2]);
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb614,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  FUN_2c48b9e4(&uStack_bc);
  FUN_2c66b450(&uStack_5c,0x40,DAT_2c4eb618,uStack_bc);
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb61c;
  uStack_a8._0_1_ = (char)DAT_2c4eb61c[1];
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb614,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  FUN_2c66b450(&uStack_5c,0x40,DAT_2c4eb618,uStack_b8);
  uStack_b0 = *puVar1;
  uStack_ac = *DAT_2c4eb620;
  uStack_a8 = CONCAT31(uStack_a8._1_3_,(char)DAT_2c4eb620[1]);
  FUN_2c66b450(auStack_9c,0x40,DAT_2c4eb614,&uStack_5c);
  FUN_2c4eb0f8(&uStack_b0);
  iVar4 = FUN_2c6440f0(DAT_2c4eb624,0);
  if (iVar4 != 0) {
    if (*DAT_2c4eb628 == iStack_1c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  TRACE(1,0x14e,DAT_2c4eb634,DAT_2c4eb630,DAT_2c4eb638);
}

