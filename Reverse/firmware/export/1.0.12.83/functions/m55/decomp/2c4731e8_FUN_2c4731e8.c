/* FUN_2c4731e8 @ 0x2c4731e8 */

/* WARNING: Control flow encountered bad instruction data */

uint * FUN_2c4731e8(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (((uint)param_2 & 3) != 0) {
    FUN_2c66ac44(DAT_2c473258,4,param_3,param_4,param_4);
    return (uint *)0x0;
  }
  uVar1 = param_3 - 8U & 0xfffffffc;
  if (uVar1 - 0xc <= DAT_2c47324c) {
    uVar1 = uVar1 | 1;
    uVar2 = *param_2;
    *param_2 = uVar1;
    FUN_2c472e28(param_1,param_2 + -1,uVar1,uVar2);
    puVar3 = (undefined4 *)((int)param_2 + (*param_2 & 0xfffffffc) + 4);
    if ((*param_2 & 0xfffffffc) != 0) {
      puVar3[-1] = param_2 + -1;
      *puVar3 = 2;
      return param_2;
    }
    FUN_2c472ee0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_2c66ac44(DAT_2c473254,0x14,DAT_2c473250,DAT_2c47324c,param_4);
  return (uint *)0x0;
}

