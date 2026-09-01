/* FUN_10035a7c @ 0x10035a7c */

void FUN_10035a7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r3;
  
  iVar3 = *(int *)PTR_DAT_10035afc;
  iVar2 = (**(code **)(PTR_DAT_10035b00 + 0x18))();
  uVar4 = ((int)PTR_DAT_10035b04 - (int)PTR_DAT_10035b08) * 0x20 & 0xff00;
  if (iVar2 != 0) goto LAB_10035ac8;
  FUN_100a5b78(uVar4 | 0x930031,PTR_s_ring_chlick_handler_10035b10,
               PTR_s_ring_chlick_handler_screen_on_10035b0c,uVar4,param_1,param_2,param_3);
  FUN_100a1b0c(DAT_10035b14);
  do {
    puVar1 = DAT_10035b18;
    iVar2 = (*(code *)DAT_10035b18[10])();
    if (iVar2 == 0) {
      if (*(int *)PTR_DAT_10035afc == iVar3) {
        return;
      }
    }
    else if (*(int *)PTR_DAT_10035afc == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x10035aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)();
      return;
    }
    FUN_1013cdc0();
    uVar4 = extraout_r3;
LAB_10035ac8:
    FUN_100a5b78(uVar4 | 0x980031,PTR_s_ring_chlick_handler_10035b10,DAT_10035b1c,uVar4,param_1,
                 param_2,param_3);
    (*(code *)*DAT_10035b20)(0x4c);
  } while( true );
}

