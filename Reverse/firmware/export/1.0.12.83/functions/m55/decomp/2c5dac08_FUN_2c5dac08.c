/* FUN_2c5dac08 @ 0x2c5dac08 */

void FUN_2c5dac08(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c [4];
  int local_1c;
  
  local_1c = *DAT_2c5dacb0;
  iVar3 = FUN_2c5da7cc(param_1,4,param_3,0);
  piVar2 = DAT_2c5dacb4;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5dacc0,0x25c,DAT_2c5dacbc,DAT_2c5dacb8);
  }
  local_38 = 0x17;
  local_34 = local_2c;
  local_34 = (int *)FUN_2c5da228(&local_38,0);
  local_2c[0] = local_38;
  iVar4 = *piVar2;
  iVar6 = piVar2[1];
  iVar7 = piVar2[3];
  local_34[2] = piVar2[2];
  iVar3 = piVar2[5];
  *local_34 = iVar4;
  *(short *)(local_34 + 5) = (short)iVar3;
  uVar1 = *(undefined1 *)((int)piVar2 + 0x16);
  local_34[3] = iVar7;
  *(undefined1 *)((int)local_34 + 0x16) = uVar1;
  iVar3 = piVar2[4];
  local_34[1] = iVar6;
  local_34[4] = iVar3;
  local_30 = local_38;
  *(undefined1 *)((int)local_34 + local_38) = 0;
  uVar5 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar5,local_34,1);
  uVar8 = FUN_2c5c561c();
  *(undefined8 *)(param_1 + 8) = uVar8;
  if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5dacb0 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

