/* FUN_2c4e3974 @ 0x2c4e3974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e3974(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    iVar2 = func_0x2c4dfa02();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = param_3;
      *(undefined4 *)(iVar2 + 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x2c4ddafa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(1);
      return uVar1;
    }
  }
  FUN_2c4e34f4(0x8ffd,0x101,1);
  FUN_2c4e0504(_LAB_2c4e39d0,0,0,0,_LAB_2c4e39d8,0x101,_LAB_2c4e39d4,0x1300,_LAB_2c4e39cc);
  return 0;
}

