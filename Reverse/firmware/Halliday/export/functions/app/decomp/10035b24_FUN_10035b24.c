/* FUN_10035b24 @ 0x10035b24 */

void FUN_10035b24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_10035b80;
  iVar3 = *(int *)PTR_DAT_10035b7c;
  iVar2 = (**(code **)(PTR_DAT_10035b80 + 0x18))();
  if (iVar2 == 0) {
    if (*(int *)PTR_DAT_10035b7c == iVar3) {
      return;
    }
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_10035b88 - (int)PTR_DAT_10035b84) * 0x20 & 0xff00U | 0xa70031,
                 PTR_s_ring_double_chlick_handler_10035b90,
                 PTR_s_ring_double_chlick_handler_turn_o_10035b8c,PTR_DAT_10035b84,param_1,param_2,
                 param_3);
    if (*(int *)PTR_DAT_10035b7c == iVar3) goto LAB_10035b62;
  }
  FUN_1013cdc0();
LAB_10035b62:
                    /* WARNING: Could not recover jumptable at 0x10035b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0xc))();
  return;
}

