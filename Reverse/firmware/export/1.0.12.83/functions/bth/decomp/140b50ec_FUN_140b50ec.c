/* FUN_140b50ec @ 0x140b50ec */

void FUN_140b50ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140e5348(param_1,param_2,0,0xf);
  FUN_140e55f8(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x140e5a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_140e5a64)(param_3,0,0xf,param_4);
  return;
}

