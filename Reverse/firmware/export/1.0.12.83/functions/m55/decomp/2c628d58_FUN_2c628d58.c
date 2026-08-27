/* FUN_2c628d58 @ 0x2c628d58 */

void FUN_2c628d58(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = *DAT_2c628db4;
  FUN_2c62e030(param_1,param_2,0,0);
  uVar2 = FUN_2c62de74(param_1,&local_1c,4,0);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_2c62de74(param_1,&local_18,4,0);
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (((int)uVar2 == 0) && (*param_3 == local_18)) goto LAB_2c628d9a;
  }
  local_1c = 0xffffffff;
LAB_2c628d9a:
  if ((*DAT_2c628db4 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(local_1c,uVar1,*DAT_2c628db4 ^ local_14,0);
  }
  return;
}

