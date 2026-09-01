/* FUN_1006742c @ 0x1006742c */

void FUN_1006742c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    uVar1 = 0x30;
    puVar2 = PTR_s_buffer____NULL_1017a6c6_0xf_10067460;
  }
  else {
    piVar3 = (int *)(param_1 + 0x1c);
    if (-1 < *piVar3) {
      *piVar3 = *piVar3 + 1;
      return;
    }
    uVar1 = 0x31;
    puVar2 = PTR_s_atomic_get__buffer_>refcount__>__1006746c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_framework_dis_10067468,uVar1,
               PTR_s_graphic_buffer_ref_10067464,puVar2,param_4);
}

