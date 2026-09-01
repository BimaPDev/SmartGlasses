/* FUN_10077c28 @ 0x10077c28 */

int FUN_10077c28(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_100775bc(0,&stack0xffffffef,param_3,param_4,param_1,param_2);
  if (iVar1 == 0) {
    *param_2 = 0;
    FUN_10077be4(0,param_1);
  }
  else {
    FUN_100a5b78(DAT_10077c74 | ((int)PTR_DAT_10077c6c - (int)PTR_DAT_10077c68) * 0x20 & 0xff00U,
                 DAT_10077c78,PTR_s_Get_AUDIO_PLL0_error__d_10077c70,iVar1);
  }
  return iVar1;
}

