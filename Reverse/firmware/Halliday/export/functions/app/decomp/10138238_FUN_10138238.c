/* FUN_10138238 @ 0x10138238 */

undefined4 FUN_10138238(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((int)(param_1[0x16] << 0x1d) < 0) {
    FUN_100e13d0(*param_1,*(undefined2 *)(param_1 + 0x15),*(undefined2 *)(param_1 + 0x14),
                 *(undefined1 *)(param_1 + 0x12),param_2,param_2);
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}

