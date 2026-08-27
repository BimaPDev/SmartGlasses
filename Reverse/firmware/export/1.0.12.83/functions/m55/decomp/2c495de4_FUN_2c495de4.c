/* FUN_2c495de4 @ 0x2c495de4 */

undefined4
FUN_2c495de4(code *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_2c495e68;
  puVar1 = (undefined4 *)FUN_2c6685e0();
  uVar4 = *puVar1;
  puVar1 = (undefined4 *)FUN_2c6685e0();
  *puVar1 = 0;
  uVar2 = (*param_1)(param_3,&local_20,param_5);
  if (local_20 != param_3) {
    piVar3 = (int *)FUN_2c6685e0();
    if (*piVar3 != 0x22) {
      if (param_4 != (int *)0x0) {
        *param_4 = local_20 - param_3;
      }
      piVar3 = (int *)FUN_2c6685e0();
      if (*piVar3 == 0) {
        puVar1 = (undefined4 *)FUN_2c6685e0();
        *puVar1 = uVar4;
      }
      if (*DAT_2c495e68 == local_1c) {
        return uVar2;
      }
      goto LAB_2c495e62;
    }
    FUN_2c658686(param_2);
  }
  FUN_2c65867a(param_2);
LAB_2c495e62:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

