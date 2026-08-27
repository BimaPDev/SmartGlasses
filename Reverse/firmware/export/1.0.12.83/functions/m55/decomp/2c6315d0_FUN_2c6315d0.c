/* FUN_2c6315d0 @ 0x2c6315d0 */

void FUN_2c6315d0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  int local_1c;
  
  local_1c = *DAT_2c6316e8;
  if ((*(short *)(param_1 + 0x32) != param_2) || (*(short *)(param_1 + 0x34) != param_3)) {
    FUN_2c608c7c(param_1);
    uVar1 = FUN_2c6073ec(param_1);
    uVar2 = FUN_2c6073f8(param_1);
    FUN_2c611f58(&local_24,uVar1,uVar2,(int)*(short *)(param_1 + 0x30),
                 *(undefined2 *)(param_1 + 0x36),param_1 + 0x32,*(undefined1 *)(param_1 + 0x5c));
    local_24 = local_24 + *(short *)(param_1 + 0x14);
    local_20 = *(short *)(param_1 + 0x14) + local_20;
    local_22 = *(short *)(param_1 + 0x16) + local_22;
    local_1e = *(short *)(param_1 + 0x16) + local_1e;
    FUN_2c6078f0(param_1,&local_24);
    *(short *)(param_1 + 0x32) = (short)param_2;
    *(short *)(param_1 + 0x34) = (short)param_3;
    uVar3 = FUN_2c604188(param_1);
    FUN_2c5fef20(uVar3,0);
    FUN_2c600bac(param_1);
    FUN_2c5fef20(uVar3,1);
    FUN_2c611f58(&local_24,uVar1,uVar2,(int)*(short *)(param_1 + 0x30),
                 *(undefined2 *)(param_1 + 0x36),param_1 + 0x32,*(undefined1 *)(param_1 + 0x5c));
    local_24 = *(short *)(param_1 + 0x14) + local_24;
    local_22 = local_22 + *(short *)(param_1 + 0x16);
    local_20 = *(short *)(param_1 + 0x14) + local_20;
    local_1e = *(short *)(param_1 + 0x16) + local_1e;
    FUN_2c6078f0(param_1,&local_24);
  }
  if (*DAT_2c6316e8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

