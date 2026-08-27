/* FUN_2c1616f4 @ 0x2c1616f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1616f4(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  *(char *)(unaff_r4 + 0x11) = (char)param_3;
  *(undefined1 *)(unaff_r5 + 0x11) = param_2;
  *(int *)(*(int *)(unaff_r4 + 0x54) + 0x44) = unaff_r5;
  _DAT_00000078 = 0x6f;
                    /* WARNING: Could not recover jumptable at 0x2c1611b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (0x6f,s_set_result_mutex_init_fail_2c161334._0_4_,
             *(undefined4 *)(*(int *)(unaff_r5 + 0x74) + 0x14),param_4,param_3);
  return;
}

