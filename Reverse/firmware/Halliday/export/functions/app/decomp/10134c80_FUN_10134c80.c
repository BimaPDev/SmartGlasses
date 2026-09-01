/* FUN_10134c80 @ 0x10134c80 */

void FUN_10134c80(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 == 0xffff) {
      *(undefined2 *)(param_3 + 8) = 0xffff;
      goto LAB_10134c9e;
    }
    *(short *)(param_3 + 8) = (short)(param_2 + 1U);
    if ((uint)*(ushort *)(param_3 + 0xe) < (param_2 + 1U & 0xffff)) goto LAB_10134c9e;
  }
  iVar1 = FUN_100cdd44(param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
LAB_10134c9e:
                    /* WARNING: Could not recover jumptable at 0x10134caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 4))(param_1,0,param_3);
  return;
}

