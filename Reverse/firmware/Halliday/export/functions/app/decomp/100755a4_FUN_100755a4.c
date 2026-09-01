/* FUN_100755a4 @ 0x100755a4 */

undefined4 FUN_100755a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 != (int *)0x0) && (*param_2 == DAT_100755e4)) {
    iVar2 = *(int *)(param_1 + 0x10);
    FUN_100a5b78(DAT_100755f0 | (DAT_100755ec - DAT_100755e8) * 0x20 & 0xff00U,DAT_100755f8,
                 DAT_100755f4,param_2);
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 != 0) && (param_2[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100755de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0xc))();
      return uVar1;
    }
  }
  return 0;
}

