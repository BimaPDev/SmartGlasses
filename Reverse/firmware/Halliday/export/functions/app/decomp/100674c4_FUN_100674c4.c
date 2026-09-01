/* FUN_100674c4 @ 0x100674c4 */

int FUN_100674c4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = (param_3 * (uint)*(ushort *)(param_1 + 3) + param_2) *
            (uint)*(byte *)((int)param_1 + 0xe);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    return *param_1 + (iVar1 >> 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_framework_dis_100674f4,0x45,
               PTR_s_graphic_buffer_get_bufptr_100674f0,
               PTR_s_buffer____NULL____buffer_>data___100674ec);
}

