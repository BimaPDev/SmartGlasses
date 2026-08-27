/* FUN_2c6316ec @ 0x2c6316ec */

void FUN_2c6316ec(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  int local_1c;
  
  local_1c = *DAT_2c631808;
  if (*(ushort *)(param_1 + 0x36) != param_2) {
    FUN_2c608c7c();
    uVar1 = FUN_2c6073ec(param_1);
    uVar2 = FUN_2c6073f8(param_1);
    FUN_2c611f58(&local_24,uVar1,uVar2,(int)*(short *)(param_1 + 0x30),
                 *(ushort *)(param_1 + 0x36) >> 8,param_1 + 0x32,*(undefined1 *)(param_1 + 0x5c));
    local_24 = local_24 + -1 + *(short *)(param_1 + 0x14);
    local_20 = *(short *)(param_1 + 0x14) + local_20 + 1;
    local_22 = *(short *)(param_1 + 0x16) + local_22 + -1;
    local_1e = *(short *)(param_1 + 0x16) + local_1e + 1;
    FUN_2c6078f0(param_1,&local_24);
    if (param_2 == 0) {
      param_2 = 1;
    }
    *(short *)(param_1 + 0x36) = (short)param_2;
    uVar3 = FUN_2c604188(param_1);
    FUN_2c5fef20(uVar3,0);
    FUN_2c600bac(param_1);
    FUN_2c5fef20(uVar3,1);
    FUN_2c611f58(&local_24,uVar1,uVar2,(int)*(short *)(param_1 + 0x30),
                 *(undefined2 *)(param_1 + 0x36),param_1 + 0x32,*(undefined1 *)(param_1 + 0x5c));
    local_24 = local_24 + -1 + *(short *)(param_1 + 0x14);
    local_20 = local_20 + 1 + *(short *)(param_1 + 0x14);
    local_22 = local_22 + -1 + *(short *)(param_1 + 0x16);
    local_1e = *(short *)(param_1 + 0x16) + local_1e + 1;
    FUN_2c6078f0(param_1,&local_24);
  }
  if (*DAT_2c631808 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

