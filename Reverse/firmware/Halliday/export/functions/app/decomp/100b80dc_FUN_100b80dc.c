/* FUN_100b80dc @ 0x100b80dc */

undefined4
FUN_100b80dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    FUN_10119dc2(DAT_100b811c,DAT_100b8118,DAT_100b8114,0x73,param_1,param_2);
    FUN_1011a1f0(DAT_100b8114,0x73,param_3,param_4);
  }
  if (*(code **)(*piVar2 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100b810e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,param_2,param_3);
    return uVar1;
  }
  return 0;
}

