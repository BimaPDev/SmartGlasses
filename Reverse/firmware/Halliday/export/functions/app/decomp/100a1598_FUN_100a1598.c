/* FUN_100a1598 @ 0x100a1598 */

undefined4 FUN_100a1598(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)thunk_FUN_1009f30c(4,PTR_s_ringbuff_stream_init_100a15dc,param_3,param_4,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_100a5b78(((int)PTR_DAT_100a15e4 - (int)PTR_DAT_100a15e0) * 0x20 & 0xff00U | 0x980011,
                 PTR_s_ringbuff_stream_init_100a15ec,PTR_s_malloc_failed_100a15e8);
    uVar2 = 0xfffffff4;
  }
  else {
    *piVar1 = param_2;
    *param_1 = 0x55;
    uVar2 = *(undefined4 *)(param_2 + 8);
    *(int **)(param_1 + 0x54) = piVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}

