/* FUN_100674f8 @ 0x100674f8 */

void FUN_100674f8(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_framework_dis_1006755c,0x203,
                 PTR_s__composer_de_complete_handler_10067558,PTR_s_status____0_10067554);
  }
  FUN_1011e796((uint)*(byte *)(param_3 + 0x27c) * 0xc4 + param_3 + 0x30);
  bVar1 = *(char *)(param_3 + 0x27c) + 1;
  if (bVar1 < 3) {
    *(byte *)(param_3 + 0x27c) = bVar1;
  }
  if (2 < bVar1) {
    *(undefined1 *)(param_3 + 0x27c) = 0;
  }
  cVar2 = *(char *)(param_3 + 0x27f) + -1;
  *(char *)(param_3 + 0x27f) = cVar2;
  if (((cVar2 == '\0') && (*(int *)(param_3 + 0x2c) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_3 + 0x2c) + 4),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1006754e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

