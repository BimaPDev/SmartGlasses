/* FUN_14065cc0 @ 0x14065cc0 */

bool FUN_14065cc0(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined2 uStack_e;
  int local_c;
  
  local_c = *DAT_14065d0c;
  local_1c = *DAT_14065d10;
  uStack_18 = DAT_14065d10[1];
  uStack_14 = DAT_14065d10[2];
  _local_10 = CONCAT22((short)((uint)DAT_14065d10[3] >> 0x10),*(undefined2 *)(param_1 + 0xc));
  iVar1 = FUN_140db784(&local_1c,param_1,0x10);
  if (*DAT_14065d0c == local_c) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

