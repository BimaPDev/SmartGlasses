/* FUN_10119df6 @ 0x10119df6 */

void FUN_10119df6(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  (*param_1)(param_2,param_3,param_4,param_4,param_4);
  FUN_10115464();
  FUN_10068ad0();
  uVar2 = FUN_100539e8();
  puVar1 = (undefined4 *)thunk_FUN_10112f50();
  *puVar1 = 0;
                    /* WARNING: Could not recover jumptable at 0x10119e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x10119e0b)((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  return;
}

