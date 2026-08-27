/* FUN_1403d274 @ 0x1403d274 */

undefined4 FUN_1403d274(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_20 [2];
  undefined2 local_1e;
  undefined2 local_1c;
  int local_18;
  int local_14;
  
  uVar1 = DAT_1403d2fc;
  local_14 = *DAT_1403d2f8;
  FUN_1402a6e8(4,0xa7,DAT_1403d304,DAT_1403d300,DAT_1403d2f4,param_3,param_4);
  local_20[0] = *(undefined1 *)(param_2 + 5);
  local_1e = *(undefined2 *)(param_2 + 8);
  local_1c = *(undefined2 *)(param_2 + 10);
  local_18 = param_2 + 0xc;
  FUN_1402a6e8(4,0xb4,DAT_1403d304,DAT_1403d300,uVar1,local_20[0],local_1e);
  FUN_1402a9fc(DAT_1403d308,1,*(undefined2 *)(param_2 + 10),param_2 + 0xc);
  FUN_1403d9a0(local_20);
  if (*DAT_1403d2f8 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

