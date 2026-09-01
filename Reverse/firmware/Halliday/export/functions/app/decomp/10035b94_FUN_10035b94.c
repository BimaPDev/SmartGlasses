/* FUN_10035b94 @ 0x10035b94 */

void FUN_10035b94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *extraout_r3;
  undefined *puVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_10035bf8;
  iVar3 = *(int *)PTR_DAT_10035bf4;
  iVar2 = (**(code **)(PTR_DAT_10035bf8 + 0x18))();
  uVar5 = ((int)PTR_DAT_10035bfc - (int)PTR_DAT_10035c00) * 0x20 & 0xff00;
  puVar4 = PTR_DAT_10035c00;
  if (iVar2 == 0) {
    FUN_100a5b78(uVar5 | 0xb90031,PTR_s_ring_long_chlick_handler_10035c08,
                 PTR_s_ring_long_chlick_handler_screen_o_10035c04,PTR_DAT_10035c00,param_1,iVar3,
                 param_3);
    (**(code **)(puVar1 + 8))();
    puVar4 = extraout_r3;
  }
  FUN_100a5b78(uVar5 | 0xbc0031,PTR_s_ring_long_chlick_handler_10035c08,
               PTR_s_ring_long_chlick_handler_jump_to_10035c0c,puVar4,param_1,iVar3,param_3);
  if (*(int *)PTR_DAT_10035bf4 != iVar3) {
    FUN_1013cdc0();
  }
                    /* WARNING: Could not recover jumptable at 0x10035bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_10035c10)(0x60);
  return;
}

